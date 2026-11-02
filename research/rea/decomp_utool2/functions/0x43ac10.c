// rea decompile_all
// name: FUN_0043ac10
// address: 0x43ac10
// body: available
// range: 0x43ac10-0x43aed8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_0043ac10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *_Memory;
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  double in_XMM2_Qa;
  longlong lVar4;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  double local_20;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe628;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = in_XMM2_Qa;
  local_14 = in_ECX;
  FUN_0045c990("Ogg-Vorbis file",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[4] = param_2;
  in_ECX[5] = param_3;
  in_ECX[7] = param_1;
  *in_ECX = juce::AudioFormatWriter::vftable;
  *(double *)(in_ECX + 2) = local_20;
  *(undefined1 *)(in_ECX + 6) = 0;
  _Memory = (int *)(local_18 + -8);
  in_ECX[8] = local_18;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    *_Memory = *_Memory + 1;
    UNLOCK();
  }
  local_8 = 0;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar2 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  *in_ECX = juce::OggWriter::vftable;
  *(undefined1 *)(in_ECX + 10) = 0;
  in_ECX[0x72] = 0;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  in_ECX[0x78] = 0;
  in_ECX[0x79] = 0;
  uVar1 = FUN_004c5556(1,0xe50);
  in_ECX[0x79] = uVar1;
  iVar2 = FUN_005d4b00((int)local_20);
  if (iVar2 == 0) {
    in_ECX[0x7a] = 0;
    in_ECX[0x7b] = 0;
    in_ECX[0x7c] = 0;
    in_ECX[0x7d] = 0;
    FUN_0043b2c0(param_5,"encoder","ENCODER");
    FUN_0043b2c0(param_5,"id3title","TITLE");
    FUN_0043b2c0(param_5,"id3artist","ARTIST");
    FUN_0043b2c0(param_5,"id3album","ALBUM");
    FUN_0043b2c0(param_5,"id3comment","COMMENT");
    FUN_0043b2c0(param_5,"id3date",&DAT_00c147b4);
    FUN_0043b2c0(param_5,"id3genre","GENRE");
    FUN_0043b2c0(param_5,"id3trackNumber","TRACKNUMBER");
    FUN_005e8d00();
    FUN_005e93c0();
    puVar3 = (undefined4 *)FUN_0062f700();
    lVar4 = __allmul(*puVar3,puVar3[1],0xdeece66d,5);
    *puVar3 = (int)(lVar4 + 0xb);
    puVar3[1] = (uint)((ulonglong)(lVar4 + 0xb) >> 0x20) & 0xffff;
    FUN_005eaa00();
    FUN_005e1ca0(local_40,local_60,local_80);
    FUN_005ea700();
    FUN_005ea700();
    FUN_005ea700();
    iVar2 = FUN_005ea490();
    while (iVar2 != 0) {
      (**(code **)(*(int *)local_14[7] + 0x10))(local_14[0x66],local_14[0x67]);
      (**(code **)(*(int *)local_14[7] + 0x10))(local_14[0x68],local_14[0x69]);
      iVar2 = FUN_005ea490();
    }
    *(undefined1 *)(local_14 + 10) = 1;
    ExceptionList = local_10;
    return local_14;
  }
  ExceptionList = local_10;
  return in_ECX;
}

