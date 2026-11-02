// rea decompile_all
// name: FUN_00627b00
// address: 0x627b00
// body: available
// range: 0x627b00-0x627ba0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00627b00(int *param_1)

{
  LPCWSTR lpReplacementFileName;
  int iVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  BOOL BVar4;
  undefined4 uVar5;
  int *in_ECX;
  
  if ((*param_1 != *in_ECX) && (iVar1 = FUN_00448730(*param_1), iVar1 != 0)) {
    if (*(char *)*param_1 != '\0') {
      puVar2 = (undefined4 *)FUN_00458890();
      DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
      if (DVar3 != 0xffffffff) {
        puVar2 = (undefined4 *)FUN_00458890();
        lpReplacementFileName = (LPCWSTR)*puVar2;
        puVar2 = (undefined4 *)FUN_00458890();
        BVar4 = ReplaceFileW((LPCWSTR)*puVar2,lpReplacementFileName,(LPCWSTR)0x0,2,(LPVOID)0x0,
                             (LPVOID)0x0);
        if (BVar4 != 0) {
          FUN_00635980();
          return 1;
        }
        return 0;
      }
    }
    uVar5 = FUN_006331e0();
    return uVar5;
  }
  return 1;
}

