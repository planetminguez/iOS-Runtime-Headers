/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;



@interface GMMClientPropertiesResponse : PBCodable 
{
    NSString *_new_cohort;
}

@property(readonly) BOOL hasNew_cohort;
@property(retain) NSString *new_cohort;


- (BOOL)readFrom:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)hasNew_cohort;
- (void)setNew_cohort:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)new_cohort;

@end