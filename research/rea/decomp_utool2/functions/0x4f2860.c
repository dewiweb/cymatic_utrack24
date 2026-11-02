// rea decompile_all
// name: FUN_004f2860
// address: 0x4f2860
// body: available
// range: 0x4f2860-0x4f2a65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f2860(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705e93;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  local_8 = 0;
  in_ECX[0x1c] = juce::Button::Listener::vftable;
  *in_ECX = AboutBox::vftable;
  in_ECX[0x1c] = AboutBox::vftable;
  in_ECX[0x1d] = param_1;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  FUN_004f3db0();
  in_ECX[0x22] = AboutBox::Logos::vftable;
  in_ECX[0x3e] = AboutBox::Logos::vftable;
  local_8._0_1_ = 2;
  FUN_004f1460();
  local_8._0_1_ = 4;
  FUN_006e3d90();
  local_8._0_1_ = 6;
  (**(code **)(in_ECX[0x22] + 0x28))();
  FUN_006e5050();
  (**(code **)(in_ECX[0x4f] + 0x28))();
  FUN_006e5050();
  FUN_00683790();
  local_8._0_1_ = 7;
  FUN_006e3bc0();
  piVar1 = (int *)FUN_00491210();
  local_8._0_1_ = 8;
  if ((int *)in_ECX[0x8c] == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)in_ECX[0x8c];
  }
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar3 != iVar2) {
    if (piVar1 != (int *)0x0) {
      LOCK();
      piVar1[1] = piVar1[1] + 1;
      UNLOCK();
    }
    if (in_ECX[0x8c] != 0) {
      FUN_004912c0();
    }
    in_ECX[0x8c] = piVar1;
    if ((*(byte *)(in_ECX + 0x98) & 2) != 0) {
      FUN_006cec20();
    }
  }
  local_8 = CONCAT31(local_8._1_3_,7);
  if (piVar1 != (int *)0x0) {
    FUN_004912c0();
  }
  if (in_ECX != (undefined4 *)0xffffff90) {
    FUN_004097d0();
  }
  (**(code **)(in_ECX[0x7e] + 0x28))();
  FUN_006e5050();
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_14 + 1;
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*local_14)();
    }
  }
  ExceptionList = local_10;
  return;
}

