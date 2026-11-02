// rea decompile_all
// name: FUN_005c2f40
// address: 0x5c2f40
// body: available
// range: 0x5c2f40-0x5c2fe0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c2f40(int *param_1,int param_2,int param_3)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *param_1 + 1;
  iVar1 = iVar3;
  if (iVar3 < param_1[1] + iVar3) {
    iVar1 = param_1[1] + iVar3;
  }
  iVar5 = *(int *)(in_ECX + 0x24) + -1;
  if (-1 < iVar5) {
    iVar2 = iVar5 * 0x28;
    do {
      iVar4 = *(int *)(in_ECX + 0x1c) + iVar2;
      if ((iVar3 <= (int)(uint)*(byte *)(iVar4 + 2)) && ((int)(uint)*(byte *)(iVar4 + 2) < iVar1)) {
        if (param_2 == in_ECX + 0xdc) {
          FUN_005c2d40(iVar4);
          FUN_00425dd0(FUN_00410548,iVar4);
        }
        else if (*(int *)(*(int *)(param_2 + 0x44) + iVar4) != param_3) {
          *(int *)(*(int *)(param_2 + 0x44) + iVar4) = param_3;
          FUN_005c2e90(iVar4,param_2);
        }
      }
      iVar2 = iVar2 + -0x28;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}

