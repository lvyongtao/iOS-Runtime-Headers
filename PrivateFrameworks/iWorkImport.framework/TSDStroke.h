/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, TSDStrokePattern, TSUColor;

@interface TSDStroke : NSObject <TSSThemeAsset, TSDPathPainter, TSDMixing, NSCopying, NSMutableCopying> {
    double mActualWidth;
    int mCap;
    TSUColor *mColor;
    int mJoin;
    double mMiterLimit;
    TSDStrokePattern *mPattern;
    double mWidth;
}

@property double actualWidth;
@property int cap;
@property(retain) TSUColor * color;
@property(readonly) double dashSpacing;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) bool dontClearBackground;
@property(readonly) bool drawsOutsideStrokeBounds;
@property(readonly) bool empty;
@property(readonly) unsigned long long hash;
@property(readonly) bool isDash;
@property(readonly) bool isFrame;
@property(readonly) bool isNearlyWhite;
@property(readonly) bool isNullStroke;
@property(readonly) bool isRoundDash;
@property int join;
@property double miterLimit;
@property(readonly) struct _TSDStrokeOutsets { double x1; double x2; double x3; double x4; } outsets;
@property(retain) TSDStrokePattern * pattern;
@property(readonly) bool shouldRender;
@property(readonly) bool solid;
@property(readonly) double suggestedMinimumLineWidth;
@property(readonly) Class superclass;
@property(readonly) bool supportsColor;
@property(readonly) bool supportsLineOptions;
@property(readonly) bool supportsPattern;
@property(readonly) bool supportsWidth;
@property double width;

+ (bool)canMixWithNilObjects;
+ (id)emptyStroke;
+ (id)emptyStrokeWithWidth:(double)arg1;
+ (id)instanceWithArchive:(const struct StrokeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; int x5; int x6; float x7; struct StrokePatternArchive {} *x8; struct SmartStrokeArchive {} *x9; struct FrameArchive {} *x10; struct PatternedStrokeArchive {} *x11; int x12; unsigned int x13[1]; }*)arg1 unarchiver:(id)arg2;
+ (id)mergeRangeEmptyStroke;
+ (Class)mutableClass;
+ (id)p_newEmptyStroke;
+ (id)p_newStroke;
+ (id)stroke;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2;
+ (id)zeroWidthEmptyStroke;

- (void)aaDefeatedPaintLineEnd:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext { }*)arg5;
- (double)actualWidth;
- (void)applyInteriorWrapPropertiesToContext:(struct CGContext { }*)arg1 insideStroke:(bool)arg2;
- (void)applyToCAShapeLayer:(id)arg1 insideStroke:(bool)arg2 withScale:(double)arg3;
- (void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2;
- (void)applyToContext:(struct CGContext { }*)arg1 insideStroke:(bool)arg2;
- (void)applyToContext:(struct CGContext { }*)arg1;
- (void)applyToRepCALayer:(id)arg1 withScale:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForPath:(id)arg1;
- (bool)canApplyDirectlyToRepCALayer;
- (bool)canApplyToCAShapeLayer;
- (int)cap;
- (id)color;
- (id)colorForCGContext:(struct CGContext { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dashSpacing;
- (void)dealloc;
- (id)description;
- (bool)dontClearBackground;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (bool)drawsInOneStep;
- (bool)drawsOutsideStrokeBounds;
- (bool)empty;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct StrokeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; int x5; int x6; float x7; struct StrokePatternArchive {} *x8; struct SmartStrokeArchive {} *x9; struct FrameArchive {} *x10; struct PatternedStrokeArchive {} *x11; int x12; unsigned int x13[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
- (bool)isDash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStroke:(id)arg1;
- (bool)isFrame;
- (bool)isNearlyWhite;
- (bool)isNullStroke;
- (bool)isRoundDash;
- (bool)isThemeEquivalent:(id)arg1;
- (int)join;
- (double)lineEndInsetAdjustment;
- (SEL)mapThemeAssetSelector;
- (double)miterLimit;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)needsToExtendJoinsForBoundsCalculation;
- (struct _TSDStrokeOutsets { double x1; double x2; double x3; double x4; })outsets;
- (void)p_setPatternPropertiesFromStroke:(id)arg1;
- (void)p_setPropertiesFromStroke:(id)arg1;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext { }*)arg5 useFastDrawing:(bool)arg6;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext { }*)arg5;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3 useFastDrawing:(bool)arg4;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3;
- (void)paintPathWithNormalClip:(struct CGPath { }*)arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3;
- (id)pathForLineEnd:(id)arg1 wrapPath:(bool)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 atAngle:(double)arg4 withScale:(double)arg5;
- (id)pattern;
- (bool)prefersToApplyToCAShapeLayerDuringManipulation;
- (void)saveToArchive:(struct StrokeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; int x5; int x6; float x7; struct StrokePatternArchive {} *x8; struct SmartStrokeArchive {} *x9; struct FrameArchive {} *x10; struct PatternedStrokeArchive {} *x11; int x12; unsigned int x13[1]; }*)arg1 archiver:(id)arg2;
- (void)setActualWidth:(double)arg1;
- (void)setCap:(int)arg1;
- (void)setColor:(id)arg1;
- (void)setJoin:(int)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setPattern:(id)arg1;
- (void)setWidth:(double)arg1;
- (bool)shouldAntialiasDefeat;
- (bool)shouldRender;
- (bool)solid;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)strokeLineEnd:(id)arg1;
- (double)suggestedMinimumLineWidth;
- (bool)supportsColor;
- (bool)supportsLineOptions;
- (bool)supportsPattern;
- (bool)supportsWidth;
- (double)width;

@end