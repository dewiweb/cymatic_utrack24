// rea decompile_all
// name: FUN_0054ea80
// address: 0x54ea80
// body: available
// range: 0x54ea80-0x54ebce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054ea80(undefined4 param_1,undefined2 param_2)

{
  int in_ECX;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_29;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (*(char *)(in_ECX + 0xc) != '\0') {
    local_18 = 2;
    local_14 = Ordinal_11(param_1);
    local_16 = Ordinal_9(param_2);
    local_1c = 0x10;
    local_24 = Ordinal_4(*(undefined4 *)(in_ECX + 8),&local_18,0x10);
    if (local_24 == -1) {
      local_20 = Ordinal_111();
    }
    else {
      local_38 = 0;
      local_30 = 4;
      local_34 = Ordinal_7(*(undefined4 *)(in_ECX + 8),0xffff,0x1001,&local_38,&local_30);
      local_38 = 0x5dc;
      local_34 = Ordinal_21(*(undefined4 *)(in_ECX + 8),0xffff,0x1001,&local_38,4);
      local_29 = 0;
      local_30 = 1;
      local_34 = Ordinal_7(*(undefined4 *)(in_ECX + 8),6,1,&local_29,&local_30);
      local_29 = 1;
      local_34 = Ordinal_21(*(undefined4 *)(in_ECX + 8),6,1,&local_29,4);
      local_28 = 1;
      Ordinal_10(*(undefined4 *)(in_ECX + 8),0x8004667e,&local_28);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

