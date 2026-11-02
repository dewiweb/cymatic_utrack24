// rea decompile_all
// name: FUN_006126e0
// address: 0x6126e0
// body: available
// range: 0x6126e0-0x612754 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


DWORD FUN_006126e0(LPVOID param_1,DWORD param_2)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *_Memory;
  DWORD local_8;
  
  if (*(HANDLE *)(in_ECX + 8) != (HANDLE)0x0) {
    local_8 = 0;
    BVar3 = ReadFile(*(HANDLE *)(in_ECX + 8),param_1,param_2,&local_8,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      puVar4 = (undefined4 *)FUN_00612a20();
      uVar2 = *(undefined4 *)(in_ECX + 0x18);
      *(undefined4 *)(in_ECX + 0x18) = *puVar4;
      *puVar4 = uVar2;
      _Memory = (int *)(param_2 - 8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory);
        }
      }
    }
    return local_8;
  }
  return 0;
}

