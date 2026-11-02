// rea decompile_all
// name: FUN_0049bcf4
// address: 0x49bcf4
// body: available
// range: 0x49bcf4-0x49bdd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049bcf4(uint param_1)

{
  int in_ECX;
  byte *in_EDX;
  undefined4 uVar1;
  byte local_10 [2];
  char local_e;
  char local_c;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (param_1 == 3) {
    if (((*(ushort *)(in_ECX + 0xfc) == 0) && ((*(byte *)(in_ECX + 0x21c) & 1) != 0)) ||
       ((ushort)*in_EDX < *(ushort *)(in_ECX + 0xfc))) {
      local_10[0] = *in_EDX;
      uVar1 = 1;
      goto LAB_0049bdb5;
    }
  }
  else if ((param_1 & 2) == 0) {
    if ((int)(uint)*(ushort *)(in_EDX + 8) < 1 << (*(byte *)(in_ECX + 0x10c) & 0x1f)) {
      FUN_0049aca3();
      uVar1 = 2;
      goto LAB_0049bdb5;
    }
  }
  else {
    FUN_0049aca3();
    FUN_0049aca3();
    FUN_0049aca3();
    if ((*(char *)(in_ECX + 0x10c) != '\b') ||
       ((local_c == '\0' && local_e == '\0') && local_10[0] == 0)) {
      uVar1 = 6;
LAB_0049bdb5:
      FUN_0049adf3(local_10,uVar1);
      goto LAB_0049bdc7;
    }
  }
  FUN_00491216();
LAB_0049bdc7:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

