// rea decompile_all
// name: FUN_0048ef15
// address: 0x48ef15
// body: available
// range: 0x48ef15-0x48efc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048ef15(void)

{
  char cVar1;
  char *pcVar2;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_7c [116];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_7c;
  pcVar2 = (char *)FUN_0048f4bd();
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    if ("1.6.1"[(int)pcVar4 - (int)pcVar2] != cVar1) {
      *(uint *)(extraout_ECX + 0x2c) = *(uint *)(extraout_ECX + 0x2c) | 0x20000;
    }
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0;
  if (((*(uint *)(extraout_ECX + 0x2c) & 0x20000) != 0) &&
     (((*pcVar2 != '1' || (pcVar2[2] != '6')) || (pcVar2[3] != '.')))) {
    FUN_0049113b();
    FUN_0049113b();
    FUN_0049113b();
    FUN_0049113b();
    FUN_00491216();
    uVar3 = extraout_EDX;
  }
  __security_check_cookie(local_8 ^ (uint)local_7c,uVar3,pcVar2);
  return;
}

