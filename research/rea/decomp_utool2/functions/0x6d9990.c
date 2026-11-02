// rea decompile_all
// name: FUN_006d9990
// address: 0x6d9990
// body: available
// range: 0x6d9990-0x6d9a92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006d9990(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_18 [20];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(undefined4 *)(*(int *)(param_2 + 0xe0) + 0x8c);
  if (*(int *)(param_2 + 0xec) != 0) {
    switch(uVar1) {
    case 0:
    case 1:
      puVar2 = (undefined4 *)FUN_0040dcd0(local_18,*(undefined4 *)(param_4 + 0x18));
      goto LAB_006d9a29;
    case 2:
      goto switchD_006d99d9_caseD_3;
    case 3:
      puVar2 = (undefined4 *)FUN_00418d70(local_18,*(undefined4 *)(param_4 + 0x1c));
      *param_1 = *puVar2;
      param_1[1] = puVar2[1];
      param_1[2] = puVar2[2];
      param_1[3] = puVar2[3];
    default:
switchD_006d99d9_default:
      return param_1;
    }
  }
  switch(uVar1) {
  case 0:
  case 1:
    puVar2 = (undefined4 *)FUN_0040dd10(local_18,*(undefined4 *)(param_4 + 0x18));
    break;
  case 2:
    puVar2 = (undefined4 *)FUN_00418d70(local_18,*(undefined4 *)(param_4 + 0x1c));
    break;
  case 3:
switchD_006d99d9_caseD_3:
    puVar2 = (undefined4 *)FUN_0040dd60(local_18,*(undefined4 *)(param_4 + 0x1c));
    break;
  default:
    goto switchD_006d99d9_default;
  }
LAB_006d9a29:
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  param_1[3] = puVar2[3];
  return param_1;
}

