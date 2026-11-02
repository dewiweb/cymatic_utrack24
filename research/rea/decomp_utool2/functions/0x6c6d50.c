// rea decompile_all
// name: FUN_006c6d50
// address: 0x6c6d50
// body: available
// range: 0x6c6d50-0x6c6fce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c6d50(undefined4 param_1,char param_2,char param_3)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  undefined4 *local_44;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  char local_25;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725e94;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(byte *)(in_ECX + 0x69) & 0x10) == 0) {
    if (*(int *)(in_ECX + 0xc) != 0) {
      cVar4 = FUN_006e6320(local_14);
      if (cVar4 == '\0') goto LAB_006c6d9d;
    }
    bVar2 = true;
  }
  else {
LAB_006c6d9d:
    bVar2 = false;
  }
  cVar4 = '\0';
  if (bVar2) {
    cVar4 = param_2;
  }
  cVar5 = '\0';
  if (bVar2) {
    cVar5 = param_3;
  }
  FUN_006c70b0(&local_44);
  uVar3 = local_40;
  local_8 = 0;
  if (local_44 == (undefined4 *)0x0) goto LAB_006c6f9c;
  if (local_44 == (undefined4 *)0x0) {
    iVar10 = 0;
    local_38 = 0;
  }
  else {
    local_38 = local_44[4];
    iVar10 = local_44[3];
  }
  iVar11 = *(int *)(in_ECX + 0x18);
  local_30 = *(int *)(in_ECX + 0x1c);
  local_25 = *(char *)(in_ECX + 0xe0);
  iVar9 = (local_30 - local_38) / 2;
  local_40 = CONCAT44(iVar9,(int)local_40);
  iVar6 = iVar11;
  iVar8 = iVar10;
  if (local_25 == '\0') {
LAB_006c6ebf:
    local_34 = (iVar11 - iVar8) / 2;
    iVar11 = iVar6;
  }
  else {
    if (*(char *)(in_ECX + 0xe1) != '\0') {
      fVar12 = (float)local_38 / (float)iVar10;
      if (fVar12 <= (float)local_30 / (float)iVar11) {
        local_40._0_4_ = SUB84((double)((float)iVar11 * fVar12) + 6755399441055744.0,0);
        local_2c = (int)local_40;
      }
      else {
        local_40._0_4_ = SUB84((double)((float)local_30 / fVar12) + 6755399441055744.0,0);
        iVar6 = (int)local_40;
        local_2c = local_30;
      }
      iVar9 = (local_30 - local_2c) / 2;
      local_40 = CONCAT44(iVar9,(int)local_40);
      local_30 = local_2c;
      iVar8 = iVar6;
      goto LAB_006c6ebf;
    }
    iVar9 = 0;
    local_34 = 0;
    local_40 = uVar3 & 0xffffffff;
  }
  if (local_25 == '\0') {
    local_30 = local_38;
    iVar11 = iVar10;
  }
  *(int *)(in_ECX + 0xe4) = local_34;
  *(int *)(in_ECX + 0xe8) = iVar9;
  *(int *)(in_ECX + 0xec) = iVar11;
  *(int *)(in_ECX + 0xf0) = local_30;
  if (cVar5 == '\0') {
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    puVar7 = (undefined4 *)FUN_0063bf80(local_24);
    cVar5 = (**(code **)(*(int *)*puVar7 + 0x14))(puVar7 + 2);
    (**(code **)(*local_24[0] + 0x54))(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    if (cVar5 != '\0') goto LAB_006c6f56;
    if (cVar4 == '\0') {
      local_2c = *(int *)(in_ECX + 0x100);
      iVar10 = 0x10c;
    }
    else {
      local_2c = *(int *)(in_ECX + 0x104);
      iVar10 = 0x110;
    }
  }
  else {
LAB_006c6f56:
    local_2c = *(int *)(in_ECX + 0x108);
    iVar10 = 0x114;
  }
  iVar8 = FUN_006e9580();
  (**(code **)(*(int *)(iVar8 + 8) + 4))
            (param_1,&local_44,local_34,local_40._4_4_,iVar11,local_30,iVar10 + in_ECX,local_2c);
LAB_006c6f9c:
  if (local_44 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_44 + 1;
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)*local_44)(1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

