// rea decompile_all
// name: FUN_00672820
// address: 0x672820
// body: available
// range: 0x672820-0x67294b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00672820(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int *in_ECX;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float in_XMM1_Da;
  
  fVar5 = 0.0;
  uVar7 = in_ECX[1] * in_ECX[1];
  iVar8 = uVar7 - 1;
  if (-1 < iVar8) {
    iVar10 = iVar8;
    if (3 < (int)uVar7) {
      uVar9 = uVar7 >> 2;
      pfVar6 = (float *)(*in_ECX + -8 + iVar8 * 4);
      iVar10 = iVar8 + uVar9 * -4;
      do {
        pfVar1 = pfVar6 + 2;
        pfVar2 = pfVar6 + 1;
        fVar4 = *pfVar6;
        pfVar3 = pfVar6 + -1;
        pfVar6 = pfVar6 + -4;
        fVar5 = fVar5 + *pfVar1 + *pfVar2 + fVar4 + *pfVar3;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (-1 < iVar10) {
      pfVar6 = (float *)(*in_ECX + iVar10 * 4);
      do {
        fVar4 = *pfVar6;
        pfVar6 = pfVar6 + -1;
        iVar10 = iVar10 + -1;
        fVar5 = fVar5 + fVar4;
      } while (-1 < iVar10);
    }
  }
  if (-1 < iVar8) {
    if (3 < (int)uVar7) {
      fVar4 = in_XMM1_Da / fVar5;
      do {
        *(float *)(*in_ECX + iVar8 * 4) = fVar4 * *(float *)(*in_ECX + iVar8 * 4);
        *(float *)(*in_ECX + -4 + iVar8 * 4) = *(float *)(*in_ECX + -4 + iVar8 * 4) * fVar4;
        *(float *)(*in_ECX + -8 + iVar8 * 4) = fVar4 * *(float *)(*in_ECX + -8 + iVar8 * 4);
        *(float *)(*in_ECX + -0xc + iVar8 * 4) = *(float *)(*in_ECX + -0xc + iVar8 * 4) * fVar4;
        iVar8 = iVar8 + -4;
      } while (2 < iVar8);
    }
    if (-1 < iVar8) {
      do {
        *(float *)(*in_ECX + iVar8 * 4) = (in_XMM1_Da / fVar5) * *(float *)(*in_ECX + iVar8 * 4);
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
  }
  return;
}

