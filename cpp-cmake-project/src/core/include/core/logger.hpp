#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>
#include <iostream>

class Logger {
public:
    enum class LogLevel {
        INFO,
        WARNING,
        ERROR
    };

    Logger() = default;

    void log(const std::string& message, LogLevel level = LogLevel::INFO) const;

private:
    std::string logLevelToString(LogLevel level) const;
};

#endif // LOGGER_HPP