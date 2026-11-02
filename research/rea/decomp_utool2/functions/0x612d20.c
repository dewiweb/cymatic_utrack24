// rea decompile_all
// name: FUN_00612d20
// address: 0x612d20
// body: available
// range: 0x612d20-0x612ddd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ULARGE_INTEGER FUN_00612d20(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  BOOL BVar4;
  int *in_ECX;
  ULARGE_INTEGER *lpFreeBytesAvailableToCaller;
  ULARGE_INTEGER *lpTotalNumberOfBytes;
  ULARGE_INTEGER *lpTotalNumberOfFreeBytes;
  ULARGE_INTEGER local_34;
  ULARGE_INTEGER local_2c;
  ULARGE_INTEGER local_24 [2];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071cad9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *in_ECX;
  lpTotalNumberOfFreeBytes = &local_2c;
  lpTotalNumberOfBytes = &local_34;
  lpFreeBytesAvailableToCaller = local_24;
  piVar2 = (int *)(iVar1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  FUN_00612de0(iVar1);
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_00458890();
  BVar4 = GetDiskFreeSpaceExW((LPCWSTR)*puVar3,lpFreeBytesAvailableToCaller,lpTotalNumberOfBytes,
                              lpTotalNumberOfFreeBytes);
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  if (BVar4 != 0) {
    ExceptionList = local_10;
    return (ULARGE_INTEGER)local_24[0].QuadPart;
  }
  ExceptionList = local_10;
  return (ULARGE_INTEGER)0;
}

