// rea decompile_all
// name: FUN_006725b0
// address: 0x6725b0
// body: available
// range: 0x6725b0-0x67279a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006725b0(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  float in_XMM1_Da;
  float fVar14;
  double dVar15;
  
  iVar6 = in_ECX[1] >> 1;
  iVar4 = in_ECX[1] + -1;
  if (-1 < iVar4) {
    iVar8 = iVar4 - iVar6;
    do {
      iVar9 = in_ECX[1] + -1;
      if (-1 < iVar9) {
        iVar11 = iVar9 - iVar6;
        do {
          auVar13._0_8_ =
               (double)(iVar11 * iVar11 + iVar8 * iVar8) *
               (-1.0 / (double)(in_XMM1_Da * in_XMM1_Da + in_XMM1_Da * in_XMM1_Da));
          auVar13._8_8_ = 0;
          FUN_006f7ee0();
          iVar11 = iVar11 + -1;
          iVar7 = in_ECX[1] * iVar4 + iVar9;
          iVar9 = iVar9 + -1;
          *(float *)(*in_ECX + iVar7 * 4) = (float)auVar13._0_8_;
        } while (-1 < iVar9);
      }
      iVar4 = iVar4 + -1;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar4);
  }
  dVar15 = 0.0;
  uVar10 = in_ECX[1] * in_ECX[1];
  iVar4 = uVar10 - 1;
  if (-1 < iVar4) {
    iVar6 = iVar4;
    if (3 < (int)uVar10) {
      uVar12 = uVar10 >> 2;
      pfVar5 = (float *)(*in_ECX + -8 + iVar4 * 4);
      iVar6 = iVar4 + uVar12 * -4;
      do {
        pfVar1 = pfVar5 + 2;
        pfVar2 = pfVar5 + 1;
        fVar14 = *pfVar5;
        pfVar3 = pfVar5 + -1;
        pfVar5 = pfVar5 + -4;
        dVar15 = dVar15 + (double)*pfVar1 + (double)*pfVar2 + (double)fVar14 + (double)*pfVar3;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if (-1 < iVar6) {
      pfVar5 = (float *)(*in_ECX + iVar6 * 4);
      do {
        fVar14 = *pfVar5;
        pfVar5 = pfVar5 + -1;
        iVar6 = iVar6 + -1;
        dVar15 = dVar15 + (double)fVar14;
      } while (-1 < iVar6);
    }
  }
  if (-1 < iVar4) {
    if (3 < (int)uVar10) {
      fVar14 = (float)(1.0 / dVar15);
      do {
        *(float *)(*in_ECX + iVar4 * 4) = fVar14 * *(float *)(*in_ECX + iVar4 * 4);
        *(float *)(*in_ECX + -4 + iVar4 * 4) = *(float *)(*in_ECX + -4 + iVar4 * 4) * fVar14;
        *(float *)(*in_ECX + -8 + iVar4 * 4) = *(float *)(*in_ECX + -8 + iVar4 * 4) * fVar14;
        *(float *)(*in_ECX + -0xc + iVar4 * 4) = *(float *)(*in_ECX + -0xc + iVar4 * 4) * fVar14;
        iVar4 = iVar4 + -4;
      } while (2 < iVar4);
    }
    if (-1 < iVar4) {
      do {
        *(float *)(*in_ECX + iVar4 * 4) = (float)(1.0 / dVar15) * *(float *)(*in_ECX + iVar4 * 4);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  return;
}

