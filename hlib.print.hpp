#pragma once

#include <iostream>
#include <string_view>

namespace hlib
{
    auto print(std::string_view str) -> void
    {
        std::cout << str;
    }

    auto println(std::string_view str) -> void
    {
        hlib::print(str);
        hlib::print("\n");
    }
}
