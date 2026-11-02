// rea decompile_all
// name: FUN_00481a81
// address: 0x481a81
// body: available
// range: 0x481a81-0x481b3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481a81(int param_1,char param_2)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == '\0') {
    iVar3 = in_EAX[param_1 + 0x16];
  }
  else {
    iVar3 = in_EAX[param_1 + 0x1a];
    param_1 = param_1 + 0x10;
  }
  if (iVar3 == 0) {
    *(undefined4 *)(*in_EAX + 0x14) = 0x32;
    *(int *)(*in_EAX + 0x18) = param_1;
    (**(code **)*in_EAX)();
  }
  if (*(char *)(iVar3 + 0x111) == '\0') {
    FUN_00481979(0xc4);
    iVar2 = 0;
    iVar1 = 1;
    do {
      iVar2 = iVar2 + (uint)*(byte *)(iVar1 + iVar3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x11);
    FUN_00481993();
    FUN_0048194e(param_1);
    _param_2 = 1;
    do {
      FUN_0048194e(*(undefined1 *)(_param_2 + iVar3));
      _param_2 = _param_2 + 1;
    } while (_param_2 < 0x11);
    _param_2 = 0;
    if (0 < iVar2) {
      do {
        FUN_0048194e(*(undefined1 *)(iVar3 + 0x11 + _param_2));
        _param_2 = _param_2 + 1;
      } while (_param_2 < iVar2);
    }
    *(undefined1 *)(iVar3 + 0x111) = 1;
  }
  return;
}

