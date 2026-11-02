// rea decompile_all
// name: FUN_0055ca20
// address: 0x55ca20
// body: available
// range: 0x55ca20-0x55cab8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0055ca20(undefined2 param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int in_ECX;
  uint local_c;
  int local_8;
  
  FUN_0054f6b0();
  local_c = (uint)param_2;
  local_8 = FUN_00524350(FUN_005410a0,in_ECX + -0x18c,param_1,&local_c,&param_3,param_4);
  FUN_0054f6f0();
  if (local_8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 0xc)) + 0x1c)
            )();
  }
  return uVar1;
}

