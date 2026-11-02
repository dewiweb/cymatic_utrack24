// rea decompile_all
// name: FUN_006628d0
// address: 0x6628d0
// body: available
// range: 0x6628d0-0x6629d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006628d0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[99];
  if (param_2 == 0) {
    if (*(char *)((int)param_1 + 0x4a) == '\0') {
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1[0x68] + 4);
    }
    else {
      *(code **)(iVar1 + 4) = FUN_00662860;
      if (*(int *)(iVar1 + 0xc) == 0) {
        uVar2 = (**(code **)(param_1[1] + 0x1c))
                          (param_1,*(undefined4 *)(iVar1 + 8),0,*(undefined4 *)(iVar1 + 0x10),1);
        *(undefined4 *)(iVar1 + 0xc) = uVar2;
        *(undefined4 *)(iVar1 + 0x18) = 0;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        return;
      }
    }
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    return;
  }
  if (param_2 != 2) {
    if (param_2 != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)(param_1);
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      return;
    }
    if (*(int *)(iVar1 + 8) == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)(param_1);
    }
    *(code **)(iVar1 + 4) = FUN_006627c0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    return;
  }
  if (*(int *)(iVar1 + 8) == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)(param_1);
  }
  *(code **)(iVar1 + 4) = FUN_00662720;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return;
}

