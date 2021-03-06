/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleRecordSource : FCRecordSource {
    NSArray * _genericKeys;
}

+ (id)canaryRecordName;
+ (id)changeTagFromCKRecord:(id)arg1;
+ (unsigned long long)highThresholdDataSizeLimit;
+ (id)identifierFromCKRecord:(id)arg1;
+ (unsigned long long)lowThresholdDataSizeLimit;
+ (id)modificationDateFromCKRecord:(id)arg1;
+ (id)recordType;
+ (id)storeFilename;
+ (unsigned int)storeVersion;
+ (BOOL)supportsDeletions;
+ (BOOL)useTaggedImages;

- (void).cxx_destruct;
- (id)desiredKeys;
- (id)genericKeys;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredArticleRecordFieldOptions:(unsigned int)arg3;
- (id)localizableKeys;
- (id)localizedKeysByOriginalKey;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)saveArticleRecords:(id)arg1;
- (id)saveFeedItemAndArticleRecords:(id)arg1;
- (id)urlStringForThumbnailKey:(id)arg1 inRecord:(id)arg2;

@end
