// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

#pragma once

#include <string>

namespace libdc {

/**
 * DC end
 * PC start
 */
class SdpCallback {
public:
    virtual ~SdpCallback() = default;

    virtual void onSdp(const std::string & sdp) = 0;
};

} // namespace libdc
