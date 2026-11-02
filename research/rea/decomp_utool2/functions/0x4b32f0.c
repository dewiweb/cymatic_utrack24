// rea decompile_all
// name: FUN_004b32f0
// address: 0x4b32f0
// body: available
// range: 0x4b32f0-0x4b337f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004b32f0(int *param_1)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (in_ECX[2] != param_1[2]) {
    return 0;
  }
  iVar5 = in_ECX[2] + -1;
  if (-1 < iVar5) {
    iVar4 = iVar5 * 0x38;
    do {
      iVar1 = *in_ECX;
      iVar3 = *param_1 + iVar4;
      cVar2 = FUN_004af990(iVar3);
      if (cVar2 == '\0') {
        return 0;
      }
      cVar2 = FUN_004af990(iVar3 + 0x10);
      if (cVar2 == '\0') {
        return 0;
      }
      if (*(double *)(iVar1 + iVar4 + 0x20) != *(double *)(iVar3 + 0x20)) {
        return 0;
      }
      if (*(char *)(iVar1 + iVar4 + 0x30) != *(char *)(iVar3 + 0x30)) {
        return 0;
      }
      iVar4 = iVar4 + -0x38;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return 1;
}

