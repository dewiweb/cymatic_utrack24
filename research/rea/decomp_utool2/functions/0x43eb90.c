// rea decompile_all
// name: FUN_0043eb90
// address: 0x43eb90
// body: available
// range: 0x43eb90-0x43ee68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043eb90(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *_Memory;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  undefined8 in_XMM2_Qa;
  undefined8 uVar4;
  void *local_28;
  void *local_20;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006feb16;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("WAV file",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[4] = param_2;
  in_ECX[5] = param_3;
  *in_ECX = juce::AudioFormatWriter::vftable;
  *(undefined8 *)(in_ECX + 2) = in_XMM2_Qa;
  *(undefined1 *)(in_ECX + 6) = 0;
  _Memory = (int *)(local_14 + -8);
  in_ECX[7] = param_1;
  in_ECX[8] = local_14;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    *_Memory = *_Memory + 1;
    UNLOCK();
  }
  local_8 = 0;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  *in_ECX = juce::WavAudioFormatWriter::vftable;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  local_8 = CONCAT31(local_8._1_3_,10);
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  *(undefined1 *)(in_ECX + 0x24) = 0;
  if (0 < *(int *)(param_4 + 8)) {
    puVar3 = (undefined4 *)FUN_0043b770();
    uVar2 = in_ECX[0xc];
    in_ECX[0xc] = *puVar3;
    *puVar3 = uVar2;
    local_20 = (void *)in_XMM2_Qa;
    in_ECX[0xd] = puVar3[1];
    FID_conflict__free(local_20);
    puVar3 = (undefined4 *)FUN_005cfde0();
    uVar2 = in_ECX[0xe];
    in_ECX[0xe] = *puVar3;
    *puVar3 = uVar2;
    in_ECX[0xf] = puVar3[1];
    FID_conflict__free(local_20);
    puVar3 = (undefined4 *)FUN_0043bdd0();
    uVar2 = in_ECX[0x10];
    in_ECX[0x10] = *puVar3;
    *puVar3 = uVar2;
    in_ECX[0x11] = puVar3[1];
    FID_conflict__free(local_20);
    puVar3 = (undefined4 *)FUN_0043c210();
    uVar2 = in_ECX[0x12];
    in_ECX[0x12] = *puVar3;
    *puVar3 = uVar2;
    in_ECX[0x13] = puVar3[1];
    FID_conflict__free(local_20);
    puVar3 = (undefined4 *)FUN_0043c650();
    uVar2 = in_ECX[0x14];
    in_ECX[0x14] = *puVar3;
    *puVar3 = uVar2;
    in_ECX[0x15] = puVar3[1];
    FID_conflict__free(local_20);
    puVar3 = (undefined4 *)FUN_005d05c0();
    uVar2 = in_ECX[0x16];
    in_ECX[0x16] = *puVar3;
    *puVar3 = uVar2;
    in_ECX[0x17] = puVar3[1];
    FID_conflict__free(local_20);
    puVar3 = (undefined4 *)FUN_005d0080();
    uVar2 = in_ECX[0x18];
    in_ECX[0x18] = *puVar3;
    *puVar3 = uVar2;
    in_ECX[0x19] = puVar3[1];
    FID_conflict__free(local_20);
    puVar3 = (undefined4 *)FUN_0043d200();
    uVar2 = in_ECX[0x1a];
    in_ECX[0x1a] = *puVar3;
    *puVar3 = uVar2;
    in_ECX[0x1b] = puVar3[1];
    FID_conflict__free(local_20);
    puVar3 = (undefined4 *)FUN_0043d730();
    uVar2 = in_ECX[0x1c];
    in_ECX[0x1c] = *puVar3;
    *puVar3 = uVar2;
    in_ECX[0x1d] = puVar3[1];
    FID_conflict__free(local_28);
  }
  uVar4 = (**(code **)(*param_1 + 0xc))();
  *(undefined8 *)(in_ECX + 0x22) = uVar4;
  FUN_0043f130();
  ExceptionList = local_10;
  return;
}

