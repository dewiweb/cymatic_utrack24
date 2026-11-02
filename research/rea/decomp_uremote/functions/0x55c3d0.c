// rea decompile_all
// name: FUN_0055c3d0
// address: 0x55c3d0
// body: available
// range: 0x55c3d0-0x55c495 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055c3d0(byte param_1,char param_2)

{
  int in_ECX;
  undefined4 local_8;
  
  FUN_0054f6b0();
  *(byte *)(in_ECX + -0x38) = *(byte *)(in_ECX + -0x38) & 0xfb | (param_1 & 1) << 2;
  if (param_2 != '\0') {
    FUN_00569660(param_1);
    FUN_00569660(param_1);
    for (local_8 = *(int *)(in_ECX + -0x70); local_8 != 0; local_8 = *(int *)(local_8 + 0x120)) {
      (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 0xc)) + 0x28))
                (param_1,param_2);
    }
  }
  FUN_0054f6f0();
  return;
}

