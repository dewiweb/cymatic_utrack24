// rea decompile_all
// name: FUN_004c753f
// address: 0x4c753f
// body: available
// range: 0x4c753f-0x4c75c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c753f(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 local_28 [20];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005debc4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  cVar1 = thunk_FUN_004733bd(DAT_00955fd4 ^ (uint)&stack0xffffffd0);
  if (cVar1 != '\0') {
    FUN_004718a7(local_28);
    local_c = 0;
    uVar3 = 1;
    uVar2 = FUN_00461746(1);
    FUN_004c7a1e(uVar2,uVar3);
    FUN_004615f7();
  }
  ExceptionList = local_14;
  return;
}

