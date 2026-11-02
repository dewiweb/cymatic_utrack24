// rea decompile_all
// name: FUN_0042b09e
// address: 0x42b09e
// body: available
// range: 0x42b09e-0x42b149 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042b09e(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_ESI;
  
  iVar2 = *(int *)(unaff_ESI + 0x130);
  if (*(int *)(unaff_ESI + 0x10) < iVar2 + 1) {
    if (*(char *)(unaff_ESI + 0x231) != '\0') {
      *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    }
  }
  else {
    uVar3 = FUN_00429782();
    uVar4 = FUN_00429782();
    while (0 < iVar2) {
      *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + -1;
      uVar1 = *(ushort *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c) * 4);
      if (uVar1 < *(ushort *)(unaff_ESI + 0x74)) {
        FUN_0042ae1f(uVar1,uVar3,uVar4,1);
      }
      else if (*(char *)(unaff_ESI + 0x231) != '\0') {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
        return;
      }
      *(int *)(unaff_ESI + 0x130) = *(int *)(unaff_ESI + 0x130) + -1;
      iVar2 = *(int *)(unaff_ESI + 0x130);
    }
  }
  *(undefined4 *)(unaff_ESI + 0x130) = 1;
  *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
  return;
}

