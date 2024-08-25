/***************************************************************************************
 * File: single_responsibility.hpp
 * Author: Vatsal Gupta(gvatsal60)
 * Date: 18-Aug-2024
 * Description: Single Responsibility Principle (SRP)
 * A class should have only one reason to change, meaning it should have only
 * one job or responsibility.
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
#include <string_view>

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
 * @brief Class that violates SRP
 */
class User1 {
 public:
  User1(const std::string& name, const std::string& email)
      : name_(name), email_(email) {}

  void SetName(std::string_view name) { name_ = name; }
  void SetEmail(std::string_view email) { email_ = email; }

  std::string GetName() const { return name_; }
  std::string GetEmail() const { return email_; }

  void printUser() const {
    std::cout << "Name: " << name_ << ", Email: " << email_ << std::endl;
  }

 private:
  std::string name_{};
  std::string email_{};
};

/**
 * @brief Class that adheres to SRP
 */
class User2 {
 public:
  User2(const std::string& name, const std::string& email)
      : name_(name), email_(email) {}

  void SetName(std::string_view name) { name_ = name; }
  void SetEmail(std::string_view email) { email_ = email; }

  std::string GetName() const { return name_; }
  std::string GetEmail() const { return email_; }

 private:
  std::string name_{};
  std::string email_{};
};

/**
 * @brief Prints user information for objects with `GetName` and `GetEmail`
 * methods.
 *
 * @tparam T Type of the object to print. Must have `GetName()` and
 * `GetEmail()` methods.
 */
template <typename T>
class UserPrinter {
 public:
  static void PrintUser(const T& obj) {
    std::cout << "Name: " << obj.GetName() << ", Email: " << obj.GetEmail()
              << std::endl;
  }
};
