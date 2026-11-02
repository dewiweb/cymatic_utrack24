// rea decompile_all
// name: FUN_004b45d0
// address: 0x4b45d0
// body: available
// range: 0x4b45d0-0x4b48b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_004b45d0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  void *pvVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_ECX;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  char local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  char local_20;
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00703e50;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = (void *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_8 = 0;
  FUN_0041c930(0x10);
  iVar9 = param_2;
  if (param_4 == 0) {
    FUN_006f2820(&param_2,param_2);
    local_8._0_1_ = 1;
    uVar5 = FUN_0044ec90();
    FUN_004b4ec0(uVar5,0xffffffff);
    local_8 = (uint)local_8._1_3_ << 8;
    piVar7 = (int *)(param_2 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  else if (param_2 < *(int *)(param_1 + 8)) {
    local_30 = param_1;
    local_2c = 0;
    local_28 = param_2;
    local_24 = 0;
    local_20 = '\0';
    FUN_006f2d00(param_2,0);
    FUN_006f2b00(&param_2);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_004b4b80(param_3,param_4,&local_1c,uVar4);
    piVar7 = (int *)(param_2 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    local_8 = local_8 & 0xffffff00;
    if ((local_20 != '\0') && (local_20 = '\0', local_30 != 0)) {
      FUN_00415ff0(&local_30);
    }
  }
  FUN_004b4cc0();
  iVar6 = 0;
  iVar8 = 0;
  if ((*(int *)(param_6 + 8) <= iVar9) && (iVar9 <= *(int *)(param_7 + 8))) {
    FUN_006f2820(&param_2,iVar9);
    local_44 = param_1;
    local_40 = 0;
    local_3c = iVar9;
    local_38 = 0;
    local_34 = '\0';
    FUN_006f2d00(iVar9,0);
    local_28 = iVar9 + 1;
    local_30 = param_1;
    local_2c = 0;
    local_24 = 0;
    local_20 = '\0';
    FUN_006f2d00(local_28,0);
    iVar9 = local_40;
    iVar6 = *(int *)(param_6 + 4) - local_40;
    iVar8 = 0;
    if (0 < iVar6) {
      iVar8 = iVar6;
    }
    iVar6 = FUN_004b4e30(iVar8,&param_2,param_5);
    iVar8 = local_2c - iVar9;
    iVar9 = *(int *)(param_7 + 4) - iVar9;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
    param_5 = FUN_004b4e30(iVar8,&param_2,param_5);
    if ((local_20 != '\0') && (local_20 = '\0', local_30 != 0)) {
      FUN_00415ff0(&local_30);
    }
    if ((local_34 != '\0') && (local_34 = '\0', local_44 != 0)) {
      FUN_00415ff0(&local_44);
    }
    piVar7 = (int *)(param_2 + -8);
    iVar8 = param_5;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        FID_conflict__free(piVar7);
        iVar8 = param_5;
      }
    }
  }
  if ((iVar6 == in_ECX[3]) && (iVar8 == in_ECX[4])) {
    cVar3 = FUN_004b6f90(&local_1c);
    if (cVar3 != '\0') {
      uVar10 = 0;
      goto LAB_004b4890;
    }
  }
  else {
    in_ECX[3] = iVar6;
    in_ECX[4] = iVar8;
  }
  pvVar1 = (void *)*in_ECX;
  uVar10 = 1;
  *in_ECX = local_1c;
  uVar5 = in_ECX[1];
  in_ECX[1] = local_18;
  uVar2 = in_ECX[2];
  in_ECX[2] = local_14;
  local_1c = pvVar1;
  local_18 = uVar5;
  local_14 = uVar2;
LAB_004b4890:
  FUN_004b6dd0();
  FID_conflict__free(local_1c);
  ExceptionList = local_10;
  return uVar10;
}

