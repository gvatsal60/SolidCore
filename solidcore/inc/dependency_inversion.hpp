/***************************************************************************************
 * File: dependency_inversion.hpp
 * Author: Vatsal Gupta(gvatsal60)
 * Date: 16-Aug-2024
 * Description: Dependency Inversion Principle (DIP)
 * High-level modules should not depend on low-level modules. Both should depend
 * on abstractions. Abstractions should not depend on details. Details should
 * depend on abstractions.
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
#include <memory>

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
 * @brief Abstract base class for logging messages.
 *
 * Defines an interface for logging messages. Derived classes must implement the
 * `Log` method.
 */
class Logger {
 public:
  virtual ~Logger() = default;
  virtual void Log(const std::string& message) = 0;
};

/**
 * @brief A logger that outputs messages to the console. (Low Level)
 *
 * Implements the `Logger` interface and provides a concrete implementation of
 * the `Log` method that prints messages to the standard output.
 */
class ConsoleLogger : public Logger {
 public:
  void Log(const std::string& message) override {
    std::cout << "Log message: " << message << std::endl;
  }
};

/**
 * @brief Represents an application that uses a logger to output messages.(High
 * Level)
 *
 * The `Application` class is initialized with a `Logger` instance and uses it
 * to log messages when performing work.
 */
class Application {
 public:
  explicit Application(std::shared_ptr<Logger> logger)
      : logger_(std::move(logger)) {}
  void DoWork() const { logger_->Log("Application is doing work"); }

 private:
  std::shared_ptr<Logger> logger_{};
};
