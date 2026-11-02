// rea decompile_all
// name: FUN_006d1210
// address: 0x6d1210
// body: available
// range: 0x6d1210-0x6d13a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006d1296) */
/* WARNING: Removing unreachable block (ram,0x006d12a3) */

void FUN_006d1210(int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_38 [2];
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar3 = (int *)(*param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_38[0] = *param_1;
  LOCK();
  UNLOCK();
  local_8 = 0;
  puStack_c = &LAB_00726d05;
  local_14 = 1;
  local_18 = 0;
  local_1c = &DAT_00bfe12c;
  local_20 = 0;
  local_24 = 0;
  uStack_28 = 0;
  puStack_2c = (undefined4 *)0x0;
  puStack_30 = (undefined4 *)0x0;
  uVar8 = 0x10;
  local_38[1] = 0;
  uVar7 = 0x6d12ba;
  puVar4 = operator_new(0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  iVar5 = *(int *)(param_2 + 0xc);
  puVar4[3] = iVar5;
  if (iVar5 != 0) {
    LOCK();
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 3;
  FUN_004b1cb0(param_2,uVar7,uVar8);
  puVar1 = puStack_30;
  local_8 = (uint)local_8._1_3_ << 8;
  if ((puStack_30 != puVar4) &&
     (bVar6 = puStack_30 != (undefined4 *)0x0, puStack_30 = puVar4, bVar6)) {
    FUN_006dfe10(uVar2);
    FUN_004bfe14(puVar1,0x10);
  }
  iVar5 = FUN_006df190();
  puVar4 = puStack_2c;
  local_14 = CONCAT31((int3)(local_14 >> 8),0 < iVar5) & 0xffff00ff;
  if (puStack_2c != (undefined4 *)0x0) {
    puStack_2c = (undefined4 *)0x0;
    (**(code **)*puVar4)(1);
  }
  operator_new(0x28);
  local_8 = CONCAT31(local_8._1_3_,4);
  uVar7 = FUN_006a0770(local_38);
  iVar5 = in_ECX[2] + 1;
  if (in_ECX[1] < iVar5) {
    FUN_00409cf0(iVar5 / 2 + in_ECX[2] + 9 & 0xfffffff8);
  }
  iVar5 = in_ECX[2];
  in_ECX[2] = iVar5 + 1;
  *(undefined4 *)(*in_ECX + iVar5 * 4) = uVar7;
  FUN_004abe20();
  ExceptionList = local_10;
  return;
}

