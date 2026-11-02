// rea decompile_all
// name: FUN_004b8600
// address: 0x4b8600
// body: available
// range: 0x4b8600-0x4b88b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b8600(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007041dd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = juce::ReferenceCountedObject::vftable;
  in_ECX[1] = 0;
  local_8 = 0;
  *in_ECX = juce::OpenGLRendering::ShaderPrograms::vftable;
  FUN_004b8aa0(param_1,"varying  vec4 frontColour;void main() { gl_FragColor = frontColour; }",0);
  local_8._0_1_ = 1;
  FUN_004b8aa0(param_1,
               "uniform sampler2D maskTexture;uniform ivec4 maskBounds;varying  vec4 frontColour;varying  vec2 pixelPos;void main() {gl_FragColor = frontColour * texture2D (maskTexture, vec2 ((pixelPos.x - float (maskBounds.x)) / float (maskBounds.z),1.0 - (pixelPos.y - float (maskBounds.y)) / float (maskBounds.w))).a;}"
               ,0);
  local_8._0_1_ = 2;
  FUN_004b8b80(in_ECX + 10);
  local_8._0_1_ = 3;
  FUN_004b8aa0(param_1,
               "varying  vec2 pixelPos;uniform sampler2D gradientTexture;uniform  float matrix[6];varying  vec4 frontColour;void main(){ float gradientPos = length ((mat2 (matrix[0], matrix[3], matrix[1], matrix[4]) * pixelPos + vec2 (matrix[2], matrix[5])));gl_FragColor = (frontColour.a * texture2D (gradientTexture, vec2 (gradientPos, 0.5)));}"
               ,0);
  local_8._0_1_ = 4;
  FUN_004b8c30(in_ECX + 0x16);
  local_8._0_1_ = 5;
  FUN_004b8aa0(param_1,
               "varying  vec2 pixelPos;uniform sampler2D gradientTexture;uniform  float matrix[6];varying  vec4 frontColour;uniform sampler2D maskTexture;uniform ivec4 maskBounds;void main(){ float gradientPos = length ((mat2 (matrix[0], matrix[3], matrix[1], matrix[4]) * pixelPos + vec2 (matrix[2], matrix[5])));gl_FragColor = (frontColour.a * texture2D (gradientTexture, vec2 (gradientPos, 0.5))) * texture2D (maskTexture, vec2 ((pixelPos.x - float (maskBounds.x)) / float (maskBounds.z),1.0 - (pixelPos.y - float (maskBounds.y)) / float (maskBounds.w))).a;}"
               ,0);
  local_8._0_1_ = 6;
  FUN_004b8c30(in_ECX + 0x22);
  FUN_004b8b80(in_ECX + 0x22);
  local_8._0_1_ = 7;
  FUN_004b8aa0(param_1,
               "uniform sampler2D gradientTexture;uniform  vec4 gradientInfo;varying  vec4 frontColour;varying  vec2 pixelPos;void main(){ float gradientPos = (pixelPos.y - (gradientInfo.y + (gradientInfo.z * (pixelPos.x - gradientInfo.x)))) / gradientInfo.w;gl_FragColor = (frontColour.a * texture2D (gradientTexture, vec2 (gradientPos, 0.5)));}"
               ,0);
  local_8._0_1_ = 8;
  FUN_004b8ed0(in_ECX + 0x32);
  local_8._0_1_ = 9;
  FUN_004b8aa0(param_1,
               "uniform sampler2D gradientTexture;uniform  vec4 gradientInfo;varying  vec4 frontColour;varying  vec2 pixelPos;uniform sampler2D maskTexture;uniform ivec4 maskBounds;void main(){ float gradientPos = (pixelPos.y - (gradientInfo.y + (gradientInfo.z * (pixelPos.x - gradientInfo.x)))) / gradientInfo.w;gl_FragColor = (frontColour.a * texture2D (gradientTexture, vec2 (gradientPos, 0.5))) * texture2D (maskTexture, vec2 ((pixelPos.x - float (maskBounds.x)) / float (maskBounds.z),1.0 - (pixelPos.y - float (maskBounds.y)) / float (maskBounds.w))).a;}"
               ,0);
  local_8._0_1_ = 10;
  FUN_004b8ed0(in_ECX + 0x3e);
  FUN_004b8b80(in_ECX + 0x3e);
  local_8._0_1_ = 0xb;
  FUN_004b8aa0(param_1,
               "uniform sampler2D gradientTexture;uniform  vec4 gradientInfo;varying  vec4 frontColour;varying  vec2 pixelPos;void main(){ float gradientPos = (pixelPos.x - (gradientInfo.x + (gradientInfo.z * (pixelPos.y - gradientInfo.y)))) / gradientInfo.w;gl_FragColor = (frontColour.a * texture2D (gradientTexture, vec2 (gradientPos, 0.5)));}"
               ,0);
  local_8._0_1_ = 0xc;
  FUN_004b8ed0(in_ECX + 0x4e);
  local_8._0_1_ = 0xd;
  FUN_004b8aa0(param_1,
               "uniform sampler2D gradientTexture;uniform  vec4 gradientInfo;varying  vec4 frontColour;varying  vec2 pixelPos;uniform sampler2D maskTexture;uniform ivec4 maskBounds;void main(){ float gradientPos = (pixelPos.x - (gradientInfo.x + (gradientInfo.z * (pixelPos.y - gradientInfo.y)))) / gradientInfo.w;gl_FragColor = (frontColour.a * texture2D (gradientTexture, vec2 (gradientPos, 0.5))) * texture2D (maskTexture, vec2 ((pixelPos.x - float (maskBounds.x)) / float (maskBounds.z),1.0 - (pixelPos.y - float (maskBounds.y)) / float (maskBounds.w))).a;}"
               ,0);
  local_8._0_1_ = 0xe;
  FUN_004b8ed0(in_ECX + 0x5a);
  FUN_004b8b80(in_ECX + 0x5a);
  local_8._0_1_ = 0xf;
  FUN_004b8aa0(param_1,
               "varying  vec4 frontColour;uniform sampler2D imageTexture;varying  vec2 texturePos;void main(){gl_FragColor = frontColour.a * texture2D (imageTexture, vec2 (texturePos.x, 1.0 - texturePos.y));}"
               ,
               "uniform  vec2 imageLimits;uniform  float matrix[6];attribute vec2 position;attribute vec4 colour;uniform vec4 screenBounds;varying  vec4 frontColour;varying  vec2 texturePos;void main(){frontColour = colour;vec2 adjustedPos = position - screenBounds.xy;vec2 pixelPos = adjustedPos;texturePos = clamp ((mat2 (matrix[0], matrix[3], matrix[1], matrix[4]) * pixelPos + vec2 (matrix[2], matrix[5])), vec2 (0, 0), imageLimits);vec2 scaledPos = adjustedPos / screenBounds.zw;gl_Position = vec4 (scaledPos.x - 1.0, 1.0 - scaledPos.y, 0, 1.0);}"
              );
  local_8._0_1_ = 0x10;
  FUN_004b8f90(in_ECX + 0x6a);
  local_8._0_1_ = 0x11;
  FUN_004b8aa0(param_1,
               "uniform sampler2D imageTexture;uniform  vec2 imageLimits;uniform  float matrix[6];varying  vec4 frontColour;varying  vec2 pixelPos;uniform sampler2D maskTexture;uniform ivec4 maskBounds;void main(){ vec2 texturePos = clamp ((mat2 (matrix[0], matrix[3], matrix[1], matrix[4]) * pixelPos + vec2 (matrix[2], matrix[5])), vec2 (0, 0), imageLimits);gl_FragColor = frontColour.a * texture2D (imageTexture, vec2 (texturePos.x, 1.0 - texturePos.y)) * texture2D (maskTexture, vec2 ((pixelPos.x - float (maskBounds.x)) / float (maskBounds.z),1.0 - (pixelPos.y - float (maskBounds.y)) / float (maskBounds.w))).a;}"
               ,0);
  local_8._0_1_ = 0x12;
  FUN_004b8f90(in_ECX + 0x78);
  FUN_004b8b80(in_ECX + 0x78);
  local_8._0_1_ = 0x13;
  FUN_004b8aa0(param_1,
               "uniform sampler2D imageTexture;uniform  vec2 imageLimits;uniform  float matrix[6];varying  vec4 frontColour;varying  vec2 pixelPos;void main(){ vec2 texturePos = mod ((mat2 (matrix[0], matrix[3], matrix[1], matrix[4]) * pixelPos + vec2 (matrix[2], matrix[5])), imageLimits);gl_FragColor = frontColour.a * texture2D (imageTexture, vec2 (texturePos.x, 1.0 - texturePos.y));}"
               ,0);
  local_8._0_1_ = 0x14;
  FUN_004b8f90(in_ECX + 0x8a);
  local_8._0_1_ = 0x15;
  FUN_004b8aa0(param_1,
               "uniform sampler2D imageTexture;uniform  vec2 imageLimits;uniform  float matrix[6];varying  vec4 frontColour;varying  vec2 pixelPos;uniform sampler2D maskTexture;uniform ivec4 maskBounds;void main(){ vec2 texturePos = mod ((mat2 (matrix[0], matrix[3], matrix[1], matrix[4]) * pixelPos + vec2 (matrix[2], matrix[5])), imageLimits);gl_FragColor = frontColour.a * texture2D (imageTexture, vec2 (texturePos.x, 1.0 - texturePos.y)) * texture2D (maskTexture, vec2 ((pixelPos.x - float (maskBounds.x)) / float (maskBounds.z),1.0 - (pixelPos.y - float (maskBounds.y)) / float (maskBounds.w))).a;}"
               ,0);
  local_8._0_1_ = 0x16;
  FUN_004b8f90(in_ECX + 0x98);
  FUN_004b8b80(in_ECX + 0x98);
  local_8._0_1_ = 0x17;
  FUN_004b8aa0(param_1,
               "uniform sampler2D imageTexture;uniform  vec2 imageLimits;uniform  float matrix[6];varying  vec4 frontColour;varying  vec2 pixelPos;void main(){ vec2 texturePos = mod ((mat2 (matrix[0], matrix[3], matrix[1], matrix[4]) * pixelPos + vec2 (matrix[2], matrix[5])), imageLimits);gl_FragColor = frontColour.a * texture2D (imageTexture, vec2 (texturePos.x, 1.0 - texturePos.y));}"
               ,0);
  local_8._0_1_ = 0x18;
  FUN_004b8f90(in_ECX + 0xaa);
  local_8._0_1_ = 0x19;
  FUN_004b8aa0(param_1,
               "uniform sampler2D imageTexture;uniform  vec2 imageLimits;uniform  float matrix[6];varying  vec4 frontColour;varying  vec2 pixelPos;void main(){ vec2 texturePos = (mat2 (matrix[0], matrix[3], matrix[1], matrix[4]) * pixelPos + vec2 (matrix[2], matrix[5])); float roundingError = 0.00001;if (texturePos.x >= -roundingError&& texturePos.y >= -roundingError&& texturePos.x <= imageLimits.x + roundingError&& texturePos.y <= imageLimits.y + roundingError)gl_FragColor = frontColour * texture2D (imageTexture, vec2 (texturePos.x, 1.0 - texturePos.y)).a;else gl_FragColor = vec4 (0, 0, 0, 0);}"
               ,0);
  local_8 = CONCAT31(local_8._1_3_,0x1a);
  FUN_004b8f90(in_ECX + 0xb8);
  ExceptionList = local_10;
  return;
}

