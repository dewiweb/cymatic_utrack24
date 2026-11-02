// rea decompile_all
// name: FUN_0044bf10
// address: 0x44bf10
// body: available
// range: 0x44bf10-0x44c1a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044bf10(uint param_1,int param_2,int param_3,int param_4,char param_5)

{
  char cVar1;
  char cVar2;
  undefined **ppuVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  float fVar7;
  float local_c0;
  int *local_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined1 *local_b0;
  undefined *local_84;
  int local_80;
  int local_7c;
  uint local_78;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fc790;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_80 = param_2;
  if (*(uint *)(in_ECX + 0x2c) <= param_1) goto LAB_0044c188;
  if (param_5 != '\0') {
    local_b0 = &stack0xffffff54;
    uStack_b4 = 0;
    uStack_b8 = 0x1000202;
    local_bc = &local_7c;
    local_c0 = 6.313489e-39;
    FUN_006e8e70();
    uStack_b4 = 0x44bf7f;
    FUN_00684d10();
    local_b0 = (undefined1 *)0x44bf86;
    FUN_00684a80();
  }
  if (param_1 < *(uint *)(in_ECX + 0x2c)) {
    ppuVar3 = (undefined **)(*(int *)(in_ECX + 0x24) + param_1 * 4);
  }
  else {
    ppuVar3 = &PTR_DAT_00c7ed68;
  }
  local_84 = *ppuVar3;
  piVar4 = (int *)(local_84 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  cVar2 = '\0';
  local_8 = 0;
  local_78 = local_78 & 0xffffff00;
  FUN_005ced70();
  local_8 = CONCAT31(local_8._1_3_,1);
  local_b0 = (undefined1 *)0x44bfce;
  FUN_0040da30();
  iVar5 = *(int *)(in_ECX + 0x1c);
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if ((iVar5 == 0) || (iVar5 == 1)) {
      local_b0 = (undefined1 *)0x44c03c;
      cVar2 = FUN_00637490();
      goto LAB_0044c03e;
    }
  }
  else {
    if (iVar5 == 0) {
      local_b0 = (undefined1 *)0x44bfe5;
      cVar1 = FUN_00637490();
      if (cVar1 == '\0') {
        local_b0 = (undefined1 *)0x44bff5;
        cVar1 = FUN_00637490();
        if (cVar1 == '\0') goto LAB_0044c03e;
      }
    }
    else {
      if (iVar5 != 1) goto LAB_0044c041;
      local_b0 = (undefined1 *)0x44c00d;
      cVar2 = FUN_00637490();
      if (cVar2 == '\0') {
        local_b0 = (undefined1 *)0x44c01d;
        cVar2 = FUN_00637490();
        if (cVar2 == '\0') {
          cVar2 = '\0';
          goto LAB_0044c03e;
        }
      }
    }
    cVar2 = '\x01';
LAB_0044c03e:
    local_78 = CONCAT31(local_78._1_3_,cVar2);
  }
LAB_0044c041:
  iVar6 = *(int *)(in_ECX + -0x20) + 5;
  fVar7 = (float)param_4 * 0.75;
  local_7c = in_ECX + -0xac;
  iVar5 = FUN_006e9580();
  local_b0 = (undefined1 *)0x1;
  uStack_b4 = 1;
  uStack_b8 = local_78;
  local_c0 = fVar7;
  local_bc = (int *)fVar7;
  (**(code **)(*(int *)(iVar5 + 4) + 0x1c))
            (local_80,in_ECX + -0xac,(float)iVar6 - fVar7,((float)param_4 - fVar7) * 0.5);
  local_78 = 0x3f19999a;
  FUN_00684bc0();
  if (cVar2 != '\0') {
    local_78 = 0x3f800000;
  }
  local_b0 = &stack0xffffff54;
  local_bc = &local_80;
  uStack_b4 = 1;
  uStack_b8 = 0x1002820;
  local_c0 = 6.314066e-39;
  FUN_006e8e70();
  uStack_b4 = 0x44c118;
  FUN_00684d10();
  local_b0 = (undefined1 *)0x44c11f;
  FUN_00684c50();
  local_b0 = (undefined1 *)((param_3 - iVar6) + -2);
  uStack_b4 = 0;
  uStack_b8 = 0x44c13a;
  FUN_00472d90();
  local_b0 = (undefined1 *)0x21;
  FUN_0040e4d0(&local_c0);
  FUN_006830c0(&local_84);
  FUN_0040d9d0();
  piVar4 = (int *)(local_84 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b0 = (undefined1 *)0x44c185;
      FID_conflict__free(piVar4);
    }
  }
LAB_0044c188:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

