// rea decompile_all
// name: FUN_006dfcb0
// address: 0x6dfcb0
// body: available
// range: 0x6dfcb0-0x6dfdd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006dfd35) */
/* WARNING: Removing unreachable block (ram,0x006dfd42) */
/* WARNING: Removing unreachable block (ram,0x006dfd64) */

void FUN_006dfcb0(undefined4 param_1,int *param_2,undefined1 param_3,undefined1 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)(*param_2 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_38 = *param_2;
  LOCK();
  UNLOCK();
  local_14 = (uint)CONCAT11(param_4,param_3);
  local_8 = 0;
  puStack_c = &LAB_00727ff7;
  local_18 = 0;
  local_1c = &DAT_00bfe12c;
  local_20 = 0;
  local_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  local_34 = param_1;
  operator_new(0x28);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar2 = FUN_006a0770(&local_38);
  iVar3 = in_ECX[2] + 1;
  if (in_ECX[1] < iVar3) {
    FUN_00409cf0(iVar3 / 2 + in_ECX[2] + 9 & 0xfffffff8);
  }
  iVar3 = in_ECX[2];
  in_ECX[2] = iVar3 + 1;
  *(undefined4 *)(*in_ECX + iVar3 * 4) = uVar2;
  FUN_004abe20();
  ExceptionList = local_10;
  return;
}

