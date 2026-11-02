// rea decompile_all
// name: FUN_004c80e7
// address: 0x4c80e7
// body: available
// range: 0x4c80e7-0x4c8198 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c80e7(void)

{
  int iVar1;
  int in_ECX;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005deca0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*(int *)(in_ECX + 0xa4) != 0) {
    FUN_004efeb2(DAT_00955fd4 ^ (uint)&stack0xffffffc0);
    local_c = 0;
    iVar1 = FUN_004effe5();
    if (iVar1 == 0) {
      FUN_004c3170(0);
    }
    else {
      FUN_004c78ee();
      FUN_004c3170(~(byte)local_1c & 1);
      FUN_004c7a1e((byte)(local_1c >> 1) & 1,0);
    }
    FUN_004c8199();
  }
  ExceptionList = local_14;
  return;
}

