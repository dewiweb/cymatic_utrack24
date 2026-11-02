// rea decompile_all
// name: FUN_004eb300
// address: 0x4eb300
// body: available
// range: 0x4eb300-0x4eb4ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb300(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *puStack_94;
  undefined4 uStack_90;
  undefined1 *puStack_8c;
  int iStack_88;
  undefined1 *puStack_84;
  undefined1 *puStack_80;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [36];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704f0e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puStack_80 = (undefined1 *)0x4eb33f;
  FUN_00684a80();
  puStack_80 = (undefined1 *)0x4eb350;
  FUN_00684c50();
  puStack_80 = (undefined1 *)0x4eb357;
  puVar3 = operator_new(0x28);
  local_8 = 0;
  piVar1 = puVar3 + 1;
  *puVar3 = juce::ReferenceCountedObject::vftable;
  *piVar1 = 0;
  *puVar3 = juce::Font::SharedFontInternal::vftable;
  puVar3[2] = 0;
  piVar4 = (int *)FUN_00643f40();
  iVar2 = *piVar4;
  puVar3[3] = iVar2;
  piVar4 = (int *)(iVar2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  puStack_80 = (undefined1 *)0x4eb3a7;
  FUN_0045c990();
  puVar3[5] = 0x41e00000;
  puVar3[6] = 0x3f800000;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  local_8 = 1;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  puStack_80 = (undefined1 *)0x4eb3f9;
  (**(code **)(*(int *)*param_1 + 0x68))();
  local_8 = 0xffffffff;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      puStack_80 = (undefined1 *)0x1;
      puStack_84 = (undefined1 *)0x4eb41d;
      (**(code **)*puVar3)();
    }
  }
  puStack_80 = (undefined1 *)0x28;
  puStack_84 = *(undefined1 **)(local_14 + 0x18);
  iStack_88 = *(int *)(local_14 + 0x80) + -0x30;
  puStack_8c = (undefined1 *)0x4eb43c;
  FUN_00472d90();
  puStack_80 = (undefined1 *)0x1;
  puStack_84 = (undefined1 *)0x24;
  FUN_0040e4d0(&puStack_94);
  FUN_006830c0(local_14 + 4);
  puStack_80 = (undefined1 *)DAT_00c7ebb8;
  puStack_84 = (undefined1 *)0x4eb46c;
  FUN_00684c50();
  puStack_80 = local_38;
  puStack_84 = (undefined1 *)0x4;
  iStack_88 = 10;
  puStack_8c = local_48;
  uStack_90 = 0x4eb480;
  FUN_0040e510();
  puStack_84 = (undefined1 *)0x4eb487;
  FUN_0040e4d0();
  puStack_80 = local_58;
  puStack_84 = local_68;
  iStack_88 = 0x4eb496;
  FUN_006e6400();
  puStack_84 = (undefined1 *)0x4eb49d;
  uStack_90 = FUN_0040e4d0();
  puStack_94 = (undefined1 *)&puStack_8c;
  FUN_0040e430();
  uStack_90 = 0x4eb4bb;
  FUN_00684310();
  ExceptionList = local_10;
  return;
}

