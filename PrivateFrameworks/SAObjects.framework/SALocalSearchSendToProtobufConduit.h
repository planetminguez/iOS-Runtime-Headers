/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSData, NSURL;

@interface SALocalSearchSendToProtobufConduit : SABaseClientBoundCommand {
}

@property(copy) NSArray * attributes;
@property(copy) NSURL * endpoint;
@property(copy) NSData * rawRequest;
@property(copy) NSURL * targetAppId;
@property int timeoutInSeconds;

+ (id)sendToProtobufConduit;
+ (id)sendToProtobufConduitWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributes;
- (id)encodedClassName;
- (id)endpoint;
- (id)groupIdentifier;
- (id)rawRequest;
- (BOOL)requiresResponse;
- (void)setAttributes:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setRawRequest:(id)arg1;
- (void)setTargetAppId:(id)arg1;
- (void)setTimeoutInSeconds:(int)arg1;
- (id)targetAppId;
- (int)timeoutInSeconds;

@end
