// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

#pragma once

#include "CertificateType.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeCertificateType final : ::djinni::JniEnum {
public:
    using CppType = ::libdc::CertificateType;
    using JniType = jobject;

    using Boxed = NativeCertificateType;

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return static_cast<CppType>(::djinni::JniClass<NativeCertificateType>::get().ordinal(jniEnv, j)); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, CppType c) { return ::djinni::JniClass<NativeCertificateType>::get().create(jniEnv, static_cast<jint>(c)); }

private:
    NativeCertificateType() : JniEnum("com/cdnbye/libdc/CertificateType") {}
    friend ::djinni::JniClass<NativeCertificateType>;
};

} // namespace djinni_generated
