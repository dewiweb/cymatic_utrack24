// rea decompile_all
// name: FUN_00662860
// address: 0x662860
// body: available
// range: 0x662860-0x6628c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00662860(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int *param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = param_6;
  iVar3 = param_1;
  iVar2 = *(int *)(param_1 + 0x18c);
  piVar1 = (int *)(param_1 + 0x1a0);
  uVar5 = param_7 - *param_6;
  if (*(uint *)(iVar2 + 0x10) < (uint)(param_7 - *param_6)) {
    uVar5 = *(uint *)(iVar2 + 0x10);
  }
  param_1 = 0;
  (**(code **)(*piVar1 + 4))
            (iVar3,param_2,param_3,param_4,*(undefined4 *)(iVar2 + 0xc),&param_1,uVar5);
  (**(code **)(*(int *)(iVar3 + 0x1a8) + 4))
            (iVar3,*(undefined4 *)(iVar2 + 0xc),param_5 + *piVar4 * 4,param_1);
  *piVar4 = *piVar4 + param_1;
  return;
}

