/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSLock, NSMutableArray, NSObject<OS_dispatch_source>;

@interface _GEOURLManifestListener : NSObject {
    NSMutableArray *_handlers;
    NSLock *_handlersLock;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

+ (id)sharedListener;

- (void)_finish:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (void)waitForManifestWithHandler:(id)arg1;

@end