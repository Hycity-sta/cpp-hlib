#include <iostream>
#include <hlib.assert>

auto main(int argc, char* argv[]) -> int
try
{
    hlib::except_argument(argc != 1, "argc isn't equal 1");
    hlib::assert(argc != 0, "argc is not equal 0");
    return 0;
}
catch (const std::exception& error)
{
    std::cerr << error.what();
    std::cerr << "\n";
}
