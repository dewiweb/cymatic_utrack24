// rea decompile_all
// name: FUN_004247ca
// address: 0x4247ca
// body: available
// range: 0x4247ca-0x424850 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004247ca(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2 == 0) {
    return param_1 + 0xa0;
  }
  if (param_2 == 1) {
    return param_1 + 0x104;
  }
  if (param_2 == 2) {
    puVar2 = (uint *)(param_1 + 0x170);
    uVar1 = (uint)(ushort)(*(short *)puVar2 + 1);
  }
  else {
    if (param_2 == 3) {
      return param_1 + 0xd8;
    }
    if (param_2 == 4) {
      puVar2 = (uint *)(param_1 + 300);
      uVar1 = (uint)*(byte *)(param_1 + 0x128);
    }
    else {
      if (param_2 == 5) {
        return param_1 + 0x1d4;
      }
      if (param_2 != 6) {
        return 0;
      }
      puVar2 = (uint *)(param_1 + 0x22c);
      uVar1 = *puVar2;
    }
  }
  return -(uint)(uVar1 != 0) & (uint)puVar2;
}

