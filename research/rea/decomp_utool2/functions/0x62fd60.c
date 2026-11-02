// rea decompile_all
// name: FUN_0062fd60
// address: 0x62fd60
// body: available
// range: 0x62fd60-0x62ff30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062fd60(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  undefined4 *in_ECX;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar6 = param_1;
  puStack_c = &LAB_0071e49c;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *in_ECX = juce::FileLogger::vftable;
  iVar1 = *param_1;
  in_ECX[1] = iVar1;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 2));
  local_8 = CONCAT31(local_8._1_3_,2);
  if (-1 < param_4) {
    FUN_00626660(param_3,param_4,uVar2);
  }
  if (*(char *)*piVar6 != '\0') {
    puVar4 = (undefined4 *)FUN_00458890();
    DVar5 = GetFileAttributesW((LPCWSTR)*puVar4);
    if (DVar5 != 0xffffffff) goto LAB_0062fe27;
  }
  FUN_00627890(&param_4);
  piVar6 = (int *)(param_4 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
LAB_0062fe27:
  param_1 = (int *)&DAT_00bfe12c;
  uVar10 = 0;
  uVar9 = 1;
  uVar8 = 1;
  uVar7 = 1;
  puVar4 = &param_4;
  FUN_00633420(puVar4,1,1,1,0);
  uVar7 = FUN_00636ad0(puVar4,uVar7,uVar8,uVar9,uVar10);
  local_8._0_1_ = 4;
  FUN_00621830(&DAT_00c129a8);
  FUN_00621830("**********************************************************");
  FUN_00621830(&DAT_00c129a8);
  FUN_00636ec0(param_2);
  FUN_00621830(&DAT_00c129a8);
  FUN_00621830("Log started: ");
  FUN_00636ec0(uVar7);
  FUN_00621830(&DAT_00c129a8);
  local_8 = CONCAT31(local_8._1_3_,3);
  piVar6 = (int *)(param_4 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  FUN_0062fc40(&param_1);
  piVar6 = (int *)((int)param_1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return;
}

