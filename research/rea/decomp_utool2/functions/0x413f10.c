// rea decompile_all
// name: FUN_00413f10
// address: 0x413f10
// body: available
// range: 0x413f10-0x41410f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00413fc3) */
/* WARNING: Removing unreachable block (ram,0x00413f62) */
/* WARNING: Removing unreachable block (ram,0x00414038) */

void FUN_00413f10(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *in_EDX;
  int *piVar4;
  int *piVar5;
  
  iVar2 = (int)param_1 - (int)in_ECX >> 2;
  if (iVar2 < 0x29) {
    iVar2 = *in_EDX;
    if (iVar2 < *in_ECX) {
      *in_EDX = *in_ECX;
      *in_ECX = iVar2;
    }
    iVar2 = *param_1;
    if (iVar2 < *in_EDX) {
      *param_1 = *in_EDX;
      *in_EDX = iVar2;
      if (iVar2 < *in_ECX) {
        *in_EDX = *in_ECX;
        *in_ECX = iVar2;
      }
    }
  }
  else {
    iVar2 = iVar2 + 1;
    iVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    piVar1 = in_ECX + iVar3;
    iVar2 = *piVar1;
    if (iVar2 < *in_ECX) {
      *piVar1 = *in_ECX;
      *in_ECX = iVar2;
    }
    iVar2 = in_ECX[iVar3 * 2];
    if (iVar2 < *piVar1) {
      in_ECX[iVar3 * 2] = *piVar1;
      *piVar1 = iVar2;
      if (iVar2 < *in_ECX) {
        *piVar1 = *in_ECX;
        *in_ECX = iVar2;
      }
    }
    iVar2 = *in_EDX;
    piVar4 = in_EDX + -iVar3;
    if (iVar2 < *piVar4) {
      *in_EDX = *piVar4;
      *piVar4 = iVar2;
    }
    iVar2 = in_EDX[iVar3];
    if (iVar2 < *in_EDX) {
      in_EDX[iVar3] = *in_EDX;
      *in_EDX = iVar2;
      if (iVar2 < *piVar4) {
        *in_EDX = *piVar4;
        *piVar4 = iVar2;
      }
    }
    piVar5 = param_1 + iVar3 * -2;
    piVar4 = param_1 + -iVar3;
    iVar2 = *piVar4;
    if (iVar2 < *piVar5) {
      *piVar4 = *piVar5;
      *piVar5 = iVar2;
    }
    iVar2 = *param_1;
    if (iVar2 < *piVar4) {
      *param_1 = *piVar4;
      *piVar4 = iVar2;
      if (iVar2 < *piVar5) {
        *piVar4 = *piVar5;
        *piVar5 = iVar2;
      }
    }
    iVar2 = *in_EDX;
    if (iVar2 < *piVar1) {
      *in_EDX = *piVar1;
      *piVar1 = iVar2;
    }
    iVar2 = *piVar4;
    if (iVar2 < *in_EDX) {
      *piVar4 = *in_EDX;
      *in_EDX = iVar2;
      if (iVar2 < *piVar1) {
        *in_EDX = *piVar1;
        *piVar1 = iVar2;
        return;
      }
    }
  }
  return;
}

