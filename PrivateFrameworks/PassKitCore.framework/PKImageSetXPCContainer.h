/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKImageSetXPCContainer : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> * _data;
    NSData * _imageSetHash;
    BOOL  _isShmem;
    unsigned int  _length;
    unsigned int  _offset;
}

@property (nonatomic, readonly) NSData *imageSetHash;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containedImageSet;
- (void)encodeWithCoder:(id)arg1;
- (id)imageSetHash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithWithXPCObject:(id)arg1 hash:(id)arg2;
- (id)initWithWithXPCObject:(id)arg1 length:(unsigned int)arg2 isSharedMemory:(BOOL)arg3 offset:(unsigned int)arg4 hash:(id)arg5;
- (void)purge;

@end