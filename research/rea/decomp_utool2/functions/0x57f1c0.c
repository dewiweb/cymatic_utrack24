// rea decompile_all
// name: FUN_0057f1c0
// address: 0x57f1c0
// body: available
// range: 0x57f1c0-0x57f422 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0057f3e7) */
/* WARNING: Removing unreachable block (ram,0x0057f3f2) */

int FUN_0057f1c0(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined4 *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00712611;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0057f440();
  local_8 = 0;
  if (*(char *)(in_ECX + 2) != '\0') {
    *(undefined1 *)(in_ECX + 2) = 0;
    (**(code **)(*(int *)*in_ECX + 0x34))();
  }
  *(undefined1 *)(in_ECX + 2) = 1;
  local_8._0_1_ = 1;
  FUN_00636ec0();
  FUN_0044ec90();
  FUN_00644f50();
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar2 = param_1[3];
  FUN_00684960();
  iVar3 = *param_1;
  iVar4 = param_1[2];
  FUN_00684c50();
  FUN_00472db0((float)iVar2 - 4.0);
  if (param_2 == '\0') {
    FUN_00683310();
  }
  else {
    FUN_00684310();
  }
  FUN_00684760();
  if (*(char *)(in_ECX + 2) == '\0') {
    (**(code **)(*(int *)*in_ECX + 0x38))();
  }
  else {
    *(undefined1 *)(in_ECX + 2) = 0;
  }
  FUN_00471a50();
  FID_conflict__free((void *)0x0);
  FUN_00471bf0();
  FID_conflict__free((void *)0x0);
  if (local_20 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_20 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_20)();
    }
  }
  ExceptionList = local_10;
  return (int)((float)(iVar3 + iVar4) - 8.0);
}

