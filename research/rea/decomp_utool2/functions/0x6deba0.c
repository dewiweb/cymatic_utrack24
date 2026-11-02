// rea decompile_all
// name: FUN_006deba0
// address: 0x6deba0
// body: available
// range: 0x6deba0-0x6dedd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006deba0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_68;
  undefined4 **ppuStack_64;
  int **ppiStack_60;
  undefined4 **ppuStack_5c;
  uint uStack_58;
  int local_40;
  int local_3c;
  undefined4 *puStack_38;
  int local_34;
  int iStack_30;
  undefined4 *local_2c [2];
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727ed0;
  local_10 = ExceptionList;
  uStack_58 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppuStack_64 = local_2c;
  ppuStack_5c = *(undefined4 ***)(param_2 + 0x1c);
  ppiStack_60 = (int **)param_2;
  uStack_68 = 0x6debe4;
  local_14 = uStack_58;
  FUN_006dede0();
  local_8 = 0;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    ppuStack_5c = (undefined4 **)0x6debfc;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  ppuStack_5c = local_2c;
  ppiStack_60 = (int **)0x6dec07;
  (**(code **)(*(int *)*param_1 + 0x68))();
  if ((*(byte *)(param_2 + 0x69) & 0x10) == 0) {
    if (*(int *)(param_2 + 0xc) != 0) {
      ppiStack_60 = (int **)0x6dec19;
      cVar2 = FUN_006e6320();
      if (cVar2 == '\0') goto LAB_006dec27;
    }
    uVar8 = 0x3f800000;
  }
  else {
LAB_006dec27:
    uVar8 = 0x3f000000;
  }
  _local_34 = CONCAT44(uVar8,local_34);
  ppiStack_60 = local_24;
  local_8._0_1_ = 1;
  ppuStack_64 = (undefined4 **)0x6dec47;
  puVar3 = (undefined4 *)FUN_0063bf80();
  ppiStack_60 = (int **)(puVar3 + 2);
  ppuStack_64 = (undefined4 **)0x6dec54;
  cVar2 = (**(code **)(*(int *)*puVar3 + 0x14))();
  ppuStack_64 = (undefined4 **)local_1c;
  uStack_68 = 0x6dec62;
  (**(code **)(*local_24[0] + 0x54))();
  local_8 = (uint)local_8._1_3_ << 8;
  puVar3 = &uStack_68;
  iVar4 = (cVar2 != '\0') + 0x1000102;
  uStack_68 = extraout_ECX;
  FUN_006e8e70(&local_40,iVar4,0);
  uVar8 = 0x6dec8e;
  FUN_00684d10(puVar3);
  uVar9 = 0x6dec95;
  FUN_00684c50();
  iVar5 = *(int *)(param_2 + 0x1c);
  local_3c = SUB84((double)((float)iVar5 * 0.3) + 6755399441055744.0,0);
  local_40 = 4;
  if (local_3c < 4) {
    local_40 = local_3c;
  }
  if (*(int *)(param_2 + 0x18) < iVar5) {
    iVar5 = *(int *)(param_2 + 0x18);
  }
  _local_3c = CONCAT44(local_2c[0],local_3c);
  iVar6 = (iVar5 / 2) / (int)((uint)((*(byte *)(param_2 + 0xb8) & 1) != 0) * 2 + 2) + 2;
  local_34 = SUB84((double)((float)local_2c[0][5] * 0.6) + 6755399441055744.0,0);
  iVar7 = local_34;
  if (iVar6 < local_34) {
    iVar7 = iVar6;
  }
  _local_34 = CONCAT44(iVar7,local_34);
  iVar6 = (iVar5 / 2) / (int)((uint)((*(uint *)(param_2 + 0xb8) >> 1 & 1) != 0) * 2 + 2) + 2;
  iVar5 = local_34;
  if (iVar6 < local_34) {
    iVar5 = iVar6;
  }
  iVar7 = (*(int *)(param_2 + 0x18) - iVar5) - iVar7;
  if (0 < iVar7) {
    FUN_00472d90(local_40,iVar7,*(int *)(param_2 + 0x1c) + local_40 * -2);
    FUN_00682290(param_2 + 0x88,0x24,2,0,iVar4,uVar8,uVar9);
  }
  if (local_2c[0] != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_2c[0] + 1;
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      uStack_68 = 1;
      (**(code **)*local_2c[0])();
    }
  }
  ExceptionList = local_10;
  uStack_58 = 0x6dedcf;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

