// rea decompile_all
// name: FUN_0062aec0
// address: 0x62aec0
// body: available
// range: 0x62aec0-0x62af83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062aec0(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071de52;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::OutputStream::vftable;
  FUN_0045c990(&DAT_00c129a8,uVar2);
  local_8 = 0;
  *in_ECX = juce::FileOutputStream::vftable;
  iVar1 = *param_1;
  in_ECX[2] = iVar1;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  in_ECX[3] = 0;
  FUN_0044eef0();
  in_ECX[8] = param_2;
  in_ECX[6] = 0;
  if (param_2 < 0x10) {
    param_2 = 0x10;
  }
  in_ECX[7] = 0;
  in_ECX[9] = 0;
  uVar4 = FUN_004c554b(param_2);
  in_ECX[10] = uVar4;
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00612640();
  ExceptionList = local_10;
  return;
}

