// rea decompile_all
// name: FUN_00470cb3
// address: 0x470cb3
// body: available
// range: 0x470cb3-0x470d15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00470cb3(uint param_1)

{
  uint uVar1;
  int iVar2;
  char *local_38;
  char *local_34;
  undefined4 local_2c;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  local_2c = (char **)0x0;
  local_34 = (char *)0x470cce;
  iVar2 = FUN_00470bc7();
  local_34 = (char *)((int)&local_2c + iVar2 + 3);
  *local_34 = '\0';
  local_38 = local_34;
  do {
    uVar1 = param_1 >> 4;
    local_38 = local_38 + -1;
    *local_38 = "0123456789abcdef"[param_1 & 0xf];
    param_1 = uVar1;
  } while (uVar1 != 0);
  local_2c = &local_38;
  FUN_004654d6();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

