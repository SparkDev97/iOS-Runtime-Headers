/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAFrame : NSObject <SAJSONSerialization, SASerializable> {
    unsigned long long  _address;
    NSMutableSet * _childFrames;
    SAInstruction * _instruction;
    SAFrame * _parentFrame;
}

@property unsigned long long address;
@property (retain) NSMutableSet *childFrames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) SAInstruction *instruction;
@property (readonly) bool isKernel;
@property (readonly) bool isRootFrame;
@property (readonly) bool isTruncatedBacktraceFrame;
@property SAFrame *parentFrame;
@property (readonly) Class superclass;
@property (readonly) bool symbolicationOffByOne;

+ (id)addStack:(id)arg1 toSetOfRootFrames:(id)arg2;
+ (id)classDictionaryKey;
+ (id)frameWithAddress:(unsigned long long)arg1 binaryLoadInfo:(id)arg2 parent:(id)arg3 symbolicationOffByOne:(bool)arg4;
+ (id)frameWithPAStyleSerializedFrame:(const struct { unsigned long long x1; unsigned long long x2; BOOL x3; BOOL x4; unsigned long long x5; unsigned long long x6; }*)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned long long x6; union { unsigned char x_7_1_1; struct { unsigned int x_2_2_1 : 1; } x_7_1_2; } x7; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_addChildFrame:(id)arg1;
- (void)_setParentFrame:(id)arg1;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned long long x6; union { unsigned char x_7_1_1; struct { unsigned int x_2_2_1 : 1; } x_7_1_2; } x7; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned long long)address;
- (id)childFrames;
- (id)copyWithNewParent:(id)arg1;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)initWithAddress:(unsigned long long)arg1 binaryLoadInfo:(id)arg2 parent:(id)arg3 symbolicationOffByOne:(bool)arg4;
- (id)initWithFrame:(id)arg1 andParent:(id)arg2;
- (id)instruction;
- (bool)isEqual:(id)arg1;
- (bool)isKernel;
- (bool)isRootFrame;
- (bool)isTruncatedBacktraceFrame;
- (id)parentFrame;
- (void)populateReferencesUsingBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned long long x6; union { unsigned char x_7_1_1; struct { unsigned int x_2_2_1 : 1; } x_7_1_2; } x7; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (void)populateReferencesUsingPAStyleSerializedFrame:(const struct { unsigned long long x1; unsigned long long x2; BOOL x3; BOOL x4; unsigned long long x5; unsigned long long x6; }*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)setAddress:(unsigned long long)arg1;
- (void)setChildFrames:(id)arg1;
- (void)setInstruction:(id)arg1;
- (void)setParentFrame:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (bool)symbolicationOffByOne;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end