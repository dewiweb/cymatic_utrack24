// rea decompile_all
// name: FUN_004bab50
// address: 0x4bab50
// body: available
// range: 0x4bab50-0x4bacf6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bab50(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *in_ECX;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007044e6;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::OpenGLRendering::NonShaderContext::vftable;
  glGetIntegerv(0x8ca6,&local_14,uVar4);
  (**(code **)in_ECX[5])(0x84c0);
  glEnable(0xde1);
  do {
    local_24 = glGetError();
  } while (local_24 != 0);
  local_20 = local_24;
  local_1c = local_24;
  local_18 = local_24;
  FUN_006f3ce0(in_ECX + 0xb);
  glBindTexture(0xde1,local_24);
  local_8 = 0;
  if (*(code **)(in_ECX[5] + 0xa4) != (code *)0x0) {
    (**(code **)(in_ECX[5] + 0xa4))(0x8d40,in_ECX[6]);
  }
  glViewport(0,0,in_ECX[9],in_ECX[10]);
  glDisable(0xb71);
  local_8 = 0xffffffff;
  local_2c = local_20;
  local_28 = local_1c;
  local_34 = 0;
  local_30 = 0;
  FUN_006f34d0(in_ECX + 7,&local_34,in_ECX[9],in_ECX[10],0);
  glBindTexture(0xde1,0);
  if (*(code **)(in_ECX[5] + 0xa4) != (code *)0x0) {
    (**(code **)(in_ECX[5] + 0xa4))(0x8d40,local_14);
  }
  if ((local_24 != 0) && (local_18 == *(int *)(*(int *)ThreadLocalStoragePointer + 0xc))) {
    glDeleteTextures(1,&local_24);
  }
  puVar3 = (undefined4 *)in_ECX[0xb];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  *in_ECX = juce::LowLevelGraphicsSoftwareRenderer::vftable;
  FUN_00470260();
  FID_conflict__free((void *)in_ECX[2]);
  iVar2 = in_ECX[1];
  if (iVar2 != 0) {
    FUN_004721c0();
    FUN_004bfe14(iVar2,0x5c);
  }
  *in_ECX = juce::LowLevelGraphicsContext::vftable;
  ExceptionList = local_10;
  return;
}

