// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

#pragma once

#include <functional>

namespace libdc {

enum class ReliabilityType : int {
    RELIABLE = 0,
    REXMIT = 1,
    TIMED = 2,
};

constexpr const char* to_string(ReliabilityType e) noexcept {
    constexpr const char* names[] = {
        "Reliable",
        "Rexmit",
        "Timed",
    };
    return names[static_cast<int>(e)];
}

} // namespace libdc

namespace std {

template <>
struct hash<::libdc::ReliabilityType> {
    size_t operator()(::libdc::ReliabilityType type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

} // namespace std
