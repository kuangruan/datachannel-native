// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

#include "NativeDcEventCallback.hpp"  // my header

namespace djinni_generated {

NativeDcEventCallback::NativeDcEventCallback() : ::djinni::JniInterface<::libdc::DcEventCallback, NativeDcEventCallback>() {}

NativeDcEventCallback::~NativeDcEventCallback() = default;

NativeDcEventCallback::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeDcEventCallback::JavaProxy::~JavaProxy() = default;

void NativeDcEventCallback::JavaProxy::onEvent() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeDcEventCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onEvent);
    ::djinni::jniExceptionCheck(jniEnv);
}

} // namespace djinni_generated
