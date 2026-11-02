// rea decompile_all
// name: FUN_004bb3b0
// address: 0x4bb3b0
// body: available
// range: 0x4bb3b0-0x4bb4f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb3b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007045c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("attribute  vec2 position;uniform  vec2 screenSize;uniform  float textureBounds[4];uniform  vec2 vOffsetAndScale;varying  vec2 texturePos;void main(){ vec2 scaled = position / (0.5 * screenSize.xy);gl_Position = vec4 (scaled.x - 1.0, 1.0 - scaled.y, 0, 1.0);texturePos = (position - vec2 (textureBounds[0], textureBounds[1])) / vec2 (textureBounds[2], textureBounds[3]);texturePos = vec2 (texturePos.x, vOffsetAndScale.x + vOffsetAndScale.y * texturePos.y);}"
               ,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  uVar2 = FUN_006f48d0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_006f4410(uVar2,0x8b31);
  piVar3 = (int *)(local_18 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8 = 0xffffffff;
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990(
              "uniform sampler2D imageTexture;varying  vec2 texturePos;void main(){gl_FragColor = texture2D (imageTexture, texturePos);}"
              );
  local_8 = 2;
  uVar2 = FUN_006f48b0();
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_006f4410(uVar2,0x8b30);
  piVar3 = (int *)(local_1c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_006f42b0();
  ExceptionList = local_10;
  return;
}

