// rea decompile_all
// name: FUN_00612de0
// address: 0x612de0
// body: available
// range: 0x612de0-0x612f48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00612f22) */
/* WARNING: Removing unreachable block (ram,0x00612f2c) */

void FUN_00612de0(LPWSTR param_1)

{
  LPWSTR pWVar1;
  uint uVar2;
  int iVar3;
  LPWSTR pszPath;
  BOOL BVar4;
  LPWSTR in_ECX;
  LPWSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pWVar1 = param_1;
  puStack_c = &LAB_0071cb04;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = in_ECX;
  if ((char)*param_1 != '\0') {
    local_14 = param_1;
    FUN_0044ebd0(1);
    iVar3 = FUN_00426f70();
    if (iVar3 == 0x3a) {
      local_14 = param_1;
      FUN_0044ebd0(2);
      iVar3 = FUN_00426f70();
      if (iVar3 == 0) {
        local_14 = (LPWSTR)CONCAT22(local_14._2_2_,0x5c);
        FUN_00621830(&local_14);
      }
    }
  }
  iVar3 = FUN_0045d6b0(param_1,uVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  FID_conflict__free((void *)0x0);
  pszPath = (LPWSTR)FUN_004c5556(iVar3 + 4,1);
  if (pszPath == (LPWSTR)0x0) {
    FUN_0045d6b0(param_1,uVar2);
  }
  else {
    local_14 = pszPath;
    FUN_0045e270(param_1);
  }
  BVar4 = PathStripToRootW(pszPath);
  if (BVar4 != 0) {
    FUN_0045cae0(pszPath);
    param_1 = local_14;
    pWVar1 = pWVar1 + -4;
    if (pWVar1 != (LPWSTR)&DAT_00bfe124) {
      LOCK();
      iVar3 = *(int *)pWVar1;
      *(int *)pWVar1 = *(int *)pWVar1 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(pWVar1);
      }
    }
  }
  *(LPWSTR *)in_ECX = param_1;
  FID_conflict__free(pszPath);
  ExceptionList = local_10;
  return;
}

