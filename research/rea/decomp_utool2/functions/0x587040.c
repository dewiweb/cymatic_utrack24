// rea decompile_all
// name: FUN_00587040
// address: 0x587040
// body: available
// range: 0x587040-0x5872eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00587040(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int in_ECX;
  int *piVar7;
  void *local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *pvStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  void *local_28;
  undefined4 local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071343f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar7 = (int *)(in_ECX + 0x48);
  local_1c = in_ECX;
  if (((undefined *)*piVar7 == PTR_DAT_00c7ed54) || (iVar4 = FUN_0045c1e0(*piVar7), iVar4 == 0)) {
    FUN_006365e0();
    local_44 = (void *)0x0;
    uStack_40 = 0;
    uStack_3c = 0;
    pvStack_38 = (void *)0x0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 1;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    piVar5 = (int *)FUN_00631af0(0,0,0,&DAT_00bfe12c,0,&local_44,&local_18,10);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_20 = piVar5;
    if (piVar5 != (int *)0x0) {
      piVar6 = (int *)FUN_00634260();
      iVar4 = *piVar7;
      *piVar7 = *piVar6;
      *piVar6 = iVar4;
      piVar6 = (int *)(local_14 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      FUN_00636040();
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_00634890();
      piVar6 = (int *)(local_14 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_8._0_1_ = 2;
      local_18 = local_18 + -2;
      if (local_18 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *local_18;
        *local_18 = *local_18 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(local_18);
        }
      }
      local_18 = operator_new(0x30);
      local_8 = CONCAT31(local_8._1_3_,4);
      piVar7 = (int *)FUN_0062aec0(piVar7);
      if (*(char *)piVar7[4] != '\0') {
        puVar2 = (undefined4 *)*piVar7;
        piVar7 = (int *)0x0;
        (*(code *)*puVar2)();
      }
      local_28 = (void *)0x0;
      local_24 = 0;
      local_8 = CONCAT31(local_8._1_3_,6);
      local_18 = piVar7;
      if ((piVar7 == (int *)0x0) || (iVar4 = (**(code **)(*piVar5 + 0x50))(&local_28), iVar4 == 0))
      {
        FUN_00635980();
      }
      else {
        (**(code **)(*piVar7 + 0x10))(local_28);
      }
      iVar1 = *(int *)(local_1c + 0x40);
      piVar6 = (int *)(*(int *)(iVar1 + 0x74) + 0xc);
      LOCK();
      iVar4 = *piVar6;
      if (iVar4 == 0) {
        *piVar6 = 1;
        iVar4 = 0;
      }
      UNLOCK();
      if ((iVar4 == 0) && (cVar3 = FUN_0063e270(), cVar3 == '\0')) {
        LOCK();
        *(undefined4 *)(*(int *)(iVar1 + 0x74) + 0xc) = 0;
        UNLOCK();
      }
      FID_conflict__free(local_28);
      if (piVar7 != (int *)0x0) {
        (**(code **)*piVar7)();
      }
      (**(code **)*piVar5)();
    }
    FUN_0040f7f0();
    FID_conflict__free(pvStack_38);
    FUN_0040f7f0();
    FID_conflict__free(local_44);
    FUN_00636570();
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x40);
    piVar7 = (int *)(*(int *)(iVar1 + 0x74) + 0xc);
    LOCK();
    iVar4 = *piVar7;
    if (iVar4 == 0) {
      *piVar7 = 1;
      iVar4 = 0;
    }
    UNLOCK();
    if ((iVar4 == 0) && (cVar3 = FUN_0063e270(), cVar3 == '\0')) {
      LOCK();
      *(undefined4 *)(*(int *)(iVar1 + 0x74) + 0xc) = 0;
      UNLOCK();
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}

