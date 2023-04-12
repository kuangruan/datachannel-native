// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

#pragma once

#include "IceStateCallback.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeIceStateCallback final : ::djinni::JniInterface<::libdc::IceStateCallback, NativeIceStateCallback> {
public:
    using CppType = std::shared_ptr<::libdc::IceStateCallback>;
    using CppOptType = std::shared_ptr<::libdc::IceStateCallback>;
    using JniType = jobject;

    using Boxed = NativeIceStateCallback;

    ~NativeIceStateCallback();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeIceStateCallback>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeIceStateCallback>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeIceStateCallback();
    friend ::djinni::JniClass<NativeIceStateCallback>;
    friend ::djinni::JniInterface<::libdc::IceStateCallback, NativeIceStateCallback>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::libdc::IceStateCallback
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onStateChanged(::libdc::IceState state) override;

    private:
        friend ::djinni::JniInterface<::libdc::IceStateCallback, ::djinni_generated::NativeIceStateCallback>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/cdnbye/libdc/IceStateCallback") };
    const jmethodID method_onStateChanged { ::djinni::jniGetMethodID(clazz.get(), "onStateChanged", "(Lcom/cdnbye/libdc/IceState;)V") };
};

} // namespace djinni_generated
