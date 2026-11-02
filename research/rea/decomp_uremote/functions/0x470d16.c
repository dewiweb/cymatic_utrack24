// rea decompile_all
// name: FUN_00470d16
// address: 0x470d16
// body: available
// range: 0x470d16-0x470d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00470d16(uint param_1,uint param_2)

{
  int iVar1;
  char *local_3c;
  char *local_38;
  undefined4 local_2c;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  local_2c = (char **)0x0;
  local_38 = (char *)0x470d31;
  iVar1 = FUN_00470bc7();
  local_38 = (char *)((int)&local_2c + iVar1 + 3);
  *local_38 = '\0';
  local_3c = local_38;
  do {
    local_3c = local_3c + -1;
    *local_3c = "0123456789abcdef"[param_1 & 0xf];
    param_1 = param_1 >> 4 | param_2 << 0x1c;
    param_2 = param_2 >> 4;
  } while (param_1 != 0 || param_2 != 0);
  local_2c = &local_3c;
  FUN_004654d6();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

