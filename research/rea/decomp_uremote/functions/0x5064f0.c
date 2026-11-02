// rea decompile_all
// name: FUN_005064f0
// address: 0x5064f0
// body: available
// range: 0x5064f0-0x506508 inclusive
// range: 0x50650b-0x506535 inclusive
// range: 0x506538-0x506581 inclusive
// range: 0x506584-0x5065a7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005064f0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint local_8;
  
  if (*(int *)(param_1 + 4) < *(int *)(param_2 + 4)) {
    uVar1 = 0xff;
  }
  else if (*(int *)(param_2 + 4) < *(int *)(param_1 + 4)) {
    uVar1 = 1;
  }
  else if (*(byte *)(param_1 + 8) < *(byte *)(param_2 + 8)) {
    uVar1 = 0xff;
  }
  else if (*(byte *)(param_2 + 8) < *(byte *)(param_1 + 8)) {
    uVar1 = 1;
  }
  else {
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if (*(byte *)(param_1 + local_8 + 9) < *(byte *)(param_2 + local_8 + 9)) {
        return 0xff;
      }
      if (*(byte *)(param_2 + local_8 + 9) < *(byte *)(param_1 + local_8 + 9)) {
        return 1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

