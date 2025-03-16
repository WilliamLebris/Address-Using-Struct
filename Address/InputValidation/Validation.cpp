//
//  Validation.cpp
//  Address
//
//  Created by William Tissi on 3/16/25.
//

#include "Validation.hpp"
#include <iostream>
#include <cctype>

bool isValidString(const std::string& input) {
    return !input.empty(); // Ensure input is not empty
}

bool isValidNameOrCity(const std::string& input) {
    if (input.empty()) return false; // Ensure input is not empty first

    for (char c : input) { // Loop through each character
        if (std::isdigit(c)) { // If it's a number, return false because a name or a city can not have number, like Berkel2ey
            return false;
        }
    }
    return true; // Valid input
}

bool isValidZipCode(const std::string& zip) {
    if (zip.length() != 5) return false; // Ensure ZIP code is exactly 5 digits
    for (char c : zip) {
        if (!isdigit(c)) return false; // Ensure all characters are digits
    }
    return true;
}
