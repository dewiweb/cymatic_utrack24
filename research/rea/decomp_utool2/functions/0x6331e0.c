// rea decompile_all
// name: FUN_006331e0
// address: 0x6331e0
// body: available
// range: 0x6331e0-0x633294 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_006331e0(int *param_1)

{
  LPCWSTR lpNewFileName;
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  BOOL BVar5;
  int *in_ECX;
  
  iVar4 = *in_ECX;
  if (*param_1 != iVar4) {
    iVar1 = FUN_00448730(*param_1);
    iVar4 = 0;
    if (iVar1 != 0) {
      pcVar3 = (char *)*in_ECX;
      if (*pcVar3 != '\0') {
        puVar2 = (undefined4 *)FUN_00458890();
        pcVar3 = (char *)GetFileAttributesW((LPCWSTR)*puVar2);
        if (pcVar3 != (char *)0xffffffff) {
          if (*in_ECX != *param_1) {
            iVar4 = FUN_0045c1e0(*in_ECX);
            if (iVar4 != 0) {
              pcVar3 = (char *)FUN_00635980();
              if ((char)pcVar3 == '\0') goto LAB_00633281;
            }
          }
          puVar2 = (undefined4 *)FUN_00458890();
          lpNewFileName = (LPCWSTR)*puVar2;
          puVar2 = (undefined4 *)FUN_00458890();
          BVar5 = MoveFileW((LPCWSTR)*puVar2,lpNewFileName);
          return (uint)(BVar5 != 0);
        }
      }
LAB_00633281:
      return (uint)pcVar3 & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}

