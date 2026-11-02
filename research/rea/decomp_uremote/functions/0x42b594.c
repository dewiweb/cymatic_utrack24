// rea decompile_all
// name: FUN_0042b594
// address: 0x42b594
// body: available
// range: 0x42b594-0x42b7ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042b594(void)

{
  ushort uVar1;
  int iVar2;
  ushort *in_EAX;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  
  uVar1 = *in_EAX;
  if (((uVar1 < *(ushort *)(unaff_ESI + 0x50)) &&
      (*(int *)(in_EAX + 2) + 1U < *(int *)(unaff_ESI + 0x17c) + 1U)) &&
     (*(ushort *)(unaff_ESI + 0x11c) < *(ushort *)(unaff_ESI + 0x2c))) {
    if (*(int *)(in_EAX + 2) != -1) {
      (**(code **)(unaff_ESI + 0x250))();
    }
    if (*(short *)(unaff_ESI + 0x15a) == 0) {
      iVar4 = (uint)uVar1 * 8;
      iVar3 = FUN_00429782();
      *(int *)(iVar4 + *(int *)(unaff_ESI + 0x54)) =
           iVar3 + *(int *)(*(int *)(unaff_ESI + 0x30) + (uint)*(ushort *)(unaff_ESI + 0x11c) * 8);
      iVar3 = FUN_00429782();
      *(int *)(*(int *)(unaff_ESI + 0x54) + 4 + iVar4) =
           iVar3 + *(int *)(*(int *)(unaff_ESI + 0x30) + 4 +
                           (uint)*(ushort *)(unaff_ESI + 0x11c) * 8);
      iVar3 = *(int *)(unaff_ESI + 0x54);
      iVar2 = *(int *)(unaff_ESI + 0x58);
      *(undefined4 *)(iVar2 + iVar4) = *(undefined4 *)(iVar3 + iVar4);
      *(undefined4 *)(iVar2 + 4 + iVar4) = *(undefined4 *)(iVar3 + 4 + iVar4);
    }
    (**(code **)(unaff_ESI + 0x240))();
    (**(code **)(unaff_ESI + 0x23c))();
    if ((*(byte *)(unaff_ESI + 0x170) & 4) == 0) {
      FUN_00429b7c();
    }
    else {
      (**(code **)(unaff_ESI + 0x238))();
    }
    (**(code **)(unaff_ESI + 0x248))();
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  *(ushort *)(unaff_ESI + 0x11e) = *(ushort *)(unaff_ESI + 0x11c);
  if ((*(byte *)(unaff_ESI + 0x170) & 0x10) != 0) {
    *(ushort *)(unaff_ESI + 0x11c) = uVar1;
  }
  *(ushort *)(unaff_ESI + 0x120) = uVar1;
  return;
}

