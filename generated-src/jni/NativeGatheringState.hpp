// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

#pragma once

#include "GatheringState.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeGatheringState final : ::djinni::JniEnum {
public:
    using CppType = ::libdc::GatheringState;
    using JniType = jobject;

    using Boxed = NativeGatheringState;

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return static_cast<CppType>(::djinni::JniClass<NativeGatheringState>::get().ordinal(jniEnv, j)); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, CppType c) { return ::djinni::JniClass<NativeGatheringState>::get().create(jniEnv, static_cast<jint>(c)); }

private:
    NativeGatheringState() : JniEnum("com/cdnbye/libdc/GatheringState") {}
    friend ::djinni::JniClass<NativeGatheringState>;
};

} // namespace djinni_generated
