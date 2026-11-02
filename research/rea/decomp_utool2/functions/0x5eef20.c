// rea decompile_all
// name: FUN_005eef20
// address: 0x5eef20
// body: available
// range: 0x5eef20-0x5eefcc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005eef20(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 *param_13,
                undefined4 param_14)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_EDX;
  undefined4 *puVar4;
  
  FUN_005fcb60(param_6,param_1);
  puVar4 = param_13 + 1;
  *puVar4 = 0;
  *param_13 = 2;
  param_13[3] = param_14;
  param_13[9] = param_1;
  iVar2 = FUN_005eeac0(param_2,param_3,param_4 - param_6,param_6,param_7,param_8,param_9,param_10,
                       param_5,param_11,puVar4,puVar4);
  uVar3 = 0;
  param_13[4] = param_6;
  if (param_6 != 0) {
    puVar4 = param_13 + 5;
    do {
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *puVar4 = *(undefined4 *)(in_EDX + iVar1);
      puVar4 = puVar4 + 1;
    } while (uVar3 < param_6);
  }
  return param_5 * param_6 + param_13[0x48] + iVar2 + 8;
}

