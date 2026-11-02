// rea decompile_all
// name: FUN_004e726f
// address: 0x4e726f
// body: available
// range: 0x4e726f-0x4e7333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e726f(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  int unaff_ESI;
  
  *(undefined1 *)(unaff_ESI + 0x9e) = 1;
  if (*(int **)(unaff_ESI + 0x78) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x78) + 4))();
  }
  *(int *)(unaff_ESI + 0x88) = iVar2;
  bVar1 = false;
  iVar3 = FUN_004f67db();
  if (0 < iVar3) {
    FUN_004f67db();
    iVar3 = FUN_004f67fa();
    if (iVar2 <= iVar3) {
      uVar4 = FUN_00439b5a(iVar2,iVar2,extraout_ECX);
      FUN_004a7fca(iVar2,uVar4);
      uVar4 = FUN_004e7640(0);
      *(undefined4 *)(unaff_ESI + 0x98) = uVar4;
      bVar1 = true;
    }
  }
  FUN_004e6b72(*(byte *)(unaff_ESI + 0x68) >> 1 & 1);
  (**(code **)(**(int **)(unaff_ESI + 0x7c) + 0x84))();
  if ((bVar1) && (*(int **)(unaff_ESI + 0x78) != (int *)0x0)) {
    (**(code **)(**(int **)(unaff_ESI + 0x78) + 0x1c))(*(undefined4 *)(unaff_ESI + 0x98));
  }
  return;
}

