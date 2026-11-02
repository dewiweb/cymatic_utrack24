// rea decompile_all
// name: FUN_006ad190
// address: 0x6ad190
// body: available
// range: 0x6ad190-0x6ad32b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ad190(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvVar5;
  void *_Memory;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int in_ECX;
  int iVar9;
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0072366b;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = (void *)0x0;
  uStack_2c = 0;
  iStack_28 = 0;
  puStack_24 = (undefined4 *)0x0;
  iVar9 = 0;
  local_8 = 0;
  if (0 < *(int *)(in_ECX + 0x98)) {
    do {
      piVar3 = *(int **)(*(int *)(in_ECX + 0x90) + iVar9 * 4);
      if ((*(byte *)(*piVar3 + 0x68) & 2) == 0) {
        FUN_006d13b0(iVar9 + 1,piVar3 + 1,1,iVar9 == *(int *)(in_ECX + 0xa8));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(in_ECX + 0x98));
  }
  local_14 = operator_new(0xc);
  local_8._0_1_ = 2;
  piVar3 = local_14 + 2;
  *local_14 = juce::ModalCallbackFunction::ComponentCaller1<juce::TabbedButtonBar>::vftable;
  local_14[1] = FUN_006ad330;
  local_18 = piVar3;
  if (*(int *)(in_ECX + 100) == 0) {
    puVar7 = operator_new(0xc);
    *puVar7 = juce::ReferenceCountedObject::vftable;
    piVar1 = puVar7 + 1;
    *piVar1 = 0;
    *puVar7 = juce::WeakReference<juce::Component,juce::ReferenceCountedObject>::SharedPointer::
              vftable;
    puVar7[2] = in_ECX;
    if (*(undefined4 **)(in_ECX + 100) != puVar7) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      puVar4 = *(undefined4 **)(in_ECX + 100);
      *(undefined4 **)(in_ECX + 100) = puVar7;
      if (puVar4 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar4 + 1;
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)*puVar4)(1,uVar6);
        }
      }
    }
  }
  iVar9 = *(int *)(in_ECX + 100);
  *piVar3 = iVar9;
  if (iVar9 != 0) {
    LOCK();
    *(int *)(iVar9 + 4) = *(int *)(iVar9 + 4) + 1;
    UNLOCK();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  uVar8 = *(undefined4 *)(in_ECX + 0xb0);
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  FUN_006cb4b0();
  local_58 = local_20;
  local_54 = local_1c;
  uVar8 = FUN_006d1070(local_80,uVar8);
  FUN_006a0120(uVar8,local_14,0);
  pvVar5 = local_30;
  iVar9 = iStack_28;
  if (puStack_24 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puStack_24 + 1;
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puStack_24)(1);
      pvVar5 = local_30;
      iVar9 = iStack_28;
    }
  }
  while (_Memory = local_30, 0 < iVar9) {
    iVar2 = *(int *)((int)local_30 + iVar9 * 4 + -4);
    iVar9 = iVar9 + -1;
    local_30 = _Memory;
    if (iVar2 != 0) {
      local_30 = pvVar5;
      FUN_004abe20();
      FUN_004bfe14(iVar2,0x28);
      pvVar5 = local_30;
      local_30 = _Memory;
    }
  }
  local_30 = pvVar5;
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return;
}

