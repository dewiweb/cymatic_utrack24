// rea decompile_all
// name: FUN_0041ef90
// address: 0x41ef90
// body: available
// range: 0x41ef90-0x41f017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041ef90(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int in_ECX;
  int in_EDX;
  
  if (param_1 < in_EDX) {
    while( true ) {
      iVar6 = (in_EDX + -1) / 2;
      puVar1 = *(uint **)(in_ECX + iVar6 * 4);
      uVar2 = puVar1[1];
      uVar3 = *(uint *)*param_2;
      uVar4 = ((uint *)*param_2)[1];
      if ((*puVar1 == uVar3) && (uVar2 == uVar4)) break;
      if (((int)uVar2 < (int)uVar4) || (((int)uVar2 <= (int)uVar4 && (*puVar1 <= uVar3)))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((-1 < (int)((uint)!bVar5 * 2 + -1)) ||
         (*(uint **)(in_ECX + in_EDX * 4) = puVar1, in_EDX = iVar6, iVar6 <= param_1)) break;
    }
  }
  *(int *)(in_ECX + in_EDX * 4) = *param_2;
  return;
}

