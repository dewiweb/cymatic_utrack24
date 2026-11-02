// rea decompile_all
// name: FUN_00502c60
// address: 0x502c60
// body: available
// range: 0x502c60-0x502cd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_00502c60(int param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_100 [212];
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  uint uStack_24;
  byte local_19;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cde9a;
  local_10 = ExceptionList;
  uStack_24 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 == 0) {
    puVar1 = auStack_100;
  }
  else {
    puStack_28 = (undefined1 *)param_1;
    uStack_2c = 0x502c9a;
    FUN_00501870();
    local_8 = 0;
    puStack_28 = local_18;
    uStack_2c = 0x502cad;
    local_19 = FUN_00502bc0();
    local_8 = 0xffffffff;
    puStack_28 = (undefined1 *)0x502cbf;
    FUN_00501900();
    puVar1 = (undefined1 *)(uint)local_19;
  }
  ExceptionList = local_10;
  return puVar1;
}

