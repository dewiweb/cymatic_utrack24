// rea decompile_all
// name: FUN_006244b0
// address: 0x6244b0
// body: available
// range: 0x6244b0-0x624516 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006244b0(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *piVar3;
  
  if (in_ECX[1] != param_2) {
    return 0;
  }
  piVar3 = (int *)*in_ECX;
  uVar2 = in_ECX[1];
  while (uVar1 = uVar2 - 4, 3 < uVar2) {
    if (*piVar3 != *param_1) goto LAB_006244dc;
    piVar3 = piVar3 + 1;
    param_1 = param_1 + 1;
    uVar2 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_006244dc:
    if ((char)*piVar3 != (char)*param_1) {
      return 0;
    }
    if (uVar1 != 0xfffffffd) {
      if (*(char *)((int)piVar3 + 1) != *(char *)((int)param_1 + 1)) {
        return 0;
      }
      if (uVar1 != 0xfffffffe) {
        if (*(char *)((int)piVar3 + 2) != *(char *)((int)param_1 + 2)) {
          return 0;
        }
        if ((uVar1 != 0xffffffff) && (*(char *)((int)piVar3 + 3) != *(char *)((int)param_1 + 3))) {
          return 0;
        }
      }
    }
  }
  return 1;
}

