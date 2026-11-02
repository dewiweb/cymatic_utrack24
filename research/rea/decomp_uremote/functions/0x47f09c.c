// rea decompile_all
// name: FUN_0047f09c
// address: 0x47f09c
// body: available
// range: 0x47f09c-0x47f135 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047f09c(uint *param_1)

{
  int iVar1;
  int unaff_ESI;
  uint *unaff_EDI;
  ushort local_10;
  ushort local_e;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(**(int **)(unaff_ESI + 4) + 0xc))(&local_10,6);
  if ((iVar1 == 6) &&
     (((iVar1 = _strncmp("GIF87a",(char *)&local_10,6), iVar1 == 0 ||
       (iVar1 = _strncmp("GIF89a",(char *)&local_10,6), iVar1 == 0)) &&
      (iVar1 = (**(code **)(**(int **)(unaff_ESI + 4) + 0xc))(&local_10,4), iVar1 == 4)))) {
    *unaff_EDI = (uint)local_10;
    *param_1 = (uint)local_e;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

