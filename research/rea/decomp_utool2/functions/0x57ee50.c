// rea decompile_all
// name: FUN_0057ee50
// address: 0x57ee50
// body: available
// range: 0x57ee50-0x57f1b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0057eeea) */
/* WARNING: Removing unreachable block (ram,0x0057eef0) */
/* WARNING: Removing unreachable block (ram,0x0057eef6) */
/* WARNING: Removing unreachable block (ram,0x0057ef05) */
/* WARNING: Removing unreachable block (ram,0x0057ef0b) */
/* WARNING: Removing unreachable block (ram,0x0057ef13) */
/* WARNING: Removing unreachable block (ram,0x0057f143) */
/* WARNING: Removing unreachable block (ram,0x0057f145) */
/* WARNING: Removing unreachable block (ram,0x0057f14b) */
/* WARNING: Removing unreachable block (ram,0x0057f155) */
/* WARNING: Removing unreachable block (ram,0x0057f15b) */
/* WARNING: Removing unreachable block (ram,0x0057f163) */

void FUN_0057ee50(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *in_ECX;
  int local_38;
  undefined4 *local_24;
  int local_1c;
  undefined4 *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007125de;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0057f440();
  local_8._0_1_ = 1;
  if (*(char *)(in_ECX + 2) != '\0') {
    *(undefined1 *)(in_ECX + 2) = 0;
    (**(code **)(*(int *)*in_ECX + 0x34))();
  }
  *(undefined1 *)(in_ECX + 2) = 1;
  FUN_00419e50();
  local_38 = 200;
  local_8 = CONCAT31(local_8._1_3_,2);
  local_1c = 0;
  do {
    if (local_38 != 0) {
      FID_conflict__free((void *)0x0);
      local_38 = 0;
    }
    FUN_00681150(local_18,&param_1,0,(float)param_3);
    iVar2 = FUN_00682660();
    if (*(float *)(iVar2 + 0xc) < (float)param_4) break;
    puVar3 = (undefined4 *)FUN_00683640();
    puVar1 = (undefined4 *)*puVar3;
    *puVar3 = local_18[0];
    local_18[0] = puVar1;
    if (local_24 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = local_24 + 1;
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_24)();
      }
    }
    local_1c = local_1c + 1;
  } while (local_1c < 2);
  FUN_00684c50();
  FUN_00472db0((float)param_4);
  FUN_00684310();
  FUN_00684c50();
  FUN_00682710();
  if (*(char *)(in_ECX + 2) == '\0') {
    (**(code **)(*(int *)*in_ECX + 0x38))();
  }
  else {
    *(undefined1 *)(in_ECX + 2) = 0;
  }
  FID_conflict__free((void *)0x0);
  if (local_18[0] != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_18[0] + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_18[0])();
    }
  }
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

