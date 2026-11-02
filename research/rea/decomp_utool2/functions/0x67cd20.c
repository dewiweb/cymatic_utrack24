// rea decompile_all
// name: FUN_0067cd20
// address: 0x67cd20
// body: available
// range: 0x67cd20-0x67cd92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067cd20(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *piVar5;
  float in_XMM1_Da;
  int local_8;
  
  piVar5 = (int *)*in_ECX;
  local_8 = 0;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar2 = *piVar5;
      piVar1 = piVar5 + in_ECX[6];
      while (iVar2 = iVar2 + -1, 0 < iVar2) {
        piVar5 = piVar5 + 2;
        iVar4 = *piVar5 * (int)(in_XMM1_Da * 256.0) >> 8;
        iVar3 = 0xff;
        if (iVar4 < 0xff) {
          iVar3 = iVar4;
        }
        *piVar5 = iVar3;
      }
      local_8 = local_8 + 1;
      piVar5 = piVar1;
    } while (local_8 < (int)in_ECX[4]);
  }
  return;
}

