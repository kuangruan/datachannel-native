// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace libdc {

class DcErrorCallback;
class DcEventCallback;
class DcMessageCallback;

class DataChannel {
public:
    virtual ~DataChannel() = default;

    virtual void close() = 0;

    virtual bool sendText(const std::string & msg) = 0;

    virtual bool sendBinary(const std::vector<uint8_t> & msg) = 0;

    virtual bool isOpen() = 0;

    virtual bool isClosed() = 0;

    virtual int32_t maxMessageSize() = 0;

    virtual int32_t bufferedAmount() = 0;

    virtual void onOpen(const /*not-null*/ std::shared_ptr<DcEventCallback> & callback) = 0;

    virtual void onClosed(const /*not-null*/ std::shared_ptr<DcEventCallback> & callback) = 0;

    virtual void onError(const /*not-null*/ std::shared_ptr<DcErrorCallback> & callback) = 0;

    virtual void onMessage(const /*not-null*/ std::shared_ptr<DcMessageCallback> & callback) = 0;

    virtual void onBufferedAmountLow(const /*not-null*/ std::shared_ptr<DcEventCallback> & callback) = 0;

    virtual void setBufferedAmountLowThreshold(int32_t amount) = 0;
};

} // namespace libdc
