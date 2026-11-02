// rea decompile_all
// name: FUN_00663ba0
// address: 0x663ba0
// body: available
// range: 0x663ba0-0x663c3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00663ba0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
                 int *param_6,int param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = *param_6;
  iVar3 = *(int *)(param_1 + 0x1a0);
  if (*(char *)(iVar3 + 0x24) == '\0') {
    uVar4 = 2;
    if (*(uint *)(iVar3 + 0x2c) < 2) {
      uVar4 = *(uint *)(iVar3 + 0x2c);
    }
    puVar1 = (undefined4 *)(param_5 + iVar2 * 4);
    local_c = *puVar1;
    uVar5 = param_7 - iVar2;
    if (uVar4 <= (uint)(param_7 - iVar2)) {
      uVar5 = uVar4;
    }
    if (uVar5 < 2) {
      local_8 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined1 *)(iVar3 + 0x24) = 1;
    }
    else {
      local_8 = puVar1[1];
    }
    (**(code **)(iVar3 + 0xc))(param_1,param_2,*param_3,&local_c);
  }
  else {
    FUN_004c2c30(*(undefined4 *)(param_5 + iVar2 * 4),*(undefined4 *)(iVar3 + 0x20),
                 *(undefined4 *)(iVar3 + 0x28));
    *(undefined1 *)(iVar3 + 0x24) = 0;
    uVar5 = 1;
  }
  *param_6 = *param_6 + uVar5;
  *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) - uVar5;
  if (*(char *)(iVar3 + 0x24) == '\0') {
    *param_3 = *param_3 + 1;
  }
  return;
}

