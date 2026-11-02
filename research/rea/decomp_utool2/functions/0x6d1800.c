// rea decompile_all
// name: FUN_006d1800
// address: 0x6d1800
// body: available
// range: 0x6d1800-0x6d1901 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d1800(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726d9a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *in_ECX = juce::ResizableCornerComponent::vftable;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0040de70(param_1);
  }
  in_ECX[0x1c] = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 1;
  in_ECX[0x1d] = param_2;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  *(byte *)((int)in_ECX + 0x69) = *(byte *)((int)in_ECX + 0x69) | 8;
  piVar2 = (int *)FUN_00491210();
  local_8 = CONCAT31(local_8._1_3_,2);
  if ((int *)in_ECX[0xe] == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)in_ECX[0xe];
  }
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  if (iVar1 != iVar3) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      piVar2[1] = piVar2[1] + 1;
      UNLOCK();
    }
    if (in_ECX[0xe] != 0) {
      FUN_004912c0();
    }
    in_ECX[0xe] = piVar2;
    if ((*(byte *)(in_ECX + 0x1a) & 2) != 0) {
      FUN_006cec20();
    }
  }
  if (piVar2 != (int *)0x0) {
    FUN_004912c0();
  }
  ExceptionList = local_10;
  return;
}

