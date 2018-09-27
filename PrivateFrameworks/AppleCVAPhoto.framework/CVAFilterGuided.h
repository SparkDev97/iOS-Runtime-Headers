/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAFilterGuided : ImageSaverRegistrator {
    <MTLTexture> * _alphaTexture;
    CVAFilterBox * _boxFilter;
    <MTLTexture> * _convolutedCoeff;
    <MTLDeviceSPI> * _device;
    <MTLTexture> * _filteredAlphaTexture;
    <MTLTexture> * _gfGGGBBB;
    <MTLTexture> * _gfMeanGGGBBB;
    <MTLTexture> * _gfMeanNormalizationFactor;
    <MTLTexture> * _gfMeanRRRGRB;
    <MTLTexture> * _gfMeanSrcGuide;
    <MTLTexture> * _gfMeanSrcWithGuide;
    <MTLTexture> * _gfMeanWeight;
    <MTLTexture> * _gfRRRGRB;
    <MTLTexture> * _gfSrcGuide;
    <MTLTexture> * _gfSrcWithGuide;
    <MTLTexture> * _gfTmp;
    <MTLTexture> * _gfTmp2;
    <MTLComputePipelineState> * _guidedFilterApplyRGBAKernel;
    <MTLComputePipelineState> * _guidedFilterEmbedGuideKernel;
    <MTLComputePipelineState> * _guidedFilterInvertKernel;
    <MTLComputePipelineState> * _guidedFilterMultiplyKernel;
    <MTLComputePipelineState> * _guidedFilterPremultiplyKernel;
    <MTLComputePipelineState> * _guidedFilterRegressionKernel;
    <MTLComputePipelineState> * _guidedFilterSecondOrderProductsKernel;
    CVAFilterHybridResampling * _hybridResampler;
    <MTLTexture> * _hybridUpscalingIntermediateR32Texture;
    <MTLTexture> * _hybridUpscalingIntermediateTexture;
    CVAFilterInfimumConvolution * _infConvolution;
    NSString * _label;
    <MTLTexture> * _laplacianLimitedAlphaTexture;
    <MTLLibrary> * _library;
    <MTLTexture> * _lowResLaplacianLimitedMatte;
    <MTLTexture> * _lowResMatte;
    <MTLComputePipelineState> * _postProcessAlphaKernel;
    int  _smallGuidedFilterKernelSize;
    <MTLTexture> * _srcTexture;
    <MTLTexture> * _upscaledCoeff;
}

@property (readonly) NSString *label;

- (void).cxx_destruct;
- (void)encodeFilterApplyToBuffer:(id)arg1 coeff:(id)arg2 source:(id)arg3 destination:(id)arg4;
- (void)encodeHybridUpSamplingToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)encodePostProcessAlphaToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 alphaMaxLaplacian:(float)arg4 infConvOrientation:(float)arg5 infConvMajorRadius:(float)arg6 infConvMinorRadius:(float)arg7 gammaExponent:(float)arg8 enableInfConvolution:(bool)arg9;
- (void)encodeReconstructToCommandBuffer:(id)arg1 inGuidancePixelBuffer:(struct __CVBuffer { }*)arg2 inCoeffTexture:(id)arg3 outFilteredTexture:(id)arg4;
- (void)encodeRegressionToCommandBuffer:(id)arg1 inSourceTexture:(id)arg2 inGuidanceTexture:(id)arg3 inWeightTexture:(id)arg4 outCoeffTexture:(id)arg5 epsilon:(float)arg6;
- (void)initSourceTexture:(struct __CVBuffer { }*)arg1;
- (id)initWithDevice:(id)arg1 library:(id)arg2 commandQueue:(id)arg3 textureSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 alphaSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 kernelSize:(int)arg6 error:(id*)arg7;
- (id)label;

@end