// rea decompile_all
// name: FUN_00439fa0
// address: 0x439fa0
// body: available
// range: 0x439fa0-0x43a114 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00439fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined8 in_XMM2_Qa;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe588;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("FLAC file",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[4] = param_2;
  in_ECX[5] = param_3;
  in_ECX[7] = param_1;
  *in_ECX = juce::AudioFormatWriter::vftable;
  *(undefined8 *)(in_ECX + 2) = in_XMM2_Qa;
  *(undefined1 *)(in_ECX + 6) = 0;
  piVar1 = (int *)(local_14 + -8);
  in_ECX[8] = local_14;
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_8 = 0;
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  *in_ECX = juce::FlacWriter::vftable;
  uVar2 = FUN_005f2f20();
  in_ECX[0xb] = uVar2;
  if (0 < param_4) {
    FUN_005f1c10();
  }
  if (**(int **)in_ECX[0xb] == 1) {
    (*(int **)in_ECX[0xb])[4] = (uint)(in_ECX[4] == 2);
  }
  if (**(int **)in_ECX[0xb] == 1) {
    (*(int **)in_ECX[0xb])[5] = (uint)(in_ECX[4] == 2);
  }
  if (**(int **)in_ECX[0xb] == 1) {
    (*(int **)in_ECX[0xb])[6] = in_ECX[4];
  }
  if (**(int **)in_ECX[0xb] == 1) {
    uVar3 = 0x18;
    if ((uint)in_ECX[5] < 0x18) {
      uVar3 = in_ECX[5];
    }
    (*(int **)in_ECX[0xb])[7] = uVar3;
  }
  piVar1 = *(int **)in_ECX[0xb];
  if (*piVar1 == 1) {
    iVar4 = FUN_006f55c1();
    piVar1[8] = iVar4;
  }
  if (**(int **)in_ECX[0xb] == 1) {
    (*(int **)in_ECX[0xb])[9] = 0;
  }
  iVar4 = FUN_005f1f00();
  *(bool *)(in_ECX + 10) = iVar4 == 0;
  ExceptionList = local_10;
  return;
}

