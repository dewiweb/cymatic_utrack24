// rea decompile_all
// name: FUN_00482ac3
// address: 0x482ac3
// body: available
// range: 0x482ac3-0x482b4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00482ac3(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  
  if (in_EAX[5] != 100) {
    *(undefined4 *)(*in_EAX + 0x14) = 0x14;
    *(int *)(*in_EAX + 0x18) = in_EAX[5];
    (**(code **)*in_EAX)();
  }
  piVar1 = in_EAX + param_1 + 0x12;
  if (*piVar1 == 0) {
    iVar2 = FUN_00482a93();
    *piVar1 = iVar2;
  }
  iVar2 = 0;
  do {
    iVar3 = (*param_2 * param_3 + 0x32) / 100;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    if (0xff < iVar3) {
      iVar3 = 0xff;
    }
    *(short *)(iVar2 + *piVar1) = (short)iVar3;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + 2;
  } while (iVar2 < 0x80);
  *(undefined1 *)(*piVar1 + 0x80) = 0;
  return;
}

