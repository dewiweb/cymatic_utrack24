// rea decompile_all
// name: FUN_0053ed20
// address: 0x53ed20
// body: available
// range: 0x53ed20-0x53edc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053ed20(void)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d1fc6;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  piVar2 = (int *)(in_ECX + 0x1e0);
  *(undefined2 *)(in_ECX + 0x1e4) = 0;
  if (*piVar2 != 0) {
    FUN_005b13e8(*piVar2,uVar1);
  }
  *piVar2 = 0;
  FUN_00590660();
  *(undefined ***)(in_ECX + 0x174) = CPNS::IOutput_NotificationHandler::vftable;
  local_8 = 0xffffffff;
  FUN_00539030();
  ExceptionList = local_10;
  return;
}

