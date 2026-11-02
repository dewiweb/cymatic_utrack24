// rea decompile_all
// name: FUN_004a2a7e
// address: 0x4a2a7e
// body: available
// range: 0x4a2a7e-0x4a2b0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004a2a7e(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_28;
  int *piStack_24;
  undefined1 auStack_20 [24];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar4 = (undefined4 *)auStack_20;
  local_8 = 4;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    puVar4 = &uStack_28;
    uStack_28 = 0x4a2aa0;
    piStack_24 = piVar1;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = 0;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *(int **)((int)puVar4 + -4) = piVar1;
    pcVar3 = *(code **)(iVar2 + 8);
    puVar5 = (undefined4 *)((int)puVar4 + -8);
    puVar4 = (undefined4 *)((int)puVar4 + -8);
    *puVar5 = 0x4a2ab0;
    (*pcVar3)();
  }
  param_1[1] = 0;
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *(int **)((int)puVar4 + -4) = piVar1;
    pcVar3 = *(code **)(iVar2 + 8);
    puVar6 = (undefined4 *)((int)puVar4 + -8);
    puVar4 = (undefined4 *)((int)puVar4 + -8);
    *puVar6 = 0x4a2ac1;
    (*pcVar3)();
  }
  param_1[2] = 0;
  *(undefined4 *)((int)puVar4 + -4) = 0x4a2acd;
  FUN_0046d6b3();
  *(undefined4 *)((int)puVar4 + -4) = 0x4a2ad5;
  FUN_0046d6b3();
  local_8._0_1_ = 1;
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *(int **)((int)puVar4 + -4) = piVar1;
    pcVar3 = *(code **)(iVar2 + 8);
    puVar7 = (undefined4 *)((int)puVar4 + -8);
    puVar4 = (undefined4 *)((int)puVar4 + -8);
    *puVar7 = 0x4a2ae6;
    (*pcVar3)();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *(int **)((int)puVar4 + -4) = piVar1;
    pcVar3 = *(code **)(iVar2 + 8);
    puVar8 = (undefined4 *)((int)puVar4 + -8);
    puVar4 = (undefined4 *)((int)puVar4 + -8);
    *puVar8 = 0x4a2af7;
    (*pcVar3)();
  }
  local_8 = 0xffffffff;
  param_1 = (int *)*param_1;
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    *(int **)((int)puVar4 + -4) = param_1;
    pcVar3 = *(code **)(iVar2 + 8);
    puVar9 = (undefined4 *)((int)puVar4 + -8);
    puVar4 = (undefined4 *)((int)puVar4 + -8);
    *puVar9 = 0x4a2b07;
    (*pcVar3)();
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x4a2b0c;
  return;
}

