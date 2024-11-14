/***************************************************************************************
 * File: open_closed.cpp
 * Author: Vatsal Gupta(gvatsal60)
 * Date: 18-Aug-2024
 * Description: Brief description of the file's purpose.
 **************************************************************************************/

/***************************************************************************************
 * Includes
 **************************************************************************************/

#include "open_closed.hpp"

#include <span>

/***************************************************************************************
 * Global Functions Definitions
 **************************************************************************************/

/**
 * @brief Calculates the total area of a collection of shapes.
 * Iterates over a vector of pointers to `Shape` objects and sums their areas.
 *
 * @param shapes A vector of pointers to `Shape` objects whose areas are to be
 * summed.
 * @return The total area of all the shapes in the vector.
 */
double TotalArea(const std::span<Shape* const>& shapes) {
  double total{};
  for (const auto& shape : shapes) {
    total += shape->Area();
  }

  return total;
}

/***************************************************************************************
 * Class Methods Definitions
 **************************************************************************************/
