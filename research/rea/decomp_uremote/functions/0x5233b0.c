// rea decompile_all
// name: FUN_005233b0
// address: 0x5233b0
// body: available
// range: 0x5233b0-0x523495 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005233b0(int param_1)

{
  int iVar1;
  
  if ((((param_1 != 0) && ((*(byte *)(param_1 + 0x20) & 0x80) == 0)) &&
      (*(int *)(param_1 + 0x1c) != 0)) &&
     ((((*(byte *)(*(int *)(param_1 + 0x1c) + 0x20) & 0x80) == 0 &&
       (*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) != 0)) &&
      (((*(byte *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 0x20) & 0x7f) ==
        (*(byte *)(param_1 + 0x20) & 0x7f) && ((*(byte *)(param_1 + 0x20) & 0x7f) != 0)))))) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (*(int *)(iVar1 + 0x18) == 0) {
      *(int *)(param_1 + 0x1c) = iVar1;
      *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 0x80;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 0x18);
    }
    *(int *)(iVar1 + 0x18) = param_1;
    *(char *)(iVar1 + 0x20) = *(char *)(iVar1 + 0x20) + '\x01';
    param_1 = iVar1;
  }
  return param_1;
}

