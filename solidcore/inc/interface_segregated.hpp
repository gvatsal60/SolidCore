/***************************************************************************************
 * File: interface_segregated.hpp
 * Author: Vatsal Gupta(gvatsal60)
 * Date: 18-Aug-2024
 * Description: Interface Segregation Principle (ISP)
 * Clients should not be forced to depend on interfaces they do not use.
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
 * @brief Abstract base class for text printing.
 *
 * Provides an interface for classes that implement text printing functionality.
 */
class Printer {
 public:
  virtual ~Printer() = default;
  virtual void Print(const std::string& text) = 0;
};

/**
 * @brief Abstract base class for document scanning.
 *
 * Provides an interface for classes that implement document scanning
 * functionality.
 */
class Scanner {
 public:
  virtual ~Scanner() = default;
  virtual void Scan(const std::string& document) = 0;
};

/**
 * @brief A Multi-function device adhering to ISP
 *
 * Inherits from both `Printer` and `Scanner` interfaces. Provides
 * implementations for printing and scanning functionalities.
 */
class MultiFunctionDevice : public Printer, public Scanner {
 public:
  void Print(const std::string& text) override {
    std::cout << "Printing: " << text << std::endl;
  }

  void Scan(const std::string& document) override {
    std::cout << "Scanning: " << document << std::endl;
  }
};

/**
 * @brief A simple implementation of the Printer interface.
 *
 * Provides a basic implementation of the `Print` method that outputs text to
 * the standard output.
 */
class SimplePrinter : public Printer {
 public:
  void Print(const std::string& text) override {
    std::cout << "Printing: " << text << std::endl;
  }
};

/**
 * @brief A simple implementation of the Scanner interface.
 *
 * Provides a basic implementation of the `Scan` method that processes and
 * outputs the document to the standard output.
 */
class SimpleScanner : public Scanner {
 public:
  void Scan(const std::string& document) override {
    std::cout << "Scanning: " << document << std::endl;
  }
};
