// rea decompile_all
// name: FUN_0042b3bd
// address: 0x42b3bd
// body: available
// range: 0x42b3bd-0x42b593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042b3bd(void)

{
  int *piVar1;
  ushort uVar2;
  ushort *in_EAX;
  undefined4 uVar3;
  int unaff_ESI;
  int *piVar4;
  
  uVar2 = *in_EAX;
  if ((uVar2 < *(ushort *)(unaff_ESI + 0x50)) &&
     (*(ushort *)(unaff_ESI + 0x11c) < *(ushort *)(unaff_ESI + 0x2c))) {
    if ((*(short *)(unaff_ESI + 0x158) == 0) || (*(short *)(unaff_ESI + 0x15a) == 0)) {
      (**(code **)(unaff_ESI + 0x240))();
    }
    else {
      piVar4 = (int *)(*(int *)(unaff_ESI + 0x5c) + (uint)uVar2 * 8);
      piVar1 = (int *)(*(int *)(unaff_ESI + 0x38) + (uint)*(ushort *)(unaff_ESI + 0x11c) * 8);
      if (*(int *)(unaff_ESI + 0xdc) == *(int *)(unaff_ESI + 0xe0)) {
        uVar3 = (**(code **)(unaff_ESI + 0x240))();
        thunk_FUN_00401000(uVar3,*(undefined4 *)(unaff_ESI + 0xdc));
      }
      else {
        thunk_FUN_00401000(*piVar4 - *piVar1,*(int *)(unaff_ESI + 0xdc));
        thunk_FUN_00401000(piVar4[1] - piVar1[1],*(undefined4 *)(unaff_ESI + 0xe0));
        (**(code **)(unaff_ESI + 0x240))();
      }
    }
    if ((*(byte *)(unaff_ESI + 0x170) & 4) == 0) {
      FUN_00429b7c();
    }
    else {
      (**(code **)(unaff_ESI + 0x238))();
    }
    (**(code **)(unaff_ESI + 0x23c))();
    (**(code **)(unaff_ESI + 0x248))();
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  *(ushort *)(unaff_ESI + 0x11e) = *(ushort *)(unaff_ESI + 0x11c);
  *(ushort *)(unaff_ESI + 0x120) = uVar2;
  if ((*(byte *)(unaff_ESI + 0x170) & 0x10) != 0) {
    *(ushort *)(unaff_ESI + 0x11c) = uVar2;
  }
  return;
}

