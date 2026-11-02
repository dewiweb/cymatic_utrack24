// rea decompile_all
// name: FUN_00476b80
// address: 0x476b80
// body: available
// range: 0x476b80-0x476c18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00476b80(undefined1 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int in_ECX;
  byte *pbVar8;
  
  iVar7 = 0x100 - param_3;
  bVar1 = param_2[1];
  bVar2 = param_2[2];
  bVar3 = param_2[3];
  pbVar8 = param_2 + *(int *)(*(int *)(in_ECX + 0x4c) + 0xc);
  bVar4 = pbVar8[1];
  bVar5 = pbVar8[2];
  bVar6 = pbVar8[3];
  *param_1 = (char)((uint)*param_2 * iVar7 + 0x80 + (uint)*pbVar8 * param_3 >> 8);
  param_1[3] = (char)((uint)bVar3 * iVar7 + 0x80 + (uint)bVar6 * param_3 >> 8);
  param_1[1] = (char)((uint)bVar1 * iVar7 + 0x80 + (uint)bVar4 * param_3 >> 8);
  param_1[2] = (char)((uint)bVar2 * iVar7 + 0x80 + (uint)bVar5 * param_3 >> 8);
  return;
}

