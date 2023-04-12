// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

#import "DCDataChannelInit.h"


@implementation DCDataChannelInit

- (nonnull instancetype)initWithReliability:(nonnull DCReliability *)reliability
                                 negotiated:(BOOL)negotiated
                                         id:(nullable NSNumber *)id
                                   protocol:(nonnull NSString *)protocol
{
    if (self = [super init]) {
        _reliability = reliability;
        _negotiated = negotiated;
        _id = id;
        _protocol = [protocol copy];
    }
    return self;
}

+ (nonnull instancetype)DataChannelInitWithReliability:(nonnull DCReliability *)reliability
                                            negotiated:(BOOL)negotiated
                                                    id:(nullable NSNumber *)id
                                              protocol:(nonnull NSString *)protocol
{
    return [[self alloc] initWithReliability:reliability
                                  negotiated:negotiated
                                          id:id
                                    protocol:protocol];
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p reliability:%@ negotiated:%@ id:%@ protocol:%@>", self.class, (void *)self, self.reliability, @(self.negotiated), self.id, self.protocol];
}

#endif
@end
