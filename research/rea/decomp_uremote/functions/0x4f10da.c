// rea decompile_all
// name: FUN_004f10da
// address: 0x4f10da
// body: available
// range: 0x4f10da-0x4f1203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 *
FUN_004f10da(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x4f10e6;
  puStack_24 = (undefined1 *)param_3;
  uStack_28 = param_2;
  FUN_004ed3d7(param_1);
  local_8 = 0;
  *(undefined1 *)(param_1 + 0xd) = param_5;
  *param_1 = juce::HWNDComponentPeer::vftable;
  param_1[0xf] = param_4;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  *(undefined1 *)((int)param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0xff;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  puStack_24 = (undefined1 *)0x4f1156;
  puVar4 = (undefined4 *)FUN_00474777();
  *puVar4 = juce::HWNDComponentPeer::TemporaryImage::vftable;
  puStack_24 = (undefined1 *)0x4f1164;
  FUN_004c6ae2();
  puStack_24 = (undefined1 *)0xffffffff;
  local_8 = CONCAT31(local_8._1_3_,3);
  uStack_28 = 0x4f1177;
  uVar5 = FUN_00439b5a();
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = uVar5;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  puStack_24 = &LAB_004f22b3;
  uStack_28 = 0x4f118e;
  FUN_004f3cc2();
  puStack_24 = (undefined1 *)(param_1[1] + 4);
  uStack_28 = 0x4f119d;
  FUN_004f12fb();
  puVar4 = (undefined4 *)auStack_20;
  if ((param_3 & 0x100) != 0) {
    puStack_24 = (undefined1 *)0x4f11ab;
    cVar3 = FUN_004f0a6e();
    if (cVar3 != '\0') {
      if (((uint)param_1[2] >> 3 & 1) != 0) {
        puStack_24 = (undefined1 *)0x4f11be;
        iVar6 = FUN_0046d36e();
        if (0x202 < iVar6) goto LAB_004f11fa;
      }
      puStack_24 = (undefined1 *)0x4f11cd;
      piVar7 = (int *)thunk_FUN_004c1d58();
      puStack_24 = (undefined1 *)param_1[1];
      puVar4 = &uStack_28;
      uStack_28 = 0x4f11d7;
      puVar8 = (undefined4 *)(**(code **)(*piVar7 + 0x38))();
      puVar1 = (undefined4 *)param_1[0x10];
      if ((puVar1 != puVar8) && (param_1[0x10] = puVar8, puVar1 != (undefined4 *)0x0)) {
        puVar1 = (undefined4 *)*puVar1;
        puVar4[-1] = 1;
        pcVar2 = (code *)*puVar1;
        puVar9 = puVar4 + -2;
        puVar4 = puVar4 + -2;
        *puVar9 = 0x4f11eb;
        (*pcVar2)();
      }
      if (param_1[0x10] != 0) {
        *(undefined4 *)((int)puVar4 + -4) = 0x4f11fa;
        FUN_004f06f2();
      }
    }
  }
LAB_004f11fa:
  *(undefined4 *)((int)puVar4 + -4) = 0x4f1201;
  return param_1;
}

