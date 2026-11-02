// rea decompile_all
// name: FUN_0052f2b0
// address: 0x52f2b0
// body: available
// range: 0x52f2b0-0x52f55d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052f2b0(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *in_ECX;
  int *piVar3;
  byte bVar4;
  int *piStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070cb20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_006ea2c0();
  in_ECX[0x1c] = juce::Button::Listener::vftable;
  in_ECX[0x1d] = DragDropHelper_Source::vftable;
  in_ECX[0x1e] = in_ECX;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  *in_ECX = TVITargetBase::vftable;
  in_ECX[0x1c] = TVITargetBase::vftable;
  in_ECX[0x1d] = TVITargetBase::vftable;
  in_ECX[0x24] = param_2;
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    param_2[1] = param_2[1] + 1;
    UNLOCK();
  }
  local_8._0_1_ = 4;
  in_ECX[0x25] = param_3;
  in_ECX[0x26] = param_1[1];
  piStack_30 = (int *)0x52f375;
  FUN_006df860();
  param_3 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,7);
  piStack_30 = (int *)&param_3;
  uStack_34 = 0x52f39a;
  FUN_006e8b40();
  piVar3 = (int *)(param_3 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      piStack_30 = (undefined4 *)0x52f3bb;
      FID_conflict__free(piVar3);
    }
  }
  in_ECX[0x5c] = &DAT_00bfe12c;
  in_ECX[0x5d] = &DAT_00bfe12c;
  local_8._0_1_ = 0xc;
  FUN_004f7780();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  in_ECX[0x9b] = 0;
  in_ECX[0x9c] = 0;
  in_ECX[0x9d] = 0;
  in_ECX[0x9e] = 0;
  if (in_ECX != (undefined4 *)0xffffff90) {
    piStack_30 = (int *)0x52f422;
    FUN_004097d0();
  }
  uStack_34 = 0x52f42c;
  piStack_30 = in_ECX + 0x5e;
  FUN_006e5050();
  if ((param_1[0x17] == 0) && ((param_1[0xf] == 0 || (*(int *)(param_1[0xf] + 0x44) == 0)))) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  in_ECX[0x99] = param_1[0x16];
  FUN_006e6400(&piStack_38);
  FUN_006ce9f0(1);
  if ((*(byte *)((int)in_ECX + 0x1e1) >> 4 & 1) == bVar4) {
    iVar1 = in_ECX[0x61];
    *(byte *)((int)in_ECX + 0x1e1) = (bVar4 ^ 1) << 4 | *(byte *)((int)in_ECX + 0x1e1) & 0xef;
    if (iVar1 != 0) {
      if ((*(byte *)(iVar1 + 0x69) & 0x10) != 0) goto LAB_0052f4aa;
      if (*(int *)(iVar1 + 0xc) != 0) {
        cVar2 = FUN_006e6320();
        if (cVar2 == '\0') goto LAB_0052f4aa;
      }
    }
    FUN_006cc240();
  }
LAB_0052f4aa:
  iVar1 = in_ECX[0x5e];
  FUN_0052ff90();
  piStack_30 = (int *)0x52f4c1;
  (**(code **)(iVar1 + 0x28))();
  piStack_30 = (int *)0x52f4c9;
  piStack_30 = (int *)FUN_0057f460();
  local_8._0_1_ = 0xe;
  uStack_34 = 0x52f4db;
  FUN_006e4890();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = param_1 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      piStack_30 = (int *)0x1;
      uStack_34 = 0x52f4f9;
      (**(code **)*param_1)();
    }
  }
  uStack_34 = 0x1000281;
  piStack_30 = (int *)DAT_00c7ebac;
  piStack_38 = (int *)0x52f50f;
  FUN_006e6170();
  piStack_30 = (int *)0x1;
  uStack_34 = 0x52f518;
  (**(code **)(in_ECX[0x28] + 0x28))();
  uStack_34 = 0xffffffff;
  piStack_38 = in_ECX + 0x28;
  FUN_006e5050();
  uStack_34 = 1;
  FUN_006dfe90();
  uStack_34 = 0x52f533;
  FUN_0052e970();
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = param_2 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      uStack_34 = 1;
      piStack_38 = (int *)0x52f548;
      (**(code **)*param_2)();
    }
  }
  ExceptionList = local_10;
  return;
}

