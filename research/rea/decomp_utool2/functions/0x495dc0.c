// rea decompile_all
// name: FUN_00495dc0
// address: 0x495dc0
// body: available
// range: 0x495dc0-0x49609c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00495dc0(undefined4 *param_1,char param_2,char param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 **ppuVar8;
  undefined1 *local_9c;
  undefined1 *puStack_98;
  undefined1 *local_94;
  undefined1 *local_90;
  void *local_64;
  undefined1 local_58 [32];
  undefined1 local_38 [4];
  float local_34;
  float local_30;
  undefined1 *local_2c;
  float local_28;
  int *local_24;
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070252e;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = 1.0;
  if (param_2 == '\0') {
    local_28 = 0.55;
  }
  else if (param_3 == '\0') {
    local_28 = 0.8;
  }
  fVar7 = 0.5;
  fVar6 = local_28;
  if (((*(byte *)(in_ECX + 0x69) & 0x10) != 0) ||
     ((*(int *)(in_ECX + 0xc) != 0 && (cVar1 = FUN_006e6320(), cVar1 == '\0')))) {
    local_28 = fVar6 * fVar7;
  }
  iVar4 = *(int *)(in_ECX + 0x18);
  iVar3 = *(int *)(in_ECX + 0x1c);
  if (iVar4 < iVar3) {
    iVar5 = iVar3 - iVar4;
    iVar3 = iVar4;
  }
  else {
    iVar5 = iVar4 - iVar3;
  }
  local_9c = (undefined1 *)&puStack_98;
  local_2c = (undefined1 *)((float)iVar3 * 0.9);
  fVar6 = (float)iVar3 * 0.05;
  local_34 = fVar6 + 0.0;
  local_90 = (undefined1 *)((float)iVar5 * fVar7 + fVar6);
  local_94 = (undefined1 *)0x0;
  ppuVar8 = &local_9c;
  local_30 = (float)local_90;
  FUN_0067f410();
  FUN_006842b0();
  FUN_0067f410(&local_9c);
  FUN_006842b0(ppuVar8);
  FUN_006840c0();
  local_8 = 0;
  local_90 = (undefined1 *)0x495f07;
  FUN_00683ff0();
  local_8 = 0xffffffff;
  local_90 = (undefined1 *)0x495f16;
  FID_conflict__free(local_64);
  local_9c = local_2c;
  FUN_00472db0();
  local_9c = (undefined1 *)0x495f3f;
  FUN_00677060();
  local_90 = local_38;
  local_34 = local_34 + 2.0;
  local_30 = local_30 + 2.0;
  local_2c = (undefined1 *)((float)local_2c - 4.0);
  local_94 = (undefined1 *)0x495f91;
  FUN_006842b0();
  local_90 = (undefined1 *)0x495fa0;
  FUN_006a64a0();
  local_8 = 1;
  local_90 = (undefined1 *)0x495fb9;
  puVar2 = (undefined4 *)FUN_0063bf80();
  local_90 = (undefined1 *)0x495fc6;
  cVar1 = (**(code **)(*(int *)*puVar2 + 0x14))();
  local_90 = local_1c;
  local_94 = (undefined1 *)0x495fd4;
  (**(code **)(*local_24 + 0x54))();
  local_8 = 0xffffffff;
  iVar4 = 0xe4;
  if (cVar1 != '\0') {
    iVar4 = 0x104;
  }
  local_9c = (undefined1 *)((float)local_2c * 0.4);
  puStack_98 = (undefined1 *)0x1;
  local_94 = (undefined1 *)0x24;
  FUN_0067fe30(local_58,local_9c);
  puStack_98 = (undefined1 *)&local_94;
  local_9c = (undefined1 *)0x496054;
  FUN_006842b0();
  puStack_98 = (undefined1 *)0x49605b;
  FUN_00684c50();
  local_94 = (undefined1 *)0x496064;
  cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
  if (cVar1 == '\0') {
    local_94 = (undefined1 *)0x49606f;
    cVar1 = FUN_00682580();
    if (cVar1 == '\0') {
      local_94 = local_58;
      local_9c = (undefined1 *)0x49607f;
      puStack_98 = (undefined1 *)(in_ECX + iVar4);
      (**(code **)(*(int *)*param_1 + 0x5c))();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

