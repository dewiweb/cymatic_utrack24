// rea decompile_all
// name: FUN_005e4da0
// address: 0x5e4da0
// body: available
// range: 0x5e4da0-0x5e4e30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e4da0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = param_1 - in_EDX;
  uVar5 = param_3 - param_2;
  iVar6 = 0;
  iVar1 = (int)uVar5 / iVar4;
  uVar3 = iVar1 * iVar4 >> 0x1f;
  if (in_ECX <= param_1) {
    param_1 = in_ECX;
  }
  if (in_EDX < param_1) {
    *(int *)(param_4 + in_EDX * 4) = param_2;
  }
  while (in_EDX = in_EDX + 1, in_EDX < param_1) {
    iVar6 = iVar6 + (((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) -
                    ((iVar1 * iVar4 ^ uVar3) - uVar3));
    if (iVar6 < iVar4) {
      param_2 = param_2 + iVar1;
    }
    else {
      iVar6 = iVar6 - iVar4;
      iVar2 = iVar1 + 1 + param_2;
      param_2 = param_2 + -1 + iVar1;
      if (-1 < (int)uVar5) {
        param_2 = iVar2;
      }
    }
    *(int *)(param_4 + in_EDX * 4) = param_2;
  }
  return;
}

