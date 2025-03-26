#include "core/logger.hpp"
#include <iostream>
#include <fstream>
#include <string>

Logger::Logger(const std::string& filename) : log_file(filename, std::ios::app) {
    if (!log_file.is_open()) {
        std::cerr << "Failed to open log file: " << filename << std::endl;
    }
}

void Logger::log(const std::string& message) {
    if (log_file.is_open()) {
        log_file << message << std::endl;
    }
}

Logger::~Logger() {
    if (log_file.is_open()) {
        log_file.close();
    }
}