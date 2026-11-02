// rea decompile_all
// name: FUN_00425c00
// address: 0x425c00
// body: available
// range: 0x425c00-0x425cbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00425c00(int param_1)

{
  float *in_ECX;
  int iVar1;
  float *in_EDX;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (0 < param_1) {
    fVar6 = *in_EDX;
    iVar3 = param_1 + -1;
    pfVar2 = in_EDX + 1;
    fVar7 = fVar6;
    if (3 < iVar3) {
      iVar1 = (param_1 - 5U >> 2) + 1;
      iVar3 = iVar3 + iVar1 * -4;
      do {
        fVar4 = *pfVar2;
        fVar5 = fVar4;
        if (fVar6 <= fVar4) {
          fVar5 = fVar6;
        }
        fVar6 = pfVar2[1];
        if (fVar4 <= fVar7) {
          fVar4 = fVar7;
        }
        fVar7 = fVar6;
        if (fVar5 <= fVar6) {
          fVar7 = fVar5;
        }
        fVar5 = pfVar2[2];
        if (fVar6 <= fVar4) {
          fVar6 = fVar4;
        }
        fVar4 = fVar5;
        if (fVar7 <= fVar5) {
          fVar4 = fVar7;
        }
        fVar7 = pfVar2[3];
        if (fVar5 <= fVar6) {
          fVar5 = fVar6;
        }
        pfVar2 = pfVar2 + 4;
        fVar6 = fVar7;
        if (fVar4 <= fVar7) {
          fVar6 = fVar4;
        }
        if (fVar7 <= fVar5) {
          fVar7 = fVar5;
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    while (fVar4 = fVar6, 0 < iVar3) {
      fVar6 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      iVar3 = iVar3 + -1;
      fVar5 = fVar6;
      if (fVar6 <= fVar7) {
        fVar5 = fVar7;
      }
      fVar7 = fVar5;
      if (fVar4 <= fVar6) {
        fVar6 = fVar4;
      }
    }
    *in_ECX = fVar4;
    in_ECX[1] = fVar7;
    return;
  }
  *in_ECX = 0.0;
  in_ECX[1] = 0.0;
  return;
}

