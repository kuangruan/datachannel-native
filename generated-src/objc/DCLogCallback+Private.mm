// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

#import "DCLogCallback+Private.h"
#import "DCLogCallback.h"
#import "DCLogLevel+Private.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

class LogCallback::ObjcProxy final
: public ::libdc::LogCallback
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::LogCallback;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void onLog(::libdc::LogLevel c_level, const std::string & c_message) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onLog:(::djinni::Enum<::libdc::LogLevel, DCLogLevel>::fromCpp(c_level))
                                                    message:(::djinni::String::fromCpp(c_message))];
        }
    }
};

} // namespace djinni_generated

namespace djinni_generated {

auto LogCallback::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto LogCallback::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return dynamic_cast<ObjcProxy&>(*cpp).djinni_private_get_proxied_objc_object();
}

} // namespace djinni_generated
