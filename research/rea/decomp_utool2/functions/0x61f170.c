// rea decompile_all
// name: FUN_0061f170
// address: 0x61f170
// body: available
// range: 0x61f170-0x61f205 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0061f170(int param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  int in_ECX;
  
  DVar2 = timeGetTime();
  if ((DAT_00c8a644 <= DVar2) || (DVar2 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar2;
  }
  iVar1 = *(int *)(in_ECX + 8);
  do {
    if (iVar1 == 0) {
      return 1;
    }
    if (-1 < param_1) {
      DVar3 = timeGetTime();
      if ((DAT_00c8a644 <= DVar3) || (DVar3 < DAT_00c8a644 - 1000)) {
        DAT_00c8a644 = DVar3;
      }
      if (DVar2 + param_1 < DVar3) {
        return 0;
      }
    }
    if (DAT_00c8a8f0 == (HANDLE)0x0) {
      Sleep(2);
    }
    else {
      WaitForSingleObject(DAT_00c8a8f0,2);
    }
    iVar1 = *(int *)(in_ECX + 8);
  } while( true );
}

