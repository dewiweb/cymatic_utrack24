// rea decompile_all
// name: FUN_0053da90
// address: 0x53da90
// body: available
// range: 0x53da90-0x53dd7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0053da90(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  double in_XMM0_Qa;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070e24c;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  iVar8 = 0;
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  FUN_00548e50(param_1,uVar2);
  local_8 = CONCAT31(local_8._1_3_,2);
  cVar1 = FUN_00548d30();
  if (cVar1 == '\0') goto LAB_0053dd12;
  pvVar4 = operator_new(0x80);
  iVar8 = local_14[8];
  if (iVar8 == 0x10) {
    cVar1 = '\x01';
  }
  else if (iVar8 == 0x18) {
    cVar1 = '\x02';
  }
  else {
    cVar1 = (iVar8 != 0x20) + '\x03';
  }
  iVar8 = local_14[6];
  if (iVar8 < 0x15889) {
    if (iVar8 == 0x15888) {
      uVar5 = 3;
    }
    else if (iVar8 == 0xac44) {
      uVar5 = 1;
    }
    else {
      if (iVar8 != 48000) goto LAB_0053db6c;
      uVar5 = 2;
    }
  }
  else if (iVar8 == 96000) {
    uVar5 = 4;
  }
  else {
LAB_0053db6c:
    uVar5 = 6;
  }
  iVar8 = FUN_0053e340(cVar1,uVar5,cVar1,1,5);
  puVar6 = (undefined4 *)FUN_0040eb00(&local_18);
  uVar5 = *(undefined4 *)(iVar8 + 0x20);
  *(undefined4 *)(iVar8 + 0x20) = *puVar6;
  *puVar6 = uVar5;
  piVar3 = (int *)(local_18 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990(".songprj");
  local_8._0_1_ = 3;
  iVar7 = *(int *)(iVar8 + 0x20);
  piVar3 = (int *)(iVar7 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  puVar6 = (undefined4 *)FUN_00637730(iVar7);
  local_8 = CONCAT31(local_8._1_3_,4);
  puVar6 = (undefined4 *)FUN_00635a10(&local_1c,*puVar6);
  uVar5 = *(undefined4 *)(iVar8 + 0x70);
  *(undefined4 *)(iVar8 + 0x70) = *puVar6;
  *puVar6 = uVar5;
  piVar3 = (int *)(local_1c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)((int)pvVar4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar3 = (int *)(local_18 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  iVar7 = local_14[6];
  if (iVar7 == 0) {
    in_XMM0_Qa = 0.0;
  }
  else {
    FUN_006f56f0();
    in_XMM0_Qa = in_XMM0_Qa / (double)iVar7;
  }
  iVar7 = *(int *)(iVar8 + 0x20);
  *(double *)(iVar8 + 0x38) = in_XMM0_Qa;
  piVar3 = (int *)(iVar7 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  uVar5 = FUN_0053b480(iVar7,0,0);
  iVar7 = *(int *)(iVar8 + 0x5c) + 1;
  if (*(int *)(iVar8 + 0x58) < iVar7) {
    FUN_00409cf0(iVar7 / 2 + *(int *)(iVar8 + 0x5c) + 9 & 0xfffffff8);
  }
  iVar7 = *(int *)(iVar8 + 0x5c);
  *(int *)(iVar8 + 0x5c) = iVar7 + 1;
  *(undefined4 *)(*(int *)(iVar8 + 0x54) + iVar7 * 4) = uVar5;
LAB_0053dd12:
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_14 + 1;
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(param_2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return iVar8;
}

