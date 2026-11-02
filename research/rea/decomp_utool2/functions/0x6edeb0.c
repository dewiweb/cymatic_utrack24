// rea decompile_all
// name: FUN_006edeb0
// address: 0x6edeb0
// body: available
// range: 0x6edeb0-0x6ee2fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006edeb0(undefined4 param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  bool bVar9;
  char *pcVar10;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007292f0;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((((*(int *)(in_ECX + 0x58) == *(int *)(in_ECX + 0x6c)) &&
       (*(int *)(in_ECX + 0x5c) == *(int *)(in_ECX + 0x70))) &&
      (*(int *)(in_ECX + 0x60) == *(int *)(in_ECX + 0x74))) &&
     (*(int *)(in_ECX + 0x54) == *(int *)(in_ECX + 0x68))) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  bVar9 = (bool)(bVar3 ^ 1);
  switch(param_1) {
  case 0x1002:
    pcVar10 = "Editing";
    FUN_0045c990("Editing",uVar5);
    local_8 = 6;
    uVar6 = FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,7);
    uVar7 = FUN_00637250();
    iVar8 = param_2;
    FUN_0068a030(uVar7,uVar6,&param_1,pcVar10);
    FUN_00637c10();
    FUN_00637c10();
    FUN_00637c10();
    bVar9 = !bVar9;
    goto LAB_006ee2c7;
  case 0x1003:
    pcVar10 = "Editing";
    FUN_0045c990("Editing",uVar5);
    local_8 = 0;
    uVar6 = FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar7 = FUN_00637250();
    iVar2 = param_2;
    FUN_0068a030(uVar7,uVar6,&param_1,pcVar10);
    FUN_00637c10();
    FUN_00637c10();
    FUN_00637c10();
    if ((bVar9) && (*(char *)(in_ECX + 0x34) == '\0')) {
      puVar1 = (uint *)(iVar2 + 0x1c);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    else {
      puVar1 = (uint *)(iVar2 + 0x1c);
      *puVar1 = *puVar1 | 1;
    }
    local_24 = 0x78;
    break;
  case 0x1004:
    pcVar10 = "Editing";
    FUN_0045c990("Editing",uVar5);
    local_8 = 2;
    uVar6 = FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,3);
    uVar7 = FUN_00637250();
    iVar2 = param_2;
    FUN_0068a030(uVar7,uVar6,&param_1,pcVar10);
    FUN_00637c10();
    FUN_00637c10();
    FUN_00637c10();
    if (bVar9) {
      puVar1 = (uint *)(iVar2 + 0x1c);
      *puVar1 = *puVar1 & 0xfffffffe;
      local_24 = 99;
    }
    else {
      puVar1 = (uint *)(iVar2 + 0x1c);
      *puVar1 = *puVar1 | 1;
      local_24 = 99;
    }
    break;
  case 0x1005:
    pcVar10 = "Editing";
    FUN_0045c990("Editing",uVar5);
    local_8 = 4;
    uVar6 = FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,5);
    uVar7 = FUN_00637250();
    iVar2 = param_2;
    FUN_0068a030(uVar7,uVar6,&param_1,pcVar10);
    FUN_00637c10();
    FUN_00637c10();
    FUN_00637c10();
    if (*(char *)(in_ECX + 0x34) == '\0') {
      puVar1 = (uint *)(iVar2 + 0x1c);
      *puVar1 = *puVar1 & 0xfffffffe;
      local_24 = 0x76;
    }
    else {
      puVar1 = (uint *)(iVar2 + 0x1c);
      *puVar1 = *puVar1 | 1;
      local_24 = 0x76;
    }
    break;
  case 0x1006:
    pcVar10 = "Editing";
    FUN_0045c990("Editing",uVar5);
    local_8 = 8;
    uVar6 = FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,9);
    uVar7 = FUN_00637250();
    FUN_0068a030(uVar7,uVar6,&param_1,pcVar10);
    FUN_00637c10();
    FUN_00637c10();
    FUN_00637c10();
    local_24 = 0x61;
    break;
  default:
    goto switchD_006edf14_caseD_1007;
  case 0x1008:
    pcVar10 = "Editing";
    FUN_0045c990("Editing",uVar5);
    local_8 = 10;
    uVar6 = FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,0xb);
    uVar7 = FUN_00637250();
    iVar8 = param_2;
    FUN_0068a030(uVar7,uVar6,&param_1,pcVar10);
    FUN_00637c10();
    FUN_00637c10();
    FUN_00637c10();
    local_24 = 0x7a;
    local_20 = 2;
    local_1c = 0;
    FUN_004aef90(&local_24);
    cVar4 = FUN_0063ba20();
    bVar9 = cVar4 == '\0';
LAB_006ee2c7:
    if ((!bVar9) && (*(char *)(in_ECX + 0x34) == '\0')) {
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) & 0xfffffffe;
      ExceptionList = local_10;
      return;
    }
LAB_006ee2e7:
    *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 1;
switchD_006edf14_caseD_1007:
    ExceptionList = local_10;
    return;
  case 0x1009:
    pcVar10 = "Editing";
    FUN_0045c990("Editing",uVar5);
    local_8 = 0xc;
    uVar6 = FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,0xd);
    uVar7 = FUN_00637250();
    iVar8 = param_2;
    FUN_0068a030(uVar7,uVar6,&param_1,pcVar10);
    FUN_00637c10();
    FUN_00637c10();
    FUN_00637c10();
    local_24 = 0x7a;
    local_20 = 3;
    local_1c = 0;
    FUN_004aef90(&local_24);
    iVar2 = *(int *)(in_ECX + 0xc);
    if (*(uint *)(iVar2 + 0x5c) < *(uint *)(iVar2 + 0x3c)) {
      bVar9 = *(int *)(*(int *)(iVar2 + 0x34) + *(uint *)(iVar2 + 0x5c) * 4) == 0;
      goto LAB_006ee2c7;
    }
    goto LAB_006ee2e7;
  }
  local_20 = 2;
  local_1c = 0;
  FUN_004aef90(&local_24);
  ExceptionList = local_10;
  return;
}

