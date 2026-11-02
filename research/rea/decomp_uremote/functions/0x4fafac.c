// rea decompile_all
// name: FUN_004fafac
// address: 0x4fafac
// body: available
// range: 0x4fafac-0x4fb0b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004fafac(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x4fafb8;
  local_14 = 0;
  FUN_004fcb2c();
  local_8 = 0;
  FUN_004652cd();
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_4 == (char *)0x0) {
    param_4 = 
    "attribute vec2 position;attribute vec4 colour;uniform vec4 screenBounds;varying  vec4 frontColour;varying  vec2 pixelPos;void main(){frontColour = colour;vec2 adjustedPos = position - screenBounds.xy;pixelPos = adjustedPos;vec2 scaledPos = adjustedPos / screenBounds.zw;gl_Position = vec4 (scaledPos.x - 1.0, 1.0 - scaledPos.y, 0, 1.0);}"
    ;
  }
  FUN_0046537e(local_18);
  FUN_004fc70c(local_20,local_18);
  bVar2 = false;
  bVar1 = false;
  local_8 = 3;
  local_14 = 3;
  cVar3 = FUN_004fcca6();
  if (cVar3 != '\0') {
    FUN_0046537e(&param_2);
    FUN_004fc70c(local_1c,&param_2);
    bVar2 = true;
    bVar1 = true;
    local_8 = 5;
    local_14 = 0xf;
    cVar3 = FUN_004fccb1();
    if (cVar3 != '\0') {
      cVar3 = FUN_004fccbc();
      param_4 = (char *)CONCAT13(1,param_4._0_3_);
      if (cVar3 != '\0') goto LAB_004fb062;
    }
  }
  param_4 = (char *)((uint)param_4 & 0xffffff);
LAB_004fb062:
  if (bVar1) {
    FUN_004652d6();
  }
  if (bVar2) {
    FUN_004652d6();
  }
  FUN_004652d6();
  FUN_004652d6();
  if (param_4._3_1_ == '\0') {
    FUN_00465317(param_1 + 0xc);
  }
  return param_1;
}

