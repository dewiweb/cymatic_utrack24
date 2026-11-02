// rea decompile_all
// name: FUN_006cfc30
// address: 0x6cfc30
// body: available
// range: 0x6cfc30-0x6cfcbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cfc30(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  if ((param_1 != 0) && (param_1 != in_ECX)) {
    iVar2 = *(int *)(in_ECX + 0xc);
    if (iVar2 == 0) {
      if (((*(byte *)(in_ECX + 0x68) & 1) != 0) && ((*(byte *)(param_1 + 0x68) & 1) != 0)) {
        piVar3 = (int *)FUN_006d1d80();
        iVar2 = FUN_006d1d80();
        if ((piVar3 != (int *)0x0) && (iVar2 != 0)) {
          (**(code **)(*piVar3 + 0x5c))(iVar2);
        }
      }
    }
    else {
      iVar1 = FUN_00462660(in_ECX);
      if (-1 < iVar1) {
        if (iVar1 + 1U < *(uint *)(iVar2 + 0x30)) {
          iVar2 = *(int *)(*(int *)(iVar2 + 0x28) + (iVar1 + 1U) * 4);
        }
        else {
          iVar2 = 0;
        }
        if (iVar2 != param_1) {
          iVar2 = FUN_00462660(param_1);
          if (-1 < iVar2) {
            if (iVar1 < iVar2) {
              iVar2 = iVar2 + -1;
            }
            FUN_006cfcc0(iVar1,iVar2);
            return;
          }
        }
      }
    }
  }
  return;
}

