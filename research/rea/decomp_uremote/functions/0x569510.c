// rea decompile_all
// name: FUN_00569510
// address: 0x569510
// body: available
// range: 0x569510-0x5695db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00569510(char param_1,char param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0056a330();
  do {
    if (iVar2 == 0) {
      return 0;
    }
    if (((*(uint *)(iVar2 + 0x70) & 0x1000000) == 0) && ((*(uint *)(iVar2 + 0x70) & 0x10000) == 0))
    {
      if ((param_1 != '\0') && (cVar1 = FUN_00567da0(), cVar1 != '\0')) {
        return 1;
      }
      if ((param_2 != '\0') &&
         (cVar1 = (**(code **)(*(int *)(iVar2 + 0x28 + *(int *)(*(int *)(iVar2 + 0x28) + 0xc)) +
                              0x24))(), cVar1 != '\0')) {
        return 1;
      }
    }
    iVar2 = FUN_0056a3e0(iVar2);
  } while( true );
}

