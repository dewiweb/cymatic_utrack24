// rea decompile_all
// name: FUN_0040eb1d
// address: 0x40eb1d
// body: available
// range: 0x40eb1d-0x40ebeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040eb1d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  undefined8 uVar1;
  char local_88;
  byte local_87;
  char acStack_86 [61];
  char local_49;
  char local_3e;
  char local_36;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)(acStack_86 + 0x16);
  if (in_ECX != 0) {
    uVar1 = FUN_0041106d();
    in_EDX = (undefined4)((ulonglong)uVar1 >> 0x20);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_004110b4(&local_88,0x80);
      in_EDX = (undefined4)((ulonglong)uVar1 >> 0x20);
      if ((((((int)uVar1 == 0) && (local_88 == '\0')) && (local_3e == '\0')) &&
          ((local_36 == '\0' && (local_87 != 0)))) &&
         ((local_87 < 0x22 && ((local_49 == '\0' && (acStack_86[local_87] == '\0')))))) {
        FUN_0040ea39(param_2,param_3);
        in_EDX = extraout_EDX;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)(acStack_86 + 0x16),in_EDX,param_3,param_1);
  return;
}

