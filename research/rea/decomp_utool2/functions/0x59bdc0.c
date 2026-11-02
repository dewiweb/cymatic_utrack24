// rea decompile_all
// name: FUN_0059bdc0
// address: 0x59bdc0
// body: available
// range: 0x59bdc0-0x59befc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059bdc0(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int *in_ECX;
  int *piVar6;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715a30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0059c7f0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  uVar3 = (**(code **)(*in_ECX + 4))(&local_18);
  local_8 = 0;
  uVar3 = FUN_00637690(uVar3);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_005a0d40(in_ECX,uVar3);
  piVar6 = (int *)(local_14 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_8 = 0xffffffff;
  piVar6 = (int *)(local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  cVar2 = (**(code **)(*in_ECX + 8))();
  if (cVar2 == '\0') {
    FUN_0059c9c0(9,0x501,&PTR_DAT_00c7ed54);
    FUN_0059c9c0(1,0x501,&PTR_DAT_00c7ed54);
  }
  (**(code **)(*in_ECX + 0xc))();
  *(undefined1 *)(in_ECX + 0x1f) = 1;
  if ((in_ECX[0x1e] == 0) && (*(char *)in_ECX[0x18] != '\0')) {
    puVar4 = (undefined4 *)FUN_00458890();
    DVar5 = GetFileAttributesW((LPCWSTR)*puVar4);
    if ((DVar5 & 0x10) == 0) {
      FUN_00635980();
    }
  }
  FUN_0059c7b0();
  FUN_005a0d40(in_ECX,&PTR_DAT_00c7ed68);
  *(undefined1 *)((int)in_ECX + 0x7d) = 1;
  ExceptionList = local_10;
  return;
}

