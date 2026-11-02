// rea decompile_all
// name: FUN_005d6760
// address: 0x5d6760
// body: available
// range: 0x5d6760-0x5d6806 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d6760(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  int in_EDX;
  int *piVar5;
  int *piVar6;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  
  iVar2 = (int)(double)CONCAT44(in_XMM1_Db,in_XMM1_Da);
  iVar1 = *(int *)(in_ECX + 0x1c);
  piVar3 = *(int **)(iVar1 + 0xb24 + param_3 * 4);
  if (*(int *)(iVar1 + 0x1c) <= param_3) {
    *(int *)(iVar1 + 0x1c) = param_3 + 1;
  }
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_004c5556(1,0x208);
    *(int **)(iVar1 + 0xb24 + param_3 * 4) = piVar3;
  }
  piVar5 = &DAT_00be51a8;
  piVar6 = piVar3;
  for (iVar4 = 0x82; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  *piVar3 = param_3 >> 1;
  if (*(int *)(iVar1 + 0xd84) != 0) {
    piVar3[0x7d] = 1;
    piVar3[0x7e] = *(int *)(in_EDX + iVar2 * 4);
    piVar3[0x7f] = *(int *)(param_1 + iVar2 * 4);
    *(undefined8 *)(piVar3 + 0x80) = *(undefined8 *)(param_2 + iVar2 * 8);
  }
  return;
}

