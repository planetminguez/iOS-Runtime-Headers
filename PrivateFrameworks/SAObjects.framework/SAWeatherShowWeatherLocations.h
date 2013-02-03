/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL;

@interface SAWeatherShowWeatherLocations : SABaseClientBoundCommand {
}

@property(copy) NSURL * targetAppId;

+ (id)showWeatherLocations;
+ (id)showWeatherLocationsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;

@end