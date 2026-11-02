// rea decompile_all
// name: FUN_00442db0
// address: 0x442db0
// body: available
// range: 0x442db0-0x442e70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442db0(float *param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_2 == 0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    return;
  }
  iVar1 = *in_ECX;
  uVar3 = param_2 - 1;
  fVar6 = *(float *)in_ECX[1];
  pfVar2 = (float *)in_ECX[1] + iVar1;
  fVar8 = fVar6;
  if (3 < uVar3) {
    iVar4 = (param_2 - 5U >> 2) + 1;
    do {
      fVar5 = *pfVar2;
      uVar3 = uVar3 - 4;
      pfVar2 = pfVar2 + iVar1;
      fVar7 = fVar5;
      if (fVar6 <= fVar5) {
        fVar7 = fVar6;
      }
      if (fVar5 <= fVar8) {
        fVar5 = fVar8;
      }
      fVar6 = *pfVar2;
      pfVar2 = pfVar2 + iVar1;
      fVar8 = fVar6;
      if (fVar7 <= fVar6) {
        fVar8 = fVar7;
      }
      if (fVar6 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar5 = *pfVar2;
      fVar7 = fVar5;
      if (fVar8 <= fVar5) {
        fVar7 = fVar8;
      }
      fVar8 = pfVar2[iVar1];
      if (fVar5 <= fVar6) {
        fVar5 = fVar6;
      }
      pfVar2 = pfVar2 + iVar1 + iVar1;
      fVar6 = fVar8;
      if (fVar7 <= fVar8) {
        fVar6 = fVar7;
      }
      if (fVar8 <= fVar5) {
        fVar8 = fVar5;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    fVar5 = *pfVar2;
    pfVar2 = pfVar2 + iVar1;
    fVar7 = fVar5;
    if (fVar6 <= fVar5) {
      fVar7 = fVar6;
    }
    if (fVar5 <= fVar8) {
      fVar5 = fVar8;
    }
    fVar6 = fVar7;
    fVar8 = fVar5;
  }
  if (fVar8 <= fVar6) {
    fVar8 = fVar6;
  }
  *param_1 = fVar6;
  param_1[1] = fVar8;
  return;
}

