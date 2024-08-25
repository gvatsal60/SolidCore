/***************************************************************************************
 * File: main.cpp
 * Author: Vatsal Gupta(gvatsal60)
 * Date: 25-Aug-2024
 * Description: This file contains the `main` function, which is the starting
 * point of the program.
 **************************************************************************************/

/***************************************************************************************
 * Includes
 **************************************************************************************/
#include <cstdio>

#include "dependency_inversion.hpp"
#include "interface_segregated.hpp"
#include "liskov_substitution.hpp"
#include "open_closed.hpp"
#include "single_responsibility.hpp"

/***************************************************************************************
 * Global Functions Definitions
 **************************************************************************************/

/**
 * @brief Entry point of the program.
 *
 * This function is the entry point of the program.
 *
 * @param argc The number of command-line arguments passed to the program.
 * @param argv An array of C-style strings representing the command-line
 * arguments.
 *
 * @return Returns 0 to indicate successful execution.
 */
int main([[maybe_unused]] int argc, [[maybe_unused]] char const *argv[]) {
  printf("%s:%d %s Hello World!!!\n", "main.cpp", __LINE__,
         __FUNCTION__);  // REMOVE
  return 0;
}