#include <iostream>
#include "module/example.h"
#include <boost/version.hpp>

int main(int argc, char** argv) {
    std::cout << "Hello, from main!\n";
    Example::printExample();

    std::cout << "Boost version: "
              << BOOST_VERSION / 100000 << "."
              << BOOST_VERSION / 100 % 1000 << "."
              << BOOST_VERSION % 100
              << std::endl;

    return 0;
}
