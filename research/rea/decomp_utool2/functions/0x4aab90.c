// rea decompile_all
// name: FUN_004aab90
// address: 0x4aab90
// body: available
// range: 0x4aab90-0x4aabfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aab90(void)

{
  LPCWSTR lpCaption;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_00458890();
  lpCaption = (LPCWSTR)*puVar1;
  puVar1 = (undefined4 *)FUN_00458890();
  iVar2 = MessageBoxW((HWND)in_ECX[3],(LPCWSTR)*puVar1,lpCaption,in_ECX[2]);
  if ((iVar2 == 6) || (iVar2 == 1)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    if (iVar2 == 7) {
      uVar3 = 2;
    }
  }
  if ((int *)in_ECX[6] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[6] + 4))(uVar3);
  }
  (**(code **)*in_ECX)(1);
  return;
}

