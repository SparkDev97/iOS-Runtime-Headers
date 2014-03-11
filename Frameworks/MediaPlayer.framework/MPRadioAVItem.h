/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSString, RadioStation, RadioTrack;

@interface MPRadioAVItem : MPAVItem {
    NSArray *_buyOffers;
    BOOL _heartbeatInvalid;
    BOOL _isBanned;
    BOOL _isInWishList;
    BOOL _isLiked;
    RadioTrack *_radioTrack;
    RadioStation *_station;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationName;
}

@property(getter=isHeartbeatInvalid) BOOL heartbeatInvalid;
@property BOOL isBanned;
@property BOOL isInWishList;
@property BOOL isLiked;
@property(retain) RadioStation * station;
@property(readonly) NSString * stationHash;
@property(readonly) long long stationID;
@property(readonly) NSString * stationName;

- (void).cxx_destruct;
- (void)_applyLoudnessInfoForVolumeNormalization;
- (void)_internalIsBannedDidChangeNotification:(id)arg1;
- (void)_internalIsInWishlistDidChangeNotification:(id)arg1;
- (void)_internalIsLikedDidChangeNotification:(id)arg1;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void)addDerivedStationForArtist:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (id)album;
- (long long)albumStoreID;
- (id)artist;
- (id)artworkTimeMarkers;
- (id)buyOffers;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)copyrightText;
- (unsigned int)countForQueueFeeder;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)imageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1 time:(double)arg2 usePlaceholderAsFallback:(BOOL)arg3;
- (id)initWithRadioTrack:(id)arg1;
- (BOOL)isBanned;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplicitTrack;
- (BOOL)isHeartbeatInvalid;
- (BOOL)isInWishList;
- (BOOL)isLiked;
- (BOOL)isRadioItem;
- (BOOL)isStreamable;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
- (id)localizedPositionInPlaylistString;
- (id)mainTitle;
- (id)mediaItem;
- (unsigned long long)persistentID;
- (id)radioTrack;
- (void)reevaluateType;
- (void)setHeartbeatInvalid:(BOOL)arg1;
- (void)setIsBanned:(BOOL)arg1;
- (void)setIsInWishList:(BOOL)arg1;
- (void)setIsLiked:(BOOL)arg1;
- (void)setStation:(id)arg1;
- (id)station;
- (id)stationHash;
- (long long)stationID;
- (id)stationName;
- (long long)storeID;
- (id)title;
- (id)titlesForTime:(double)arg1;
- (unsigned int)type;
- (id)urlTimeMarkers;

@end