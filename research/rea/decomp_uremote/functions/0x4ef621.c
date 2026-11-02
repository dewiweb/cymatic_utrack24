// rea decompile_all
// name: FUN_004ef621
// address: 0x4ef621
// body: available
// range: 0x4ef621-0x4ef651 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004ef621(void)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int unaff_ESI;
  
  cVar1 = FUN_004c044d();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_004c0453();
    if (piVar3 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar3 + 0x40))();
      return uVar2;
    }
  }
  iVar4 = FUN_004c4e62();
  return *(int *)(iVar4 + 0x70) == unaff_ESI;
}

