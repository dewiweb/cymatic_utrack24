// rea decompile_all
// name: FUN_0051fcb0
// address: 0x51fcb0
// body: available
// range: 0x51fcb0-0x51fd4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0051fcb0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  uint local_c;
  undefined1 local_5;
  
  local_5 = 0;
  for (local_c = 0; local_c < *(ushort *)((int)in_ECX + 6); local_c = local_c + 1) {
    iVar1 = *(int *)(*in_ECX + local_c * 4);
    cVar2 = FUN_005034a0(param_1);
    if ((cVar2 != '\0') && ((*(byte *)(iVar1 + 0xd8) & 2) == 0)) {
      *(byte *)(iVar1 + 0xd8) = *(byte *)(iVar1 + 0xd8) | 2;
      local_5 = 1;
      FUN_005033e0(iVar1 + 0x6c);
      FUN_0051fe80();
    }
  }
  return local_5;
}

