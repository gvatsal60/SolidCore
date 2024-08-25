/***************************************************************************************
 * File: open_closed.hpp
 * Author: Vatsal Gupta(gvatsal60)
 * Date: 18-Aug-2024
 * Description: Open/Closed Principle (OCP)
 * Software entities should be open for extension but closed for modification.
 **************************************************************************************/

/***************************************************************************************
 * License
 **************************************************************************************/
/*
 * This file is licensed under the Apache 2.0 License.
 * License information should be updated as necessary.
 */

/***************************************************************************************
 * Includes
 **************************************************************************************/
#pragma once

#include <cmath>
#include <iostream>
#include <vector>

/***************************************************************************************
 * Constants
 **************************************************************************************/

/***************************************************************************************
 * Structure Declarations
 **************************************************************************************/

/***************************************************************************************
 * Class Declarations
 **************************************************************************************/

/**
 * @brief Abstract base class for shapes.
 *
 * Defines an interface for shapes with a method to calculate the area.
 */
class Shape {
 public:
  virtual ~Shape() = default;
  virtual double Area() const = 0;
};

/**
 * @brief Represents a rectangle shape.
 *
 * Inherits from `Shape` and implements the `Area()` method to calculate
 * the area of a rectangle based on its width and height.
 */
class Rectangle : public Shape {
 public:
  Rectangle(const double width, const double height)
      : width_(width), height_(height) {}
  double Area() const override { return width_ * height_; }

 private:
  double width_{};
  double height_{};
};

/**
 * @brief Represents a circle shape.
 *
 * Inherits from `Shape` and implements the `Area()` method to calculate
 * the area of a circle based on its radius.
 */
class Circle : public Shape {
 public:
  explicit Circle(const double radius) : radius_(radius) {}
  double Area() const override { return M_PI * radius_ * radius_; }

 private:
  double radius_{};
};
