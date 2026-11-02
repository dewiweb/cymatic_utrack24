// rea decompile_all
// name: FUN_004eb3d3
// address: 0x4eb3d3
// body: available
// range: 0x4eb3d3-0x4eb437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004eb3d3(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  undefined4 uVar3;
  
  if (param_1 == '\0') {
    if ((*(int *)(unaff_ESI + 0xdc) == *(int *)(unaff_ESI + 0xe0)) &&
       (0 < *(int *)(unaff_ESI + 0xdc))) {
      iVar1 = *(int *)(unaff_ESI + 0xe0) + -1;
      uVar2 = FUN_00439b5a(iVar1);
      *(int *)(unaff_ESI + 0xdc) = iVar1;
      *(undefined4 *)(unaff_ESI + 0xe0) = uVar2;
    }
  }
  else {
    uVar3 = 1;
    FUN_004ee9f3(1);
    uVar2 = FUN_004ec409(unaff_ESI);
    FUN_004ea237(uVar2,uVar3);
  }
  FUN_004ea628();
  return 1;
}

