// rea decompile_all
// name: FUN_0042a84b
// address: 0x42a84b
// body: available
// range: 0x42a84b-0x42a96e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a84b(ushort *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  if ((*param_1 < *(ushort *)(unaff_ESI + 0x2c)) && (param_1[2] < *(ushort *)(unaff_ESI + 0x50))) {
    if ((*(byte *)(unaff_ESI + 0x170) & 1) == 0) {
      if ((*(short *)(unaff_ESI + 0x158) == 0) || (*(short *)(unaff_ESI + 0x15a) == 0)) {
        uVar3 = (**(code **)(unaff_ESI + 0x240))();
      }
      else {
        piVar1 = (int *)(*(int *)(unaff_ESI + 0x38) + (uint)*param_1 * 8);
        piVar2 = (int *)(*(int *)(unaff_ESI + 0x5c) + (uint)param_1[2] * 8);
        if (*(int *)(unaff_ESI + 0xdc) == *(int *)(unaff_ESI + 0xe0)) {
          uVar3 = (**(code **)(unaff_ESI + 0x240))();
          uVar3 = thunk_FUN_00401000(uVar3,*(undefined4 *)(unaff_ESI + 0xdc));
        }
        else {
          thunk_FUN_00401000(*piVar1 - *piVar2,*(int *)(unaff_ESI + 0xdc));
          thunk_FUN_00401000(piVar1[1] - piVar2[1],*(undefined4 *)(unaff_ESI + 0xe0));
          uVar3 = (**(code **)(unaff_ESI + 0x240))();
        }
      }
    }
    else {
      uVar3 = (**(code **)(unaff_ESI + 0x23c))();
    }
  }
  else {
    uVar3 = 0;
    if (*(char *)(unaff_ESI + 0x231) != '\0') {
      *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    }
  }
  *(undefined4 *)param_1 = uVar3;
  return;
}

