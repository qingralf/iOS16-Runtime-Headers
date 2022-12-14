/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor
 */

@interface ICAttachmentActivityViewController : UIActivityViewController {
    NSArray * _attachments;
    bool  _ignoreAttachmentsForCopyToPasteboard;
}

@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic) bool ignoreAttachmentsForCopyToPasteboard;

- (void).cxx_destruct;
- (void)_performActivity:(id)arg1;
- (id)activityTypesThatInhibitPDFGeneration;
- (id)attachments;
- (bool)ignoreAttachmentsForCopyToPasteboard;
- (bool)inhibitPDFGenerationForActivityType:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setIgnoreAttachmentsForCopyToPasteboard:(bool)arg1;
- (bool)writeGalleryPDFDataToPasteboardIfNecessaryForActivity:(id)arg1 attachments:(id)arg2;

@end
