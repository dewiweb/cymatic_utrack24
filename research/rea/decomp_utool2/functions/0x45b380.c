// rea decompile_all
// name: FUN_0045b380
// address: 0x45b380
// body: available
// range: 0x45b380-0x45b768 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045b380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,char *param_7,uint param_8)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  lconv *plVar6;
  size_t sVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  char *****pppppcVar11;
  undefined4 *****pppppuVar12;
  char *_Control;
  uint uVar13;
  char *****pppppcVar14;
  int iVar15;
  bool bVar16;
  undefined1 local_6c [4];
  size_t local_68;
  undefined1 local_64 [4];
  int *local_60;
  size_t local_5c;
  char *local_58;
  undefined1 local_54 [4];
  code *local_50;
  undefined2 local_4c [2];
  int local_48;
  char ****local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070085c;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = param_5;
  local_58 = param_7;
  local_5c = param_8;
  if ((param_8 == 0) || ((*param_7 != '+' && (*param_7 != '-')))) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  if ((*(uint *)(param_5 + 0x14) & 0x3000) == 0x3000) {
    _Control = "pP";
    if (((uVar13 + 2 <= param_8) && (param_7[uVar13] == '0')) &&
       ((param_7[uVar13 + 1] == 'x' || (param_7[uVar13 + 1] == 'X')))) {
      uVar13 = uVar13 + 2;
    }
  }
  else {
    _Control = "eE";
  }
  local_14 = uVar5;
  local_68 = _strcspn(param_7,_Control);
  local_4c[0] = 0x2e;
  plVar6 = _localeconv();
  local_4c[0] = CONCAT11(local_4c[0]._1_1_,*plVar6->decimal_point);
  sVar7 = _strcspn(param_7,(char *)local_4c);
  uVar8 = FUN_0044e940(local_54);
  local_8 = 0;
  local_60 = (int *)FUN_0045c040(uVar8,uVar5);
  local_8 = 1;
  if ((local_50 != (code *)0x0) &&
     (puVar9 = (undefined4 *)(**(code **)(*(int *)local_50 + 8))(), puVar9 != (undefined4 *)0x0)) {
    (**(code **)*puVar9)(1);
  }
  local_8 = 0xffffffff;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (undefined4 ****)((uint)local_2c[0] & 0xffffff00);
  FUN_0045a610(param_8,0);
  local_8 = 2;
  pppppuVar12 = local_2c;
  if (0xf < local_18) {
    pppppuVar12 = (undefined4 *****)local_2c[0];
  }
  local_50 = (code *)((undefined **)*local_60)[7];
  if ((undefined **)*local_60 == std::ctype<char>::vftable) {
    FUN_004c2c30(pppppuVar12,local_58,param_8);
  }
  else {
    (*local_50)(local_58,local_58 + param_8,pppppuVar12);
  }
  uVar8 = FUN_0044e940(local_64);
  local_8._0_1_ = 3;
  piVar10 = (int *)FUN_0045d8f0(uVar8);
  local_8._0_1_ = 4;
  if ((local_60 != (int *)0x0) &&
     (puVar9 = (undefined4 *)(**(code **)(*local_60 + 8))(), puVar9 != (undefined4 *)0x0)) {
    (**(code **)*puVar9)(1);
  }
  local_8._0_1_ = 2;
  FUN_0045bd30(local_44);
  local_8 = CONCAT31(local_8._1_3_,5);
  if ((undefined **)*piVar10 == std::numpunct<char>::vftable) {
    uVar4 = *(undefined1 *)((int)piVar10 + 0xd);
  }
  else {
    uVar4 = (*(code *)((undefined **)*piVar10)[4])();
  }
  local_50 = (code *)CONCAT31(local_50._1_3_,uVar4);
  bVar16 = sVar7 == local_5c;
  if (!bVar16) {
    if ((undefined **)*piVar10 == std::numpunct<char>::vftable) {
      uVar4 = (undefined1)piVar10[3];
    }
    else {
      uVar4 = (*(code *)((undefined **)*piVar10)[3])();
    }
    pppppuVar12 = local_2c;
    if (0xf < local_18) {
      pppppuVar12 = (undefined4 *****)local_2c[0];
    }
    bVar16 = sVar7 == local_5c;
    *(undefined1 *)((int)pppppuVar12 + sVar7) = uVar4;
  }
  if (bVar16) {
    sVar7 = local_68;
  }
  pppppcVar14 = local_44;
  if (0xf < local_30) {
    pppppcVar14 = (char *****)local_44[0];
  }
  cVar1 = *(char *)pppppcVar14;
  iVar3 = local_48;
  while (((local_48 = iVar3, cVar1 != '\x7f' && (cVar1 = *(char *)pppppcVar14, '\0' < cVar1)) &&
         ((uint)(int)cVar1 < sVar7 - uVar13))) {
    sVar7 = sVar7 - (int)cVar1;
    FUN_0045bee0(sVar7,1,local_50);
    pppppcVar11 = (char *****)((int)pppppcVar14 + 1);
    if (*(char *)((int)pppppcVar14 + 1) < '\x01') {
      pppppcVar11 = pppppcVar14;
    }
    cVar1 = *(char *)pppppcVar11;
    pppppcVar14 = pppppcVar11;
    iVar3 = local_48;
  }
  if (((*(int *)(iVar3 + 0x24) < 0) ||
      ((*(int *)(iVar3 + 0x24) < 1 && (*(int *)(iVar3 + 0x20) == 0)))) ||
     (*(uint *)(iVar3 + 0x20) <= local_1c)) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(uint *)(iVar3 + 0x20) - local_1c;
  }
  uVar5 = *(uint *)(iVar3 + 0x14) & 0x1c0;
  local_68 = local_1c;
  if (uVar5 == 0x40) {
    pppppuVar12 = local_2c;
    if (0xf < local_18) {
      pppppuVar12 = (undefined4 *****)local_2c[0];
    }
    puVar9 = (undefined4 *)FUN_0045aef0(param_1,local_54,param_3,param_4,pppppuVar12,uVar13);
  }
  else if (uVar5 == 0x100) {
    pppppuVar12 = local_2c;
    if (0xf < local_18) {
      pppppuVar12 = (undefined4 *****)local_2c[0];
    }
    puVar9 = (undefined4 *)FUN_0045aef0(param_1,local_54,param_3,param_4,pppppuVar12,uVar13);
    puVar9 = (undefined4 *)FUN_0045ae70(param_1,local_54,*puVar9,puVar9[1],param_6,iVar15);
    iVar15 = 0;
  }
  else {
    puVar9 = (undefined4 *)FUN_0045ae70(param_1,local_54,param_3,param_4,param_6,iVar15);
    iVar15 = 0;
    pppppuVar12 = local_2c;
    if (0xf < local_18) {
      pppppuVar12 = (undefined4 *****)local_2c[0];
    }
    puVar9 = (undefined4 *)FUN_0045aef0(param_1,local_54,*puVar9,puVar9[1],pppppuVar12,uVar13);
  }
  local_48 = puVar9[1];
  pppppuVar12 = local_2c;
  if (0xf < local_18) {
    pppppuVar12 = (undefined4 *****)local_2c[0];
  }
  puVar9 = (undefined4 *)
           FUN_0045aef0(param_1,local_6c,*puVar9,local_48,(int)pppppuVar12 + uVar13,
                        local_68 - uVar13);
  uVar8 = *puVar9;
  uVar2 = puVar9[1];
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  FUN_0045ae70(param_1,param_2,uVar8,uVar2,param_6,iVar15);
  if (0xf < local_30) {
    FUN_0045b830(local_44[0],local_30 + 1);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (char ****)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_18) {
    FUN_0045b830(local_2c[0],local_18 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

