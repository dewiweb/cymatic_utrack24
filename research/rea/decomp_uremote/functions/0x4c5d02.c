// rea decompile_all
// name: FUN_004c5d02
// address: 0x4c5d02
// body: available
// range: 0x4c5d02-0x4c5de6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004c5d02(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  *param_1 = juce::DragAndDropContainer::DragImageComponent::vftable;
  param_1[0x1c] = juce::DragAndDropContainer::DragImageComponent::vftable;
  local_8 = 5;
  iVar1 = param_1[0x2b];
  puStack_24 = param_1;
  uStack_28 = 0x4c5d36;
  cVar3 = FUN_004f893b();
  if (cVar3 != '\0') {
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  puStack_24 = (undefined4 *)0x0;
  uStack_28 = 0x4c5d4d;
  cVar3 = FUN_004f5fe9();
  puVar5 = (undefined4 *)auStack_20;
  if (cVar3 != '\0') {
    puStack_24 = param_1;
    uStack_28 = 0x4c5d64;
    FUN_004c2293();
    puVar5 = (undefined4 *)auStack_20;
    puStack_24 = (undefined4 *)0x4c5d6b;
    piVar4 = (int *)FUN_004c625c();
    if (piVar4 != (int *)0x0) {
      puVar5 = &uStack_28;
      uStack_28 = 0x4c5d7f;
      puStack_24 = param_1 + 0x22;
      cVar3 = (**(code **)(*piVar4 + 4))();
      if (cVar3 != '\0') {
        iVar1 = *piVar4;
        puVar5[-1] = param_1 + 0x22;
        pcVar2 = *(code **)(iVar1 + 0x10);
        puVar6 = puVar5 + -2;
        puVar5 = puVar5 + -2;
        *puVar6 = 0x4c5d8b;
        (*pcVar2)();
      }
    }
  }
  pcVar2 = *(code **)(*(int *)param_1[0x2b] + 0x10);
  puVar7 = (undefined1 *)((int)puVar5 + -4);
  *(undefined4 *)((int)puVar5 + -4) = 0x4c5d96;
  (*pcVar2)();
  *(undefined4 *)(puVar7 + -4) = 0x4c5da1;
  FUN_00474d0f();
  *(undefined4 *)(puVar7 + -4) = 0x4c5dac;
  FUN_00474d0f();
  puVar8 = puVar7 + -4;
  *(undefined4 *)(puVar7 + -4) = 0x4c5db7;
  FUN_004c4d7a();
  *(undefined4 *)(puVar8 + -4) = 0x4c5dc5;
  FUN_00474d0f();
  *(undefined4 *)(puVar8 + -4) = 0x4c5dcc;
  FUN_004615f7();
  *(undefined4 *)(puVar8 + -4) = 0x4c5dd4;
  FUN_0047478c();
  local_8 = 0xffffffff;
  *(undefined4 *)(puVar8 + -4) = 0x4c5ddf;
  FUN_004bfe57();
  *(undefined4 *)(puVar8 + -4) = 0x4c5de4;
  return;
}

