// rea decompile_all
// name: FUN_005b5020
// address: 0x5b5020
// body: available
// range: 0x5b5020-0x5b50bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005b5020(char *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  int *_Memory;
  undefined1 uVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00719335;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar5 = 0;
  do {
    if (*param_1 != '\0') {
      puVar2 = (undefined4 *)FUN_00458890(uVar1);
      DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
      if (DVar3 != 0xffffffff) {
        uVar4 = 1;
        break;
      }
    }
    uVar4 = 0;
    Sleep(10);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  _Memory = (int *)(param_1 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar5 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return uVar4;
}

