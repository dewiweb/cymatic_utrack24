// rea decompile_all
// name: FUN_0047edd1
// address: 0x47edd1
// body: available
// range: 0x47edd1-0x47ee22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0047edd1(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 unaff_EBX;
  int *unaff_ESI;
  
  uVar2 = (**(code **)(*unaff_ESI + 0x54))();
  puVar3 = (undefined4 *)FUN_0047ed76();
  while( true ) {
    if ((int *)*puVar3 == (int *)0x0) {
      return 0;
    }
    cVar1 = (**(code **)(*(int *)*puVar3 + 8))();
    (**(code **)(*unaff_ESI + 0x58))(unaff_EBX,uVar2);
    if (cVar1 != '\0') break;
    puVar3 = puVar3 + 1;
  }
  return *puVar3;
}

