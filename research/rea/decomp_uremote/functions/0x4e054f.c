// rea decompile_all
// name: FUN_004e054f
// address: 0x4e054f
// body: available
// range: 0x4e054f-0x4e083a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_004e054f(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  FUN_0046537e();
  FUN_004bfde7();
  FUN_004652d6();
  param_1[0x1c] = param_3;
  *param_1 = juce::PopupMenu::HelperClasses::MenuWindow::vftable;
  FUN_004e2279();
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = param_7;
  FUN_004f5fb6();
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((int)param_1 + 0xbd) = 0;
  *(undefined1 *)((int)param_1 + 0xbe) = param_6;
  *(undefined1 *)((int)param_1 + 0xbf) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((int)param_1 + 0xc1) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  uVar4 = FUN_00467ec4();
  param_1[0x39] = uVar4;
  param_1[0x3a] = uVar4;
  param_1[0x3b] = uVar4;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  FUN_004c2ddc();
  FUN_004c2de8();
  FUN_004c06f2();
  if (param_1[0x1c] != 0) {
    thunk_FUN_004c1d58();
  }
  FUN_004c1d65();
  thunk_FUN_004c1d58();
  FUN_004d3044();
  cVar3 = FUN_00476205();
  if (cVar3 == '\0') {
    FUN_004f0a6e();
  }
  FUN_004c0483();
  iVar5 = param_2[2];
  _param_6 = 0;
  if (0 < iVar5) {
    do {
      iVar2 = *(int *)(*param_2 + _param_6 * 4);
      if ((_param_6 < iVar5 + -1) || (*(char *)(iVar2 + 0xd) == '\0')) {
        iVar5 = FUN_005af82d();
        if (iVar5 == 0) {
          param_3 = 0;
        }
        else {
          param_3 = FUN_004e027d(iVar5,iVar2);
        }
        if ((int)param_1[0x27] < param_1[0x28] + 1) {
          FUN_004f8197();
        }
        iVar5 = param_1[0x28];
        param_1[0x28] = iVar5 + 1;
        *(undefined4 *)(param_1[0x26] + iVar5 * 4) = param_3;
      }
      iVar5 = param_2[2];
      _param_6 = _param_6 + 1;
    } while (_param_6 < iVar5);
  }
  FUN_004e0ff3();
  FUN_004c0bf7();
  FUN_004e16d2();
  if (param_1[0x22] != 0) {
    FUN_004e14a3();
  }
  FUN_004e15de();
  iVar5 = thunk_FUN_004c1d58();
  (**(code **)(*(int *)(iVar5 + 0x20) + 0x1c))();
  FUN_004c01b6();
  piVar6 = (int *)FUN_004e0e6d();
  if (piVar6[1] < piVar6[2] + 1) {
    FUN_004f8197();
  }
  iVar5 = piVar6[2];
  piVar6[2] = iVar5 + 1;
  puVar1 = (undefined4 *)(*piVar6 + iVar5 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  FUN_004c4e62();
  FUN_004c51aa();
  return param_1;
}

