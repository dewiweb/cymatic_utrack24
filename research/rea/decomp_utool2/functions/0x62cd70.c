// rea decompile_all
// name: FUN_0062cd70
// address: 0x62cd70
// body: available
// range: 0x62cd70-0x62cde1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062cd70(char *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    param_2 = param_2 - (int)param_1;
    uVar3 = param_2 + 4U & 0xfffffffc;
    puVar2 = (undefined4 *)FUN_004bfe22(uVar3 + 0xb);
    puVar2[1] = uVar3;
    puVar1 = puVar2 + 2;
    *puVar2 = 0;
    FUN_004c2c30(puVar1,param_1,param_2);
    *(undefined1 *)((int)puVar1 + param_2) = 0;
    *in_ECX = puVar1;
    return;
  }
  *in_ECX = &DAT_00bfe12c;
  return;
}

