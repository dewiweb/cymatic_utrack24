// rea decompile_all
// name: FUN_004d0b9e
// address: 0x4d0b9e
// body: available
// range: 0x4d0b9e-0x4d0c44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d0b9e(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_30 [4];
  undefined1 *local_2c;
  undefined1 local_28 [20];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dff3a;
  local_14 = ExceptionList;
  uStack_3c = DAT_00955fd4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_14;
  local_2c = auStack_44;
  FUN_004c6d53();
  uVar2 = FUN_004c2047(local_28);
  FUN_004d0772(local_30,uVar2);
  uStack_40 = 0x4d0c08;
  cVar1 = FUN_004733c7();
  if (cVar1 != '\0') {
    uStack_40 = 0x4d0c15;
    FUN_004d076d();
    uStack_40 = 0x4d0c20;
    FUN_004d08a8();
    local_c = 0;
    uStack_40 = 0x4d0c2a;
    FUN_004c1531();
    uStack_40 = 0x4d0c33;
    FUN_004c6b17();
  }
  ExceptionList = local_14;
  return;
}

