// rea decompile_all
// name: FUN_0054db90
// address: 0x54db90
// body: available
// range: 0x54db90-0x54dc06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0054db90(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined2 local_8;
  
  local_8 = 0;
  if ((*(char *)(in_ECX + 4) == '\0') || (*(int *)(in_ECX + 0xc78) != 1)) {
    iVar2 = 0;
    local_8 = 0x303;
  }
  else {
    cVar1 = FUN_00597230(param_1);
    if (cVar1 == '\0') {
      local_8 = 0x304;
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 0xc) + 1;
      *(int *)(in_ECX + 0xc) = iVar2;
    }
  }
  return CONCAT22((short)((uint)iVar2 >> 0x10),local_8);
}

