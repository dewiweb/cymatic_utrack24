// rea decompile_all
// name: FUN_00464d3f
// address: 0x464d3f
// body: available
// range: 0x464d3f-0x464da6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00464d3f(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  uint uVar4;
  
  uVar4 = *(int *)(unaff_ESI + 0x18) + param_1;
  if (*(int *)(unaff_ESI + 8) == 0) {
    if (*(uint *)(unaff_ESI + 0x20) < uVar4) {
      return 0;
    }
    iVar3 = *(int *)(unaff_ESI + 0x14);
  }
  else {
    if (*(uint *)(*(int *)(unaff_ESI + 8) + 4) <= uVar4) {
      FUN_004706a0(uVar4 >> 1);
      FUN_00464536();
    }
    iVar3 = **(int **)(unaff_ESI + 8);
  }
  iVar1 = *(int *)(unaff_ESI + 0x18);
  *(int *)(unaff_ESI + 0x18) = iVar1 + param_1;
  uVar2 = FUN_004702e7(*(undefined4 *)(unaff_ESI + 0x1c));
  *(undefined4 *)(unaff_ESI + 0x1c) = uVar2;
  return iVar1 + iVar3;
}

