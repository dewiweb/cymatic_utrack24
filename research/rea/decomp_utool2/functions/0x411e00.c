// rea decompile_all
// name: FUN_00411e00
// address: 0x411e00
// body: available
// range: 0x411e00-0x412071 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00411f3c) */

void FUN_00411e00(double *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double *in_ECX;
  double *in_EDX;
  double *pdVar4;
  double *pdVar5;
  
  dVar1 = *in_ECX;
  iVar3 = (int)param_1 - (int)in_ECX >> 3;
  if (iVar3 < 0x29) {
    dVar2 = *in_EDX;
    if (dVar2 < dVar1) {
      *in_EDX = dVar1;
      *in_ECX = dVar2;
    }
    dVar1 = *param_1;
    if (dVar1 < *in_EDX) {
      *param_1 = *in_EDX;
      *in_EDX = dVar1;
      if (dVar1 < *in_ECX) {
        *in_EDX = *in_ECX;
        *in_ECX = dVar1;
      }
    }
  }
  else {
    iVar3 = iVar3 + 1;
    iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
    dVar2 = in_ECX[iVar3];
    if (dVar2 < dVar1) {
      in_ECX[iVar3] = dVar1;
      *in_ECX = dVar2;
    }
    dVar1 = in_ECX[iVar3 * 2];
    if (dVar1 < in_ECX[iVar3]) {
      in_ECX[iVar3 * 2] = in_ECX[iVar3];
      in_ECX[iVar3] = dVar1;
      if (dVar1 < *in_ECX) {
        in_ECX[iVar3] = *in_ECX;
        *in_ECX = dVar1;
      }
    }
    dVar1 = *in_EDX;
    pdVar4 = in_EDX + -iVar3;
    if (dVar1 < *pdVar4) {
      *in_EDX = *pdVar4;
      *pdVar4 = dVar1;
    }
    dVar1 = in_EDX[iVar3];
    if (dVar1 < *in_EDX) {
      in_EDX[iVar3] = *in_EDX;
      *in_EDX = dVar1;
      if (dVar1 < *pdVar4) {
        *in_EDX = *pdVar4;
        *pdVar4 = dVar1;
      }
    }
    pdVar4 = param_1 + iVar3 * -2;
    pdVar5 = param_1 + -iVar3;
    dVar1 = *pdVar5;
    if (dVar1 < *pdVar4) {
      *pdVar5 = *pdVar4;
      *pdVar4 = dVar1;
    }
    dVar1 = *param_1;
    if (dVar1 < *pdVar5) {
      *param_1 = *pdVar5;
      *pdVar5 = dVar1;
      if (dVar1 < *pdVar4) {
        *pdVar5 = *pdVar4;
        *pdVar4 = dVar1;
      }
    }
    dVar1 = *in_EDX;
    if (dVar1 < in_ECX[iVar3]) {
      *in_EDX = in_ECX[iVar3];
      in_ECX[iVar3] = dVar1;
    }
    dVar1 = *pdVar5;
    if (dVar1 < *in_EDX) {
      *pdVar5 = *in_EDX;
      *in_EDX = dVar1;
      if (dVar1 < in_ECX[iVar3]) {
        *in_EDX = in_ECX[iVar3];
        in_ECX[iVar3] = dVar1;
        return;
      }
    }
  }
  return;
}

