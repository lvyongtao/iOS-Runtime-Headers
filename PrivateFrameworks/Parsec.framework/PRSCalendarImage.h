/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSCalendarImage : PRSImage {
    NSString *_bundleID;
    NSDate *_date;
}

@property (readonly) NSString *bundleID;
@property (readonly) NSDate *date;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleId:(id)arg1 date:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end