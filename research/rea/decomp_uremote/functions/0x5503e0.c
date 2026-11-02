// rea decompile_all
// name: FUN_005503e0
// address: 0x5503e0
// body: available
// range: 0x5503e0-0x550498 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005503e0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d31a2;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = CPCHAI::CTaskDeviceInfoGetName::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x28] + 4) + 0xa0) =
       CPCHAI::CTaskDeviceInfoGetName::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[0x28] + 4) + 0x9c) = *(int *)(in_ECX[0x28] + 4) + -0x1c;
  local_8 = 0;
  iVar2 = FUN_005447c0(uVar1);
  if (iVar2 != 0) {
    FUN_0051ead0(in_ECX[0x16],in_ECX[0x17]);
  }
  local_8 = 0xffffffff;
  FUN_00598280();
  ExceptionList = local_10;
  return;
}

