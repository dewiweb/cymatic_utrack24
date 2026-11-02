// rea decompile_all
// name: FUN_0042b2b8
// address: 0x42b2b8
// body: available
// range: 0x42b2b8-0x42b3bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042b2b8(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *in_EAX;
  undefined4 uVar4;
  int unaff_ESI;
  int iVar5;
  
  uVar1 = *in_EAX;
  if ((uVar1 < *(ushort *)(unaff_ESI + 0x2c)) &&
     (*(uint *)(in_EAX + 2) < *(uint *)(unaff_ESI + 0x17c))) {
    (**(code **)(unaff_ESI + 0x250))();
    if (*(short *)(unaff_ESI + 0x158) == 0) {
      iVar5 = (uint)uVar1 * 8;
      uVar4 = FUN_00429782();
      *(undefined4 *)(iVar5 + *(int *)(unaff_ESI + 0x30)) = uVar4;
      uVar4 = FUN_00429782();
      *(undefined4 *)(*(int *)(unaff_ESI + 0x30) + 4 + iVar5) = uVar4;
      iVar2 = *(int *)(unaff_ESI + 0x30);
      iVar3 = *(int *)(unaff_ESI + 0x34);
      *(undefined4 *)(iVar3 + iVar5) = *(undefined4 *)(iVar2 + iVar5);
      *(undefined4 *)(iVar3 + 4 + iVar5) = *(undefined4 *)(iVar2 + 4 + iVar5);
    }
    (**(code **)(unaff_ESI + 0x23c))();
    if ((*(byte *)(unaff_ESI + 0x170) & 1) != 0) {
      (**(code **)(unaff_ESI + 0x238))();
    }
    (**(code **)(unaff_ESI + 0x248))();
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  *(ushort *)(unaff_ESI + 0x11c) = uVar1;
  *(ushort *)(unaff_ESI + 0x11e) = uVar1;
  return;
}

