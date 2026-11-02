// rea decompile_all
// name: FUN_005c70f0
// address: 0x5c70f0
// body: available
// range: 0x5c70f0-0x5c71a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c70f0(void)

{
  int iVar1;
  float *in_ECX;
  uint in_EDX;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  float in_XMM1_Da;
  
  iVar1 = (int)(in_EDX + ((int)in_EDX >> 0x1f & 3U)) >> 2;
  if (((uint)in_ECX & 0xf) == 0) {
    if (0 < iVar1) {
      do {
        *in_ECX = *in_ECX * in_XMM1_Da;
        in_ECX[1] = in_ECX[1] * in_XMM1_Da;
        in_ECX[2] = in_ECX[2] * in_XMM1_Da;
        in_ECX[3] = in_ECX[3] * in_XMM1_Da;
        in_ECX = in_ECX + 4;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else if (0 < iVar1) {
    do {
      *in_ECX = *in_ECX * in_XMM1_Da;
      in_ECX[1] = in_ECX[1] * in_XMM1_Da;
      in_ECX[2] = in_ECX[2] * in_XMM1_Da;
      in_ECX[3] = in_ECX[3] * in_XMM1_Da;
      in_ECX = in_ECX + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  uVar3 = in_EDX & 3;
  if ((uVar3 != 0) && (iVar1 = 0, uVar3 != 0)) {
    if (3 < uVar3) {
      iVar4 = (uVar3 - 4 >> 2) + 1;
      iVar1 = iVar4 * 4;
      pfVar2 = in_ECX + 2;
      do {
        pfVar2[-2] = pfVar2[-2] * in_XMM1_Da;
        pfVar2[-1] = pfVar2[-1] * in_XMM1_Da;
        *pfVar2 = *pfVar2 * in_XMM1_Da;
        pfVar2[1] = pfVar2[1] * in_XMM1_Da;
        iVar4 = iVar4 + -1;
        pfVar2 = pfVar2 + 4;
      } while (iVar4 != 0);
    }
    for (; iVar1 < (int)uVar3; iVar1 = iVar1 + 1) {
      in_ECX[iVar1] = in_XMM1_Da * in_ECX[iVar1];
    }
  }
  return;
}

