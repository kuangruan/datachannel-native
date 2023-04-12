// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

#pragma once

#include "IceServer.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeIceServer final {
public:
    using CppType = ::libdc::IceServer;
    using JniType = jobject;

    using Boxed = NativeIceServer;

    ~NativeIceServer();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeIceServer();
    friend ::djinni::JniClass<NativeIceServer>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/cdnbye/libdc/IceServer") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;Ljava/lang/String;SLcom/cdnbye/libdc/IceServerType;Ljava/lang/String;Ljava/lang/String;Lcom/cdnbye/libdc/IceServerRelayType;)V") };
    const jfieldID field_mUrl { ::djinni::jniGetFieldID(clazz.get(), "mUrl", "Ljava/lang/String;") };
    const jfieldID field_mHostname { ::djinni::jniGetFieldID(clazz.get(), "mHostname", "Ljava/lang/String;") };
    const jfieldID field_mPort { ::djinni::jniGetFieldID(clazz.get(), "mPort", "S") };
    const jfieldID field_mType { ::djinni::jniGetFieldID(clazz.get(), "mType", "Lcom/cdnbye/libdc/IceServerType;") };
    const jfieldID field_mUsername { ::djinni::jniGetFieldID(clazz.get(), "mUsername", "Ljava/lang/String;") };
    const jfieldID field_mPassword { ::djinni::jniGetFieldID(clazz.get(), "mPassword", "Ljava/lang/String;") };
    const jfieldID field_mRelayType { ::djinni::jniGetFieldID(clazz.get(), "mRelayType", "Lcom/cdnbye/libdc/IceServerRelayType;") };
};

} // namespace djinni_generated
