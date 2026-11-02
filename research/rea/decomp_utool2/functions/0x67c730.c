// rea decompile_all
// name: FUN_0067c730
// address: 0x67c730
// body: available
// range: 0x67c730-0x67c809 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067c730(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_0044db90(&local_18,in_ECX + 1);
  if ((0 < local_10) && (0 < local_c)) {
    iVar4 = local_14 - in_ECX[2];
    iVar1 = local_c + iVar4;
    if (iVar1 < in_ECX[4]) {
      in_ECX[4] = iVar1;
    }
    local_18 = local_18 + local_10;
    if (local_18 < in_ECX[3] + in_ECX[1]) {
      iVar3 = in_ECX[1];
      if (local_18 < in_ECX[1]) {
        iVar3 = local_18;
      }
      in_ECX[1] = iVar3;
      in_ECX[3] = local_18 - iVar3;
    }
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        iVar2 = in_ECX[6] * iVar3;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*in_ECX + iVar2 * 4) = 0;
      } while (iVar3 < iVar4);
    }
    iVar3 = *param_1 + (local_14 - param_1[2]) * param_1[6] * 4;
    for (; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      FUN_0067ca70(iVar4,iVar3);
      iVar3 = iVar3 + param_1[6] * 4;
    }
    *(undefined1 *)(in_ECX + 7) = 1;
    return;
  }
  *(undefined1 *)(in_ECX + 7) = 0;
  in_ECX[4] = 0;
  return;
}

