// rea decompile_all
// name: FUN_00556930
// address: 0x556930
// body: available
// range: 0x556930-0x556a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00556930(int param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d38f7;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    in_ECX[0x18] = &DAT_005ee3d0;
    in_ECX[0x33] = CPNS::IAsync::vftable;
    local_8 = 0;
  }
  FUN_00543ff0(0x2003,"CTaskRestoreSnapshotData");
  local_8 = 1;
  *in_ECX = CPCHAI::CTaskRestoreSnapshotData::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x18] + 4) + 0x60) =
       CPCHAI::CTaskRestoreSnapshotData::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[0x18] + 4) + 0x5c) = *(int *)(in_ECX[0x18] + 4) + -0x6c;
  FUN_00512300(uVar1);
  ExceptionList = local_10;
  return in_ECX;
}

