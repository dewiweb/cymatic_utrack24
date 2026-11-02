// rea decompile_all
// name: FUN_0055a060
// address: 0x55a060
// body: available
// range: 0x55a060-0x55a0d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0055a060(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 uVar2;
  uint local_c;
  undefined1 local_5;
  
  local_5 = 0;
  for (local_c = 0; local_c < *(ushort *)(in_ECX + 10); local_c = local_c + 1) {
    uVar2 = param_1;
    FUN_0055af60(*(undefined2 *)(*(int *)(in_ECX + 4) + local_c * 8));
    cVar1 = FUN_005034a0(uVar2);
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(in_ECX + 4) + 4 + local_c * 8) = 4;
      local_5 = 1;
    }
  }
  return local_5;
}

