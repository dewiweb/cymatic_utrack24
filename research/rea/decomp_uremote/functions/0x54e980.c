// rea decompile_all
// name: FUN_0054e980
// address: 0x54e980
// body: available
// range: 0x54e980-0x54ea71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054e980(void)

{
  int iVar1;
  int in_ECX;
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d2f8f;
  local_10 = ExceptionList;
  local_24 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  if (*(char *)(in_ECX + 0xc) != '\0') {
    local_1c = 0x10;
    local_18 = Ordinal_1(*(undefined4 *)(in_ECX + 8),&local_34,&local_1c,local_24);
    if (local_18 == -1) {
      local_20 = Ordinal_111();
    }
    else {
      iVar1 = FUN_005af82d(0x38);
      local_8 = 0;
      if (iVar1 == 0) {
        local_44 = 0;
      }
      else {
        local_44 = FUN_0054e720(local_18,local_34,local_30,local_2c,local_28);
      }
      local_8 = 0xffffffff;
      local_14 = local_44;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffffc);
  return;
}

