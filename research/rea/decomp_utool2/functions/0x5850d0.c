// rea decompile_all
// name: FUN_005850d0
// address: 0x5850d0
// body: available
// range: 0x5850d0-0x5852da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005851d1) */
/* WARNING: Removing unreachable block (ram,0x005851cc) */
/* WARNING: Removing unreachable block (ram,0x005851d9) */
/* WARNING: Removing unreachable block (ram,0x005851de) */
/* WARNING: Removing unreachable block (ram,0x005851ea) */
/* WARNING: Removing unreachable block (ram,0x005851ed) */
/* WARNING: Removing unreachable block (ram,0x005851ff) */
/* WARNING: Removing unreachable block (ram,0x0058520b) */
/* WARNING: Removing unreachable block (ram,0x00585214) */
/* WARNING: Removing unreachable block (ram,0x00585221) */
/* WARNING: Removing unreachable block (ram,0x00585219) */
/* WARNING: Removing unreachable block (ram,0x00585226) */
/* WARNING: Removing unreachable block (ram,0x00585232) */
/* WARNING: Removing unreachable block (ram,0x00585235) */
/* WARNING: Removing unreachable block (ram,0x00585247) */
/* WARNING: Removing unreachable block (ram,0x00585253) */

void FUN_005850d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,void *param_7)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071312a;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *in_ECX = juce::ReferenceCountedObject::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = param_1;
  *in_ECX = NewsFile::NewsItem::vftable;
  in_ECX[3] = param_2;
  piVar4 = (int *)(param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  in_ECX[4] = param_3;
  in_ECX[5] = param_4;
  in_ECX[6] = param_5;
  piVar4 = (int *)(param_5 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  in_ECX[7] = param_6;
  FUN_0041a320(&param_7);
  in_ECX[0xb] = &DAT_00bfe12c;
  in_ECX[0xc] = &DAT_00bfe12c;
  local_8._0_1_ = 9;
  cVar2 = FUN_00586be0(uVar3);
  if (cVar2 != '\0') {
    local_8._0_1_ = 10;
    FUN_00635720(in_ECX[6],&DAT_00745e04,&DAT_00738bef);
    FUN_0040f7f0();
    FID_conflict__free((void *)0x0);
  }
  piVar4 = (int *)(param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(param_5 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0041a430();
  FID_conflict__free(param_7);
  ExceptionList = local_10;
  return;
}

