// rea decompile_all
// name: FUN_0051d170
// address: 0x51d170
// body: available
// range: 0x51d170-0x51d361 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051d170(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TypeDescriptor *pTStack_48;
  TypeDescriptor *pTStack_44;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070a046;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0057f440();
  local_8 = 0;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x68))();
  local_8 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_18 + 1;
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      pTStack_44 = (TypeDescriptor *)0x51d1ee;
      (**(code **)*local_18)();
    }
  }
  pTStack_44 = (TypeDescriptor *)0x51d20b;
  FUN_00684c50();
  pTStack_44 = (TypeDescriptor *)0x51d21d;
  uVar1 = FUN_0054aff0();
  local_8 = 1;
  pTStack_44 = (TypeDescriptor *)0x46;
  pTStack_48 = *(TypeDescriptor **)(in_ECX + 0x270);
  uStack_4c = 0x51d242;
  FUN_00472d90();
  pTStack_44 = (TypeDescriptor *)0x24;
  FUN_0040e4d0(&uStack_54);
  FUN_006830c0(uVar1);
  local_8 = 0xffffffff;
  piVar4 = param_1 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      pTStack_44 = (TypeDescriptor *)0x51d289;
      FID_conflict__free(piVar4);
    }
  }
  if (*(int *)(*(int *)(in_ECX + 0xa0) + 0x9c) == 0) {
    uStack_50 = 0;
  }
  else {
    pTStack_44 = (TypeDescriptor *)0x51d2af;
    uStack_50 = FUN_0068f6f0();
  }
  pTStack_44 = &ProjectExplorerBaseItem::RTTI_Type_Descriptor;
  pTStack_48 = &juce::TreeViewItem::RTTI_Type_Descriptor;
  uStack_4c = 0;
  uStack_54 = 0x51d2c3;
  iVar2 = FUN_006f6dd6();
  iVar3 = *(int *)(iVar2 + 8);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x14) < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + -4 + *(int *)(iVar3 + 0x14) * 4);
    }
    if (iVar3 != iVar2) {
      pTStack_44 = (TypeDescriptor *)&stack0xffffffc0;
      pTStack_48 = (TypeDescriptor *)0x51d2f9;
      FUN_006842b0();
      pTStack_44 = (TypeDescriptor *)0x51d300;
      FUN_00684c50();
      if ((float)*(int *)(in_ECX + 0x26c) < (float)*(int *)(in_ECX + 0x274)) {
        pTStack_44 = (TypeDescriptor *)0x51d34e;
        (**(code **)(*(int *)*param_1 + 0x50))();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

