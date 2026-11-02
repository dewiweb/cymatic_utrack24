// rea decompile_all
// name: FUN_0043d75a
// address: 0x43d75a
// body: available
// range: 0x43d75a-0x43d94f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0043d75a(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar1 = FUN_005b3fb0();
  iVar2 = *(int *)(unaff_ESI + 0x74);
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar2 = FUN_004c08d2(param_1,unaff_ESI,0,(*(int *)(unaff_ESI + 0x70) - iVar1) + iVar2);
  return *(undefined4 *)(iVar2 + 4);
}

