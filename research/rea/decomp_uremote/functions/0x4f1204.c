// rea decompile_all
// name: FUN_004f1204
// address: 0x4f1204
// body: available
// range: 0x4f1204-0x4f12c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004f1204(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [24];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar5 = (undefined4 *)auStack_20;
  *param_1 = juce::HWNDComponentPeer::vftable;
  local_8 = 3;
  puVar1 = (undefined4 *)param_1[0x10];
  if (puVar1 != (undefined4 *)0x0) {
    param_1[0x10] = 0;
    uStack_24 = 1;
    puVar5 = &uStack_28;
    uStack_28 = 0x4f1232;
    (**(code **)*puVar1)();
  }
  uVar2 = param_1[0xe];
  *(undefined4 *)((int)puVar5 + -4) = 0;
  *(undefined4 *)((int)puVar5 + -8) = 0xffffffeb;
  *(undefined4 *)((int)puVar5 + -0xc) = uVar2;
  puVar6 = (undefined1 *)((int)puVar5 + -0x10);
  *(undefined4 *)((int)puVar5 + -0x10) = 0x4f123f;
  SetWindowLongW(*(HWND *)((int)puVar5 + -0xc),*(int *)((int)puVar5 + -8),
                 *(LONG *)((int)puVar5 + -4));
  *(undefined1 **)(puVar6 + -4) = &LAB_004f24c0;
  *(undefined4 *)(puVar6 + -8) = 0x4f124c;
  FUN_004f3cc2();
  puVar7 = puVar6;
  if (param_1[0x1c] != 0) {
    *(undefined4 *)(puVar6 + -4) = param_1[0x1c];
    puVar7 = puVar6 + -8;
    *(undefined4 *)(puVar6 + -8) = 0x4f125b;
    DestroyIcon(*(HICON *)(puVar6 + -4));
  }
  iVar3 = param_1[0x1d];
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 8) != 0) {
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(puVar7 + -4) = 0x4f1271;
      FUN_004f7aff();
    }
    iVar3 = *(int *)param_1[0x1d];
    *(int **)(puVar7 + -4) = (int *)param_1[0x1d];
    pcVar4 = *(code **)(iVar3 + 8);
    puVar8 = (undefined4 *)(puVar7 + -8);
    puVar7 = puVar7 + -8;
    *puVar8 = 0x4f127a;
    (*pcVar4)();
    param_1[0x1d] = 0;
  }
  puVar9 = puVar7 + -4;
  *(undefined4 *)(puVar7 + -4) = 0x4f128b;
  FUN_004c4d7a();
  *(undefined4 *)(puVar9 + -4) = 0x4f1292;
  FUN_0047478c();
  local_8._0_1_ = 1;
  *(undefined4 *)(puVar9 + -4) = param_1[0x1f];
  *(undefined4 *)(puVar9 + -8) = 0x4f129e;
  _free(*(void **)(puVar9 + -4));
  local_8 = (uint)local_8._1_3_ << 8;
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)param_1[0x10];
    *(undefined4 *)(puVar9 + -4) = 1;
    pcVar4 = (code *)*puVar1;
    puVar10 = (undefined4 *)(puVar9 + -8);
    puVar9 = puVar9 + -8;
    *puVar10 = 0x4f12af;
    (*pcVar4)();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(puVar9 + -4) = 0x4f12ba;
  FUN_004ed48e();
  *(undefined4 *)(puVar9 + -4) = 0x4f12bf;
  return;
}

