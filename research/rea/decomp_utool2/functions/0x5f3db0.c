// rea decompile_all
// name: FUN_005f3db0
// address: 0x5f3db0
// body: available
// range: 0x5f3db0-0x5f3e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f3db0(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  
  pcVar1 = *(code **)(param_3[1] + 0x10);
  if (pcVar1 != (code *)0x0) {
    iVar3 = (*pcVar1)(param_3,*(undefined4 *)(param_3[1] + 0x2c));
    if (iVar3 != 0) {
      *param_2 = 0;
      *(undefined4 *)*param_3 = 4;
      return 0;
    }
  }
  if ((*param_2 != 0) &&
     ((puVar2 = (undefined4 *)param_3[1], puVar2[0x387] == 0 || ((uint)puVar2[0x5fc] < 0x15)))) {
    iVar3 = (*(code *)*puVar2)(param_3,param_1,param_2,puVar2[0xb]);
    if (iVar3 != 2) {
      if (*param_2 == 0) {
        if (iVar3 == 1) {
LAB_005f3e37:
          *(undefined4 *)*param_3 = 4;
          return 0;
        }
        pcVar1 = *(code **)(param_3[1] + 0x10);
        if (pcVar1 != (code *)0x0) {
          iVar3 = (*pcVar1)(param_3,*(undefined4 *)(param_3[1] + 0x2c));
          if (iVar3 != 0) goto LAB_005f3e37;
        }
      }
      return 1;
    }
  }
  *(undefined4 *)*param_3 = 7;
  return 0;
}

