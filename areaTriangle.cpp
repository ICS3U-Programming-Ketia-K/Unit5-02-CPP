// Copyright (c) 2022 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Jan. 19, 2022
// This program calls function to convert temperature in Celsius to Fahrenheit

#include <iostream>
#include <iomanip>

void CalcArea(float base, float height) {
   // This function calculates the area of a triangle
   // declare variables
   float area;

   // calculate the area using base and height
   area = (base*height)/2;
   // display the area to the user
   std::cout << "The area of the triangle is " << std::fixed;
   std::cout << std::setprecision(1) << area << "cm^2";
}

int main() {
   // declare variables
   std::string baseFromUserString;
   std::string heightFromUserString;
   float baseFromUserFloat;
   float heightFromUserFloat;
   // get the base from the user
   std::cout << "Enter the base of the triangle(cm): ";
   std::cin >> baseFromUserString;
   try {
      // convert base from user from string to float
      baseFromUserFloat = stof(baseFromUserString);
      // get the height from the user
      std::cout << "Enter the height of the triangle(cm): ";
      std::cin >> heightFromUserString;
      try {
          // convert height from user from string to float
          heightFromUserFloat = stof(heightFromUserString);
          if (baseFromUserFloat > 0 && heightFromUserFloat > 0) {
              // call function
               CalcArea(baseFromUserFloat, heightFromUserFloat);
          } else {
              std::cout << "The base and height must be greater than 0.";
          }
        } catch (std::invalid_argument) {
            // tells the user when there is an invalid input
            std::cout << heightFromUserString << 
                    " is not a number. Enter a number.\n";
        }
    } catch (std::invalid_argument) {
        // tells the user when there is an invalid input
        std::cout << baseFromUserString << 
                " is not a number. Enter a number.\n";
    }
}
