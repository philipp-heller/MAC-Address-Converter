//
// Created by pholo on 4/7/2023.
//

#include <iostream>

#ifndef MAC_ADDRESS_CONVERTER_GUI_MACCONVERTER_H
#define MAC_ADDRESS_CONVERTER_GUI_MACCONVERTER_H

namespace macConverter
{
    std::string GetMacAddress();
    std::string SimplifyMacAddress(std::string s);
    std::string ConvertMacAddress(std::string s, int format);
}

#endif //MAC_ADDRESS_CONVERTER_GUI_MACCONVERTER_H
