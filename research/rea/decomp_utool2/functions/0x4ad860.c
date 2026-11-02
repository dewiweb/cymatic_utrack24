// rea decompile_all
// name: FUN_004ad860
// address: 0x4ad860
// body: available
// range: 0x4ad860-0x4ad903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004ad8c3) */
/* WARNING: Removing unreachable block (ram,0x004ad8c9) */
/* WARNING: Removing unreachable block (ram,0x004ad8d0) */
/* WARNING: Removing unreachable block (ram,0x004ad8d6) */
/* WARNING: Removing unreachable block (ram,0x004ad8d9) */
/* WARNING: Removing unreachable block (ram,0x004ad8df) */
/* WARNING: Removing unreachable block (ram,0x004ad8ea) */
/* WARNING: Removing unreachable block (ram,0x004ad8f0) */

void FUN_004ad860(uint param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (param_1 < (uint)in_ECX[2]) {
    iVar1 = *in_ECX + param_1 * 4;
    FUN_004afd80(*(undefined4 *)(*in_ECX + param_1 * 4));
    in_ECX[2] = in_ECX[2] + -1;
    if (0 < (int)(in_ECX[2] - param_1)) {
      FUN_004c1df0(iVar1,iVar1 + 4,(in_ECX[2] - param_1) * 4);
    }
  }
  iVar1 = in_ECX[2];
  if ((iVar1 * 2 < in_ECX[1]) && (iVar1 < in_ECX[1])) {
    FUN_00409cf0(iVar1);
  }
  return;
}

