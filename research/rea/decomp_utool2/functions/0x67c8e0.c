// rea decompile_all
// name: FUN_0067c8e0
// address: 0x67c8e0
// body: available
// range: 0x67c8e0-0x67c9d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067c8e0(void)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  piVar1 = in_ECX + 1;
  FUN_0044db90(&local_18,piVar1);
  if ((0 < local_10) && (0 < local_c)) {
    local_14 = local_14 - in_ECX[2];
    local_c = local_14 + local_c;
    iVar2 = local_14;
    if (local_c < in_ECX[4]) {
      in_ECX[4] = local_c;
    }
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      *(undefined4 *)(*in_ECX + in_ECX[6] * iVar2 * 4) = 0;
    }
    if ((*piVar1 < local_18) || (local_10 + local_18 < in_ECX[3] + *piVar1)) {
      iVar2 = in_ECX[3] + *piVar1;
      if (local_10 + local_18 < in_ECX[3] + *piVar1) {
        iVar2 = local_10 + local_18;
      }
      iVar3 = local_c - local_14;
      piVar1 = (int *)(*in_ECX + in_ECX[6] * local_14 * 4);
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        if (*piVar1 != 0) {
          FUN_0067c9e0(piVar1,local_18 << 8,iVar2 << 8);
        }
        piVar1 = piVar1 + in_ECX[6];
      }
    }
    *(undefined1 *)(in_ECX + 7) = 1;
    return;
  }
  *(undefined1 *)(in_ECX + 7) = 0;
  in_ECX[4] = 0;
  return;
}

