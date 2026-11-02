// rea decompile_all
// name: FUN_004ec330
// address: 0x4ec330
// body: available
// range: 0x4ec330-0x4ec4ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004ec330(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0070505e;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  DVar3 = timeGetTime();
  if ((DAT_00c8a644 <= DVar3) || (DVar3 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar3;
  }
  __aulldiv(DVar3 - *(int *)(in_ECX + 0x98),0,1000,0);
  FUN_006f56f0(uVar2);
  uVar4 = FUN_005b5190();
  local_8 = 1;
  puVar5 = (undefined4 *)FUN_00637690(uVar4);
  iVar6 = param_1[2] + 1;
  if (param_1[1] < iVar6) {
    FUN_00409cf0(iVar6 / 2 + param_1[2] + 9 & 0xfffffff8);
  }
  iVar6 = param_1[2];
  param_1[2] = iVar6 + 1;
  puVar1 = (undefined4 *)(*param_1 + iVar6 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *puVar5;
    *puVar5 = &DAT_00bfe12c;
  }
  piVar7 = (int *)(local_14 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  local_8 = local_8 & 0xffffff00;
  piVar7 = (int *)(local_1c + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  FUN_0045c990("");
  iVar6 = param_1[2] + 1;
  if (param_1[1] < iVar6) {
    FUN_00409cf0(iVar6 / 2 + param_1[2] + 9 & 0xfffffff8);
  }
  iVar6 = param_1[2];
  param_1[2] = iVar6 + 1;
  puVar5 = (undefined4 *)(*param_1 + iVar6 * 4);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = local_14;
    local_14 = &DAT_00bfe12c;
  }
  piVar7 = (int *)(local_14 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

