// rea decompile_all
// name: FUN_0058ab00
// address: 0x58ab00
// body: available
// range: 0x58ab00-0x58abdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058ab00(void)

{
  int *piVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  int iVar4;
  int in_ECX;
  
  piVar1 = (int *)(*(int *)(in_ECX + 0x18) + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_005bd0c0();
  if (**(char **)(in_ECX + 0x14) != '\0') {
    puVar2 = (undefined4 *)FUN_00458890();
    DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
    if ((DVar3 & 0x10) == 0) {
      piVar1 = (int *)(*(int *)(in_ECX + 0x14) + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_00589de0();
    }
  }
  if (*(undefined **)(in_ECX + 0xe8) != PTR_DAT_00c7ed54) {
    iVar4 = FUN_0045c1e0(*(undefined4 *)(in_ECX + 0xe8));
    if ((iVar4 != 0) && (**(char **)(in_ECX + 0xe8) != '\0')) {
      puVar2 = (undefined4 *)FUN_00458890();
      DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
      if ((DVar3 & 0x10) == 0) {
        piVar1 = (int *)(*(int *)(in_ECX + 0xe8) + -8);
        if (piVar1 != &DAT_00bfe124) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_00589de0();
      }
    }
  }
  return;
}

