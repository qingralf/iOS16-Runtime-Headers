/* Generated by RuntimeBrowser.
 */

@protocol _SFPBIndexState <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)percentAttachmentsIndexed;
- (int)percentMessagesIndexed;
- (int)searchIndex;
- (void)setPercentAttachmentsIndexed:(int)arg1;
- (void)setPercentMessagesIndexed:(int)arg1;
- (void)setSearchIndex:(int)arg1;

@end