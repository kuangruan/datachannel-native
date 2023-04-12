// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

#pragma once

#include "Reliability.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeReliability final {
public:
    using CppType = ::libdc::Reliability;
    using JniType = jobject;

    using Boxed = NativeReliability;

    ~NativeReliability();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeReliability();
    friend ::djinni::JniClass<NativeReliability>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/cdnbye/libdc/Reliability") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Lcom/cdnbye/libdc/ReliabilityType;ZJ)V") };
    const jfieldID field_mType { ::djinni::jniGetFieldID(clazz.get(), "mType", "Lcom/cdnbye/libdc/ReliabilityType;") };
    const jfieldID field_mUnordered { ::djinni::jniGetFieldID(clazz.get(), "mUnordered", "Z") };
    const jfieldID field_mRexmitMs { ::djinni::jniGetFieldID(clazz.get(), "mRexmitMs", "J") };
};

} // namespace djinni_generated
