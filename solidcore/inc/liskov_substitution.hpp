/***************************************************************************************
 * File: liskov_substitution.hpp
 * Author: Vatsal Gupta(gvatsal60)
 * Date: 18-Aug-2024
 * Description: Liskov Substitution Principle (LSP)
 * Subtypes must be substitutable for their base types without altering the
 * correctness of the program.
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

#include <iostream>
#include <string>

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
 * @brief Abstract base class representing a generic bird.
 */
class Bird {
 public:
  virtual ~Bird() = default;
  virtual void Fly() const { std::cout << "Bird is flying" << std::endl; }
};

/**
 * @brief Derived class representing a sparrow, a type of bird.
 */
class Sparrow : public Bird {
 public:
  ~Sparrow() override = default;
  void Fly() const override { std::cout << "Sparrow is flying" << std::endl; }
};

/**
 * @brief Derived class representing an ostrich, a type of bird that cannot fly.
 */
class Ostrich : public Bird {
 public:
  ~Ostrich() override = default;
  void Fly() const override { std::cerr << "Ostriches can't fly" << std::endl; }
};
