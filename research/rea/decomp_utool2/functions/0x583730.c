// rea decompile_all
// name: FUN_00583730
// address: 0x583730
// body: available
// range: 0x583730-0x583948 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00583730(undefined4 *param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  int **ppiStack_54;
  undefined4 *puStack_50;
  int **ppiStack_4c;
  uint uStack_48;
  undefined4 *local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00712e29;
  local_10 = ExceptionList;
  uStack_48 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = in_ECX + 200;
  local_8 = 0;
  ppiStack_4c = &piStack_24;
  puStack_50 = (undefined4 *)0x58377e;
  local_34 = in_ECX;
  local_14 = uStack_48;
  puVar3 = (undefined4 *)FUN_0063bf80();
  ppiStack_4c = (int **)(puVar3 + 2);
  puStack_50 = (undefined4 *)0x58378b;
  cVar2 = (**(code **)(*(int *)*puVar3 + 0x14))();
  puStack_50 = &local_1c;
  ppiStack_54 = (int **)0x583799;
  (**(code **)(*piStack_24 + 0x54))();
  puVar3 = *(undefined4 **)(in_ECX + 0xe0 + (uint)(cVar2 != param_3) * 4);
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    puVar3[1] = puVar3[1] + 1;
    UNLOCK();
  }
  local_8 = 1;
  if (param_3 == '\0') {
    iStack_64 = 0;
  }
  else if (puVar3 == (undefined4 *)0x0) {
    iStack_64 = 0;
  }
  else {
    iStack_64 = (int)puVar3[4] / 2;
  }
  if (puVar3 == (undefined4 *)0x0) {
    iVar4 = 0;
    puStack_5c = (undefined4 *)0x0;
  }
  else {
    iVar4 = puVar3[4];
    puStack_5c = (undefined4 *)puVar3[3];
  }
  puStack_58 = (undefined4 *)(iVar4 / 2);
  uStack_68 = *(undefined4 *)(local_34 + 0x1c);
  uStack_6c = *(undefined4 *)(local_34 + 0x18);
  uStack_70 = 0;
  iStack_60 = iStack_64;
  ppiStack_54 = (int **)iStack_64;
  local_38 = puVar3;
  FUN_00682f90(&local_38,0);
  ppiStack_54 = &piStack_24;
  local_8._0_1_ = 2;
  puStack_58 = (undefined4 *)0x583826;
  puVar5 = (undefined4 *)FUN_0063bf80();
  ppiStack_54 = (int **)(puVar5 + 2);
  puStack_58 = (undefined4 *)0x583833;
  cVar2 = (**(code **)(*(int *)*puVar5 + 0x14))();
  puStack_58 = &local_1c;
  puStack_5c = (undefined4 *)0x583841;
  (**(code **)(*piStack_24 + 0x54))();
  local_8 = CONCAT31(local_8._1_3_,1);
  puStack_5c = *(undefined4 **)(local_34 + (uint)(cVar2 != '\0') * 4 + 0xe8);
  iStack_60 = 0x583865;
  FUN_00684c50();
  if (**(char **)(local_34 + 0x88) != '\0') {
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      puStack_5c = (undefined4 *)0x583881;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    puStack_5c = (undefined4 *)(local_34 + 0x114);
    iStack_60 = 0x58388f;
    (**(code **)(*(int *)*param_1 + 0x68))();
    puStack_5c = *(undefined4 **)(local_34 + 0x1c);
    iStack_60 = *(undefined4 *)(local_34 + 0x18);
    iStack_64 = 0;
    uStack_68 = 0x5838a1;
    FUN_00472d90();
    puStack_5c = (undefined4 *)0x1;
    iStack_60 = 0x24;
    FUN_0040e4d0(&uStack_70);
    FUN_006830c0(local_34 + 0x88);
  }
  puStack_5c = (undefined4 *)0x5838d3;
  cVar2 = FUN_00682580();
  if (cVar2 == '\0') {
    puStack_5c = (undefined4 *)0x5838e0;
    cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
    if (cVar2 == '\0') {
      puStack_5c = (undefined4 *)0x5838eb;
      cVar2 = FUN_00682580();
      if (cVar2 == '\0') {
        puStack_5c = &local_2c;
        local_2c = 0x3f800000;
        uStack_28 = 0;
        piStack_24 = (int *)0x0;
        uStack_20 = 0;
        local_1c = 0x3f800000;
        local_18 = 0;
        iStack_64 = 0x583914;
        iStack_60 = local_34 + 0xf4;
        (**(code **)(*(int *)*param_1 + 0x5c))();
      }
    }
  }
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      puStack_5c = (undefined4 *)0x1;
      iStack_60 = 0x58392b;
      (**(code **)*puVar3)();
    }
  }
  ExceptionList = local_10;
  ppiStack_4c = (int **)0x583943;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

