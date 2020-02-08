#include "gtest/gtest.h"

#include <string>
#include <iostream>
#include <iwu/Log.h>


int main(int argc, char **argv) {

    // Enable library logging
    iwu::Log::set_level(iwu::Log::Level::verbose);

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}