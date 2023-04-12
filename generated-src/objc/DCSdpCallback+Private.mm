// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

#import "DCSdpCallback+Private.h"
#import "DCSdpCallback.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

class SdpCallback::ObjcProxy final
: public ::libdc::SdpCallback
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::SdpCallback;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void onSdp(const std::string & c_sdp) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onSdp:(::djinni::String::fromCpp(c_sdp))];
        }
    }
};

} // namespace djinni_generated

namespace djinni_generated {

auto SdpCallback::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto SdpCallback::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return dynamic_cast<ObjcProxy&>(*cpp).djinni_private_get_proxied_objc_object();
}

} // namespace djinni_generated
