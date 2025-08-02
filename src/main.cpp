#include <iostream>
#include "module/example.h"
#include <boost/asio.hpp>

int main(int argc, char** argv) {
    std::cout << "Hello, from main!\n";
    example::printExample();

    try {
        // Create an io_context object
        boost::asio::io_context io;

        // Create a deadline timer (using Boost.Asio)
        boost::asio::deadline_timer timer(io, boost::posix_time::seconds(1));

        std::cout << "Boost is linked correctly!" << std::endl;
        io.run();  // Runs the IO context, triggering the timer
    } catch (const boost::system::system_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
