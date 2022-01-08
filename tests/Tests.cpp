#include <gtest/gtest.h>

#include "Circle.cpp"
#include "Cube.cpp"
#include "Cylinder.cpp"

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);
    
    return RUN_ALL_TESTS();
}