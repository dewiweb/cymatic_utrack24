// rea decompile_all
// name: FUN_006a4de0
// address: 0x6a4de0
// body: available
// range: 0x6a4de0-0x6a5052 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a4de0(undefined4 *param_1,int param_2,undefined1 *param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int ***pppiVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int **ppiStack_74;
  undefined4 *puStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined1 *local_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  int **ppiStack_44;
  uint uStack_40;
  uint local_30;
  int *local_2c;
  int **local_28;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723048;
  local_10 = ExceptionList;
  uStack_40 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (iVar6 = DAT_00c8a678; local_14 = uStack_40, iVar6 != param_2; iVar6 = *(int *)(iVar6 + 0xc))
  {
    if (iVar6 == 0) goto LAB_006a4e6f;
  }
  puStack_50 = (undefined1 *)&ppiStack_44;
  puStack_48 = (undefined1 *)0x0;
  uStack_4c = 0x1000206;
  local_54 = (undefined1 *)0x6a4e40;
  FUN_006e8e70();
  puStack_48 = (undefined1 *)0x6a4e47;
  FUN_00684c50();
  ppiStack_44 = *(int ***)(param_2 + 0x1c);
  puStack_48 = *(undefined1 **)(param_2 + 0x18);
  uStack_4c = 0;
  puStack_50 = (undefined1 *)0x6a4e59;
  FUN_00472d90();
  local_54 = (undefined1 *)&puStack_50;
  uStack_58 = 0x6a4e60;
  FUN_0040e4d0();
  local_54 = (undefined1 *)0x6a4e6f;
  FUN_00677150();
LAB_006a4e6f:
  iVar4 = *(int *)(param_2 + 0x1c) + -4;
  iVar6 = 0x14;
  if (iVar4 < 0x14) {
    iVar6 = iVar4;
  }
  if ((*(byte *)(param_2 + 0x69) & 0x10) == 0) {
    if (*(int *)(param_2 + 0xc) != 0) {
      ppiStack_44 = (int **)0x6a4e91;
      cVar2 = FUN_006e6320();
      if (cVar2 == '\0') goto LAB_006a4e9b;
    }
    local_30 = CONCAT31(local_30._1_3_,1);
  }
  else {
LAB_006a4e9b:
    local_30 = local_30 & 0xffffff00;
  }
  ppiStack_44 = local_24;
  local_8 = 0;
  puStack_48 = (undefined1 *)0x6a4eb5;
  puVar5 = (undefined4 *)FUN_0063bf80();
  ppiStack_44 = (int **)(puVar5 + 2);
  puStack_48 = (undefined1 *)0x6a4ec2;
  uVar3 = (**(code **)(*(int *)*puVar5 + 0x14))();
  puStack_48 = local_1c;
  local_28 = (int **)CONCAT31(local_28._1_3_,uVar3);
  uStack_4c = 0x6a4ed1;
  (**(code **)(*local_24[0] + 0x54))();
  uStack_4c = param_4;
  local_8 = 0xffffffff;
  puStack_50 = param_3;
  local_54 = (undefined1 *)local_30;
  uStack_58 = local_28;
  fStack_60 = (float)iVar6;
  fStack_64 = (float)(*(int *)(param_2 + 0x1c) - iVar6) * 0.5;
  uStack_68 = 0x40800000;
  iStack_6c = param_2;
  puStack_70 = param_1;
  ppiStack_74 = (int **)0x6a4f25;
  fStack_5c = fStack_60;
  (**(code **)(*local_2c + 0x1c))();
  pppiVar8 = &ppiStack_74;
  uVar9 = 0x1006501;
  uVar7 = 0x6a4f37;
  FUN_006e8e70(&ppiStack_74,0x1006501,0);
  FUN_00684c50();
  ppiStack_74 = &local_2c;
  local_28 = (int **)((float)*(int *)(param_2 + 0x1c) * 0.6);
  if (15.0 <= (float)local_28) {
    local_28 = (int **)0x41700000;
  }
  (**(code **)(*(int *)*param_1 + 0x6c))();
  local_28 = (int **)FUN_00683640();
  local_8 = 1;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    ppiStack_74 = (int **)0x6a4f8d;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  ppiStack_74 = local_28;
  uVar10 = 0x6a4f97;
  (**(code **)(*(int *)*param_1 + 0x68))();
  local_8 = 0xffffffff;
  if (local_2c != (int *)0x0) {
    LOCK();
    piVar1 = local_2c + 1;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      uVar10 = 1;
      uVar9 = 0x6a4fbb;
      (**(code **)*local_2c)(1);
    }
  }
  if ((*(byte *)(param_2 + 0x69) & 0x10) == 0) {
    if (*(int *)(param_2 + 0xc) == 0) goto LAB_006a4ff1;
    uVar10 = 0x6a4fcd;
    cVar2 = FUN_006e6320();
    if (cVar2 != '\0') goto LAB_006a4ff1;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  uVar10 = 0x3f000000;
  uVar9 = 0x6a4ff1;
  (**(code **)(*(int *)*param_1 + 0x48))(0x3f000000);
LAB_006a4ff1:
  FUN_00472d90(4,(*(int *)(param_2 + 0x18) - (iVar6 + 5)) + -2,*(int *)(param_2 + 0x1c) + -8);
  FUN_00682290(param_2 + 0x88,0x21,10,0,uVar7,pppiVar8,uVar9,uVar10);
  ExceptionList = local_10;
  uStack_68 = 0x6a504d;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

