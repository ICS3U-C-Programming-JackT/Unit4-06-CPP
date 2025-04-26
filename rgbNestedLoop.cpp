// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: April 23, 2025
// Number guess loop program in c++

#include <cstdio>
#include <iostream>
#include <thread>

int main() {
    // Loop through every RGB color code
    for (int red = 0; red <= 255; red += 15) {
        for (int green = 0; green <= 255; green += 15) {
            for (int blue = 0; blue <= 255; blue += 15) {
                // Sleep for 1 millisecond
                std::this_thread::sleep_for(std::chrono::milliseconds(1));

                // Print out the color code with actual colour
                printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)",
                    red, green, blue, red, green, blue);
                printf("\n");
            }
        }
    }
}
