// rea decompile_all
// name: FUN_006a04c0
// address: 0x6a04c0
// body: available
// range: 0x6a04c0-0x6a05c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006a0545) */
/* WARNING: Removing unreachable block (ram,0x006a0552) */

void FUN_006a04c0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_ECX;
  int iVar4;
  int local_3c [7];
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar2 = (int *)(*param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  local_3c[0] = *param_1;
  LOCK();
  UNLOCK();
  local_8 = 0;
  puStack_c = &LAB_00722b05;
  local_1c = 0;
  local_20 = &DAT_00bfe12c;
  local_3c[6] = 0;
  local_3c[5] = 0;
  local_3c[4] = 0;
  local_3c[3] = 0;
  local_3c[2] = 0;
  local_3c[1] = 0;
  local_18 = 0x1000001;
  operator_new(0x28);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar3 = FUN_006a0770(local_3c);
  iVar4 = in_ECX[2] + 1;
  if (in_ECX[1] < iVar4) {
    FUN_00409cf0(iVar4 / 2 + in_ECX[2] + 9 & 0xfffffff8);
  }
  iVar4 = in_ECX[2];
  in_ECX[2] = iVar4 + 1;
  *(undefined4 *)(*in_ECX + iVar4 * 4) = uVar3;
  FUN_004abe20(uVar1);
  ExceptionList = local_10;
  return;
}

