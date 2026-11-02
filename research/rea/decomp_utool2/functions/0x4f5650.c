// rea decompile_all
// name: FUN_004f5650
// address: 0x4f5650
// body: available
// range: 0x4f5650-0x4f5a4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f5650(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int *_Memory;
  int iVar4;
  int iVar5;
  undefined4 *puStack_40;
  undefined **ppuStack_3c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007061d2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f6eb0();
  in_ECX[0x8b] = FileSelector::Listener::vftable;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  in_ECX[0x8c] = param_1;
  *in_ECX = AudioFileBrowser::vftable;
  in_ECX[0x1c] = AudioFileBrowser::vftable;
  in_ECX[0x1d] = AudioFileBrowser::vftable;
  in_ECX[0x8b] = AudioFileBrowser::vftable;
  FUN_0045c990();
  ppuStack_3c = &PTR_DAT_00c7ed68;
  puStack_40 = &param_1;
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_005073d0(&PTR_DAT_00c7ed68);
  piVar3 = (int *)((int)param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_006e8b40();
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_006e8b40();
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  in_ECX[0x21b] = 0;
  in_ECX[0x21c] = 0;
  in_ECX[0x21d] = 0;
  in_ECX[0x21e] = 0;
  in_ECX[0x21f] = 0;
  in_ECX[0x220] = 0;
  piVar3 = in_ECX + 0x221;
  *piVar3 = 0;
  in_ECX[0x222] = 0;
  in_ECX[0x223] = 0;
  local_8._0_1_ = 0x11;
  (**(code **)(in_ECX[0x8d] + 0x28))();
  FUN_006e5050();
  (**(code **)(in_ECX[0x1b3] + 0x28))();
  ppuStack_3c = (undefined **)0x4f5857;
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x12;
  ppuStack_3c = (undefined **)0x4f587c;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x11);
  _Memory = (int *)(param_1 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar4 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ppuStack_3c = (undefined **)0x4f58ba;
  FUN_006e6170();
  if (in_ECX[0x20e] != 0x22) {
    in_ECX[0x20e] = 0x22;
    FUN_006e6400(&puStack_40);
    FUN_006ce9f0(1);
  }
  (**(code **)(in_ECX[0x203] + 8))();
  puStack_40 = (undefined4 *)0x4f58ff;
  ppuStack_3c = (undefined **)(in_ECX + 0x1e7);
  FUN_006e5050();
  if (in_ECX[0x222] != 0) {
    ppuStack_3c = (undefined **)0x4f590c;
    FID_conflict__free((void *)*piVar3);
    *piVar3 = 0;
    in_ECX[0x222] = 0;
  }
  in_ECX[0x223] = 0;
  if ((int)in_ECX[0x222] < in_ECX[0x223] + 1) {
    ppuStack_3c = (undefined **)0x4f5943;
    FUN_00409cf0();
  }
  iVar4 = in_ECX[0x223];
  in_ECX[0x223] = iVar4 + 1;
  puVar1 = (undefined4 *)(*piVar3 + iVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x14;
  }
  if ((int)in_ECX[0x222] < in_ECX[0x223] + 1) {
    ppuStack_3c = (undefined **)0x4f597b;
    FUN_00409cf0();
  }
  iVar4 = in_ECX[0x223];
  in_ECX[0x223] = iVar4 + 1;
  puVar1 = (undefined4 *)(*piVar3 + iVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1e;
  }
  if ((int)in_ECX[0x222] < in_ECX[0x223] + 1) {
    ppuStack_3c = (undefined **)0x4f59b3;
    FUN_00409cf0();
  }
  iVar4 = in_ECX[0x223];
  in_ECX[0x223] = iVar4 + 1;
  puVar1 = (undefined4 *)(*piVar3 + iVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 100;
  }
  if ((int)in_ECX[0x222] < in_ECX[0x223] + 1) {
    ppuStack_3c = (undefined **)0x4f59eb;
    FUN_00409cf0();
  }
  iVar4 = in_ECX[0x223];
  in_ECX[0x223] = iVar4 + 1;
  puVar1 = (undefined4 *)(*piVar3 + iVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x55;
  }
  if (in_ECX[0x223] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)*piVar3;
  }
  if ((uint)in_ECX[0x223] < 2) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*piVar3 + 4);
  }
  if ((uint)in_ECX[0x223] < 4) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*piVar3 + 0xc);
  }
  in_ECX[0x224] = iVar2 + iVar5 + iVar4;
  ExceptionList = local_10;
  return;
}

