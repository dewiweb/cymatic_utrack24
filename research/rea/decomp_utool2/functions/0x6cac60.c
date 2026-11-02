// rea decompile_all
// name: FUN_006cac60
// address: 0x6cac60
// body: available
// range: 0x6cac60-0x6cad5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006cac60(int param_1,int param_2)

{
  int *in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  int local_58;
  double local_50;
  
  local_58 = *in_ECX;
  iVar3 = in_ECX[2] + -1;
  local_50 = 10000000000.0;
  if (-1 < iVar3) {
    iVar1 = iVar3 * 0x38;
    do {
      iVar2 = *in_ECX + iVar1;
      if ((((*(int *)(iVar2 + 0x10) <= param_1) && (*(int *)(iVar2 + 0x14) <= param_2)) &&
          (param_1 < *(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x10))) &&
         (param_2 < *(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x14))) {
        return iVar2;
      }
      dVar4 = __hypot((double)((*(int *)(iVar2 + 0x18) / 2 + *(int *)(iVar2 + 0x10)) - param_1),
                      (double)((*(int *)(iVar2 + 0x1c) / 2 + *(int *)(iVar2 + 0x14)) - param_2));
      if ((double)(int)dVar4 < local_50) {
        local_58 = iVar2;
        local_50 = (double)(int)dVar4;
      }
      iVar1 = iVar1 + -0x38;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return local_58;
}

