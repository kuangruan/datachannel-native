// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

#pragma once

#include <functional>

namespace libdc {

enum class SignalingState : int {
    STABLE = 0,
    HAVELOCALOFFER = 1,
    HAVEREMOTEOFFER = 2,
    HAVELOCALPRANSWER = 3,
    HAVEREMOTEPRANSWER = 4,
};

constexpr const char* to_string(SignalingState e) noexcept {
    constexpr const char* names[] = {
        "Stable",
        "HaveLocalOffer",
        "HaveRemoteOffer",
        "HaveLocalPranswer",
        "HaveRemotePranswer",
    };
    return names[static_cast<int>(e)];
}

} // namespace libdc

namespace std {

template <>
struct hash<::libdc::SignalingState> {
    size_t operator()(::libdc::SignalingState type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

} // namespace std
