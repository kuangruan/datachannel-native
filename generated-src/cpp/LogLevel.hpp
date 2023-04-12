// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

#pragma once

#include <functional>

namespace libdc {

enum class LogLevel : int {
    NONE = 0,
    FATAL = 1,
    ERROR = 2,
    WARNING = 3,
    INFO = 4,
    DEBUG = 5,
    VERBOSE = 6,
};

constexpr const char* to_string(LogLevel e) noexcept {
    constexpr const char* names[] = {
        "None",
        "Fatal",
        "Error",
        "Warning",
        "Info",
        "Debug",
        "Verbose",
    };
    return names[static_cast<int>(e)];
}

} // namespace libdc

namespace std {

template <>
struct hash<::libdc::LogLevel> {
    size_t operator()(::libdc::LogLevel type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

} // namespace std
