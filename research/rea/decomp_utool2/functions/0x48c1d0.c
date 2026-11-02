// rea decompile_all
// name: FUN_0048c1d0
// address: 0x48c1d0
// body: available
// range: 0x48c1d0-0x48c1db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048c1d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *in_EDX;
  int *piVar5;
  int *piVar6;
  
  iVar3 = (int)param_1 - (int)in_ECX >> 3;
  if (iVar3 < 0x29) {
    iVar3 = *in_EDX;
    if (iVar3 < *in_ECX) {
      iVar4 = in_EDX[1];
      *in_EDX = *in_ECX;
      in_EDX[1] = in_ECX[1];
      *in_ECX = iVar3;
      in_ECX[1] = iVar4;
    }
    iVar3 = *param_1;
    if (iVar3 < *in_EDX) {
      iVar4 = param_1[1];
      *param_1 = *in_EDX;
      param_1[1] = in_EDX[1];
      *in_EDX = iVar3;
      in_EDX[1] = iVar4;
      if (iVar3 < *in_ECX) {
        *in_EDX = *in_ECX;
        in_EDX[1] = in_ECX[1];
        *in_ECX = iVar3;
        in_ECX[1] = iVar4;
      }
    }
  }
  else {
    iVar3 = iVar3 + 1;
    iVar4 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
    iVar3 = in_ECX[iVar4 * 2];
    piVar1 = in_ECX + iVar4 * 2;
    if (iVar3 < *in_ECX) {
      iVar2 = piVar1[1];
      *piVar1 = *in_ECX;
      piVar1[1] = in_ECX[1];
      *in_ECX = iVar3;
      in_ECX[1] = iVar2;
    }
    iVar3 = in_ECX[iVar4 * 4];
    if (iVar3 < *piVar1) {
      iVar2 = in_ECX[iVar4 * 4 + 1];
      in_ECX[iVar4 * 4] = *piVar1;
      in_ECX[iVar4 * 4 + 1] = piVar1[1];
      *piVar1 = iVar3;
      piVar1[1] = iVar2;
      if (iVar3 < *in_ECX) {
        *piVar1 = *in_ECX;
        piVar1[1] = in_ECX[1];
        *in_ECX = iVar3;
        in_ECX[1] = iVar2;
      }
    }
    iVar3 = *in_EDX;
    piVar5 = in_EDX + iVar4 * -2;
    if (iVar3 < *piVar5) {
      iVar2 = in_EDX[1];
      *in_EDX = *piVar5;
      in_EDX[1] = piVar5[1];
      piVar5[1] = iVar2;
      *piVar5 = iVar3;
    }
    iVar3 = in_EDX[iVar4 * 2];
    if (iVar3 < *in_EDX) {
      iVar2 = in_EDX[iVar4 * 2 + 1];
      in_EDX[iVar4 * 2] = *in_EDX;
      in_EDX[iVar4 * 2 + 1] = in_EDX[1];
      *in_EDX = iVar3;
      in_EDX[1] = iVar2;
      if (iVar3 < *piVar5) {
        *in_EDX = *piVar5;
        in_EDX[1] = piVar5[1];
        *piVar5 = iVar3;
        piVar5[1] = iVar2;
      }
    }
    piVar6 = param_1 + iVar4 * -2;
    piVar5 = param_1 + iVar4 * -4;
    iVar3 = *piVar6;
    if (iVar3 < *piVar5) {
      iVar4 = piVar6[1];
      *piVar6 = *piVar5;
      piVar6[1] = piVar5[1];
      *piVar5 = iVar3;
      piVar5[1] = iVar4;
    }
    iVar3 = *param_1;
    if (iVar3 < *piVar6) {
      iVar4 = param_1[1];
      *param_1 = *piVar6;
      param_1[1] = piVar6[1];
      *piVar6 = iVar3;
      piVar6[1] = iVar4;
      if (iVar3 < *piVar5) {
        *piVar6 = *piVar5;
        piVar6[1] = piVar5[1];
        *piVar5 = iVar3;
        piVar5[1] = iVar4;
      }
    }
    iVar3 = *in_EDX;
    if (iVar3 < *piVar1) {
      iVar4 = in_EDX[1];
      *in_EDX = *piVar1;
      in_EDX[1] = piVar1[1];
      *piVar1 = iVar3;
      piVar1[1] = iVar4;
    }
    iVar3 = *piVar6;
    if (iVar3 < *in_EDX) {
      iVar4 = piVar6[1];
      *piVar6 = *in_EDX;
      piVar6[1] = in_EDX[1];
      *in_EDX = iVar3;
      in_EDX[1] = iVar4;
      if (iVar3 < *piVar1) {
        *in_EDX = *piVar1;
        in_EDX[1] = piVar1[1];
        *piVar1 = iVar3;
        piVar1[1] = iVar4;
        return;
      }
    }
  }
  return;
}

