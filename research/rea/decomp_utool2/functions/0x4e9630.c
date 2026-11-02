// rea decompile_all
// name: FUN_004e9630
// address: 0x4e9630
// body: available
// range: 0x4e9630-0x4e9705 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004e9630(undefined4 param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  FUN_00684960(in_ECX + 0x134);
  FUN_00684960(in_ECX + 0x16c);
  iVar2 = (int)(*(float *)(in_ECX + 0x164) + 10.0 + 10.0);
  if (*(float *)(in_ECX + 0x19c) != (float)(undefined *)0x0) {
    iVar2 = (int)(*(float *)(in_ECX + 0x19c) + 20.0 + (float)iVar2);
  }
  if (*(int *)(in_ECX + 0x1ac) != 0) {
    iVar2 = iVar2 + (*(int *)(in_ECX + 0x1ac) * 5 + 10) * 4;
  }
  iVar1 = iVar2 + 0x28;
  if ((*(byte *)(in_ECX + 0x2c4) & 2) == 0) {
    iVar1 = iVar2;
  }
  if ((int)((float)param_2 * 0.8) < iVar1) {
    iVar1 = (int)((float)param_2 * 0.8);
  }
  return iVar1;
}

