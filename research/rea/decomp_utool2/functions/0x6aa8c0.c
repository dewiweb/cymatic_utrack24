// rea decompile_all
// name: FUN_006aa8c0
// address: 0x6aa8c0
// body: available
// range: 0x6aa8c0-0x6aab27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006aa8c0(undefined4 *param_1,int param_2,undefined1 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  int *in_ECX;
  float fVar7;
  undefined4 uVar8;
  undefined4 ***pppuVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 **ppuStack_78;
  undefined4 *puStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 *puStack_5c;
  undefined1 *local_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  int **ppiStack_48;
  uint uStack_44;
  uint local_30;
  undefined4 *local_2c;
  float local_28;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723493;
  local_10 = ExceptionList;
  uStack_44 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (iVar2 = DAT_00c8a678; local_14 = uStack_44, iVar2 != param_2; iVar2 = *(int *)(iVar2 + 0xc))
  {
    if (iVar2 == 0) goto LAB_006aa94e;
  }
  puStack_54 = (undefined1 *)&ppiStack_48;
  puStack_4c = (undefined1 *)0x0;
  uStack_50 = 0x1000206;
  local_58 = (undefined1 *)0x6aa91f;
  FUN_006e8e70();
  puStack_4c = (undefined1 *)0x6aa926;
  FUN_00684c50();
  ppiStack_48 = *(int ***)(param_2 + 0x1c);
  puStack_4c = *(undefined1 **)(param_2 + 0x18);
  uStack_50 = 0;
  puStack_54 = (undefined1 *)0x6aa938;
  FUN_00472d90();
  local_58 = (undefined1 *)&puStack_54;
  puStack_5c = (undefined4 *)0x6aa93f;
  FUN_0040e4d0();
  local_58 = (undefined1 *)0x6aa94e;
  FUN_00677150();
LAB_006aa94e:
  local_28 = (float)*(int *)(param_2 + 0x1c) * 0.75;
  if (15.0 <= local_28) {
    local_28 = 15.0;
  }
  fVar7 = local_28 * 1.1;
  if ((*(byte *)(param_2 + 0x69) & 0x10) == 0) {
    if (*(int *)(param_2 + 0xc) != 0) {
      ppiStack_48 = (int **)0x6aa98a;
      cVar3 = FUN_006e6320();
      if (cVar3 == '\0') goto LAB_006aa994;
    }
    local_30 = CONCAT31(local_30._1_3_,1);
  }
  else {
LAB_006aa994:
    local_30 = local_30 & 0xffffff00;
  }
  ppiStack_48 = local_24;
  local_8 = 0;
  puStack_4c = (undefined1 *)0x6aa9ae;
  puVar5 = (undefined4 *)FUN_0063bf80();
  ppiStack_48 = (int **)(puVar5 + 2);
  puStack_4c = (undefined1 *)0x6aa9bb;
  uVar4 = (**(code **)(*(int *)*puVar5 + 0x14))();
  puStack_4c = local_1c;
  local_2c = (undefined4 *)CONCAT31(local_2c._1_3_,uVar4);
  uStack_50 = 0x6aa9ca;
  (**(code **)(*local_24[0] + 0x54))();
  uStack_50 = param_4;
  puStack_54 = param_3;
  local_8 = 0xffffffff;
  local_58 = (undefined1 *)local_30;
  puStack_5c = local_2c;
  fStack_68 = ((float)*(int *)(param_2 + 0x1c) - fVar7) * 0.5;
  uStack_6c = 0x40800000;
  iStack_70 = param_2;
  puStack_74 = param_1;
  ppuStack_78 = (undefined4 **)0x6aaa1b;
  fStack_64 = fVar7;
  fStack_60 = fVar7;
  (**(code **)(*in_ECX + 0x1c))();
  pppuVar9 = &ppuStack_78;
  uVar10 = 0x1006501;
  uVar8 = 0x6aaa2d;
  FUN_006e8e70(&ppuStack_78,0x1006501,0);
  FUN_00684c50();
  ppuStack_78 = &local_2c;
  (**(code **)(*(int *)*param_1 + 0x6c))();
  ppuVar6 = (undefined4 **)FUN_00683640();
  local_8 = 1;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    ppuStack_78 = (undefined4 **)0x6aaa65;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  uVar11 = 0x6aaa6d;
  ppuStack_78 = ppuVar6;
  (**(code **)(*(int *)*param_1 + 0x68))();
  local_8 = 0xffffffff;
  if (local_2c != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_2c + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      uVar11 = 1;
      uVar10 = 0x6aaa91;
      (**(code **)*local_2c)(1);
    }
  }
  if ((*(byte *)(param_2 + 0x69) & 0x10) == 0) {
    if (*(int *)(param_2 + 0xc) == 0) goto LAB_006aaac7;
    uVar11 = 0x6aaaa3;
    cVar3 = FUN_006e6320();
    if (cVar3 != '\0') goto LAB_006aaac7;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  uVar11 = 0x3f000000;
  uVar10 = 0x6aaac7;
  (**(code **)(*(int *)*param_1 + 0x48))(0x3f000000);
LAB_006aaac7:
  FUN_00472d90(0,(*(int *)(param_2 + 0x18) - ((int)fVar7 + 5)) + -2,*(undefined4 *)(param_2 + 0x1c))
  ;
  FUN_00682290(param_2 + 0x88,0x21,10,0,uVar8,pppuVar9,uVar10,uVar11);
  ExceptionList = local_10;
  uStack_6c = 0x6aab22;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

