// rea decompile_all
// name: FUN_006e1530
// address: 0x6e1530
// body: available
// range: 0x6e1530-0x6e1753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_006e1530(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  double in_XMM0_Qa;
  int local_1c;
  undefined8 local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728224;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00620cf0((int)&local_18 + 4);
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_00699420(&local_1c);
  cVar2 = FUN_006326f0(*puVar3);
  piVar6 = (int *)(local_1c + -8);
  param_1 = CONCAT13(cVar2,(undefined3)param_1);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
      cVar2 = param_1._3_1_;
    }
  }
  if (cVar2 == '\0') {
    iVar4 = local_18._4_4_;
  }
  else {
    FUN_00699420(&local_1c);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar4 = FUN_0044ec90();
    iVar5 = FUN_0044ec90();
    piVar6 = (int *)FUN_006379a0(&param_1,0,iVar4 - iVar5);
    iVar4 = *piVar6;
    *piVar6 = local_18._4_4_;
    piVar6 = (int *)(param_1 + -8);
    local_18 = (double)CONCAT44(iVar4,(undefined4)local_18);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar6 = (int *)(local_1c + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  iVar5 = FUN_00426f70();
  while (iVar5 == 0x2b) {
    FUN_00637a90(&local_1c,1);
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar6 = (int *)FUN_00620cf0(&param_1);
    iVar1 = *piVar6;
    *piVar6 = iVar4;
    piVar6 = (int *)(param_1 + -8);
    local_18 = (double)CONCAT44(iVar1,(undefined4)local_18);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar6 = (int *)(local_1c + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    iVar5 = FUN_00426f70();
    iVar4 = iVar1;
  }
  puVar3 = (undefined4 *)FUN_006209d0(&local_1c,"0123456789.,-");
  param_1 = *puVar3;
  FUN_0045c380();
  piVar6 = (int *)(local_1c + -8);
  local_18 = in_XMM0_Qa;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)(iVar4 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return (float10)local_18;
}

