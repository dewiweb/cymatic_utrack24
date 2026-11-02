// rea decompile_all
// name: FUN_005208d0
// address: 0x5208d0
// body: available
// range: 0x5208d0-0x52094a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005208d0(int param_1)

{
  uint uVar1;
  uint in_ECX;
  undefined1 local_9;
  undefined4 local_8;
  
  uVar1 = in_ECX;
  if (((*(int *)(in_ECX + 4) == *(int *)(param_1 + 4)) &&
      (uVar1 = (uint)*(byte *)(param_1 + 8), *(byte *)(in_ECX + 8) == uVar1)) &&
     (*(int *)(in_ECX + 4) == 7)) {
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if (*(char *)(in_ECX + local_8 + 9) != *(char *)(param_1 + local_8 + 9)) {
        local_9 = 0;
        goto LAB_0052093e;
      }
    }
    local_9 = 1;
LAB_0052093e:
    uVar1 = (uint)local_9;
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

