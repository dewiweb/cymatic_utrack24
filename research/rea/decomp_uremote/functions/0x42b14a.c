// rea decompile_all
// name: FUN_0042b14a
// address: 0x42b14a
// body: available
// range: 0x42b14a-0x42b242 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042b14a(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int iVar5;
  
  uVar1 = *param_1;
  if ((uVar1 < *(ushort *)(unaff_ESI + 0x50)) &&
     (uVar2 = *(ushort *)(unaff_ESI + 0x11c), uVar2 < *(ushort *)(unaff_ESI + 0x2c))) {
    if (*(short *)(unaff_ESI + 0x15a) == 0) {
      iVar3 = *(int *)(unaff_ESI + 0x54);
      iVar4 = *(int *)(unaff_ESI + 0x30);
      iVar5 = (uint)uVar1 * 8;
      *(undefined4 *)(iVar3 + iVar5) = *(undefined4 *)(iVar4 + (uint)uVar2 * 8);
      *(undefined4 *)(iVar3 + 4 + iVar5) = *(undefined4 *)(iVar4 + 4 + (uint)uVar2 * 8);
      (**(code **)(unaff_ESI + 0x24c))();
      iVar3 = *(int *)(unaff_ESI + 0x54);
      iVar4 = *(int *)(unaff_ESI + 0x58);
      *(undefined4 *)(iVar4 + iVar5) = *(undefined4 *)(iVar3 + iVar5);
      *(undefined4 *)(iVar4 + 4 + iVar5) = *(undefined4 *)(iVar3 + 4 + iVar5);
    }
    (**(code **)(unaff_ESI + 0x23c))();
    (**(code **)(unaff_ESI + 0x248))();
    *(undefined2 *)(unaff_ESI + 0x11e) = *(undefined2 *)(unaff_ESI + 0x11c);
    *(ushort *)(unaff_ESI + 0x120) = uVar1;
    if ((*(byte *)(unaff_ESI + 0x170) & 1) != 0) {
      *(ushort *)(unaff_ESI + 0x11c) = uVar1;
    }
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}

