// rea decompile_all
// name: FUN_00523fa0
// address: 0x523fa0
// body: available
// range: 0x523fa0-0x52400f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00523fa0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  while( true ) {
    iVar2 = FUN_00527250(param_2);
    if (iVar2 == 0) {
      if (bVar1) {
        FUN_0050b4a0();
      }
      return 1;
    }
    if (param_1 == 0) break;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    bVar1 = true;
    if (*(int *)(param_2 + 4) == -1) {
      return 0;
    }
  }
  FUN_0050b450();
  return 0;
}

