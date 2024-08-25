/***************************************************************************************
 * File: gtest.cpp
 * Author: Vatsal Gupta(gvatsal60)
 * Date: 25-Aug-2024
 * Description: This file initializes and runs Google Test. It sets up the
 *testing environment and executes all defined tests, returning the result.
 **************************************************************************************/

/***************************************************************************************
 * Includes
 **************************************************************************************/
#include <gtest/gtest.h>

/***************************************************************************************
 * Global Functions Definitions
 **************************************************************************************/

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
