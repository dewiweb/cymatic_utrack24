// rea decompile_all
// name: FUN_00429083
// address: 0x429083
// body: available
// range: 0x429083-0x429174 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00429083(void)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EBX;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  if ((((char)unaff_EBX[0x4b] != '\0') || (iVar1 = FUN_00428ef3(), iVar1 == 0)) &&
     (*(char *)((int)unaff_EBX + 0x12d) == '\0')) {
    uVar3 = 0;
    iVar1 = *unaff_EBX;
    if (unaff_EBX[0x3c] != 0) {
      do {
        uVar2 = thunk_FUN_00401000((int)*(short *)(*(int *)(iVar1 + 0x2a0) + uVar3 * 2),
                                   unaff_EBX[0x16]);
        *(undefined4 *)(unaff_EBX[0x3d] + uVar3 * 4) = uVar2;
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)unaff_EBX[0x3c]);
    }
    uVar3 = 0;
    if ((short)unaff_EBX[0x42] != 0) {
      do {
        iVar1 = uVar3 * 8;
        *(undefined4 *)(iVar1 + unaff_EBX[0x43]) = 0;
        *(undefined4 *)(unaff_EBX[0x43] + 4 + iVar1) = 0;
        *(undefined4 *)(iVar1 + unaff_EBX[0x44]) = 0;
        *(undefined4 *)(unaff_EBX[0x44] + 4 + iVar1) = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(unaff_EBX + 0x42));
    }
    uVar3 = 0;
    if (*(ushort *)(unaff_EBX + 0x3e) != 0) {
      do {
        *(undefined4 *)(unaff_EBX[0x3f] + uVar3 * 4) = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(unaff_EBX + 0x3e));
    }
    piVar4 = &DAT_0090bce8;
    piVar5 = unaff_EBX + 0x2b;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    iVar1 = FUN_00428d81();
    if (iVar1 == 0) {
      *(undefined1 *)((int)unaff_EBX + 0x12d) = 1;
    }
  }
  return;
}

