// rea decompile_all
// name: FUN_005595e0
// address: 0x5595e0
// body: available
// range: 0x5595e0-0x55963b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005595e0(uint param_1)

{
  int iVar1;
  int in_ECX;
  undefined1 local_10;
  
  if (param_1 < *(ushort *)(in_ECX + 0x10)) {
    iVar1 = FUN_0055bb40(*(undefined2 *)(*(int *)(in_ECX + 8) + param_1 * 8));
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x10) != 3)) {
      local_10 = 0;
    }
    else {
      local_10 = 1;
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

