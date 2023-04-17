//
// Created by pholo on 4/7/2023.
//

#include "macConverter.h"

namespace macConverter
{
    std::string GetMacAddress() {
        std::string input;
        std::cout << "Please enter the MAC Address: ";
        std::getline(std::cin, input);
        return input;
    }

    std::string SimplifyMacAddress(std::string s) {
        std::string output;
        for (int i = 0; i < s.length(); i++) {
            if (!isalnum(s[i])) {
                continue;
            }
            output += toupper(s[i]);
        }
        return output;
    }

    std::string ConvertMacAddress(std::string s, int format) {
        std::string output;
        switch (format) {
            case 1:
                for (int i = 0; i < s.length(); i++) {
                    if (i % 2 == 0 && i != 0) {
                        output += ":";
                    }
                    output += s[i];
                }
                break;
            case 2:
                for (int i = 0; i < s.length(); i++) {
                    if (i % 2 == 0 && i != 0) {
                        output += "-";
                    }
                    output += s[i];
                }
                break;
            case 3:
                for (int i = 0; i < s.length(); i++) {
                    if (i % 4 == 0 && i != 0) {
                        output += ".";
                    }
                    output += s[i];
                }
                break;
            default:

                break;
        }
        return output;
    }
}