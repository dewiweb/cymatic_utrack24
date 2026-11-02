// rea decompile_all
// name: FUN_005eba10
// address: 0x5eba10
// body: available
// range: 0x5eba10-0x5ebd91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005eba10(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  float *pfVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  uint in_EDX;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  iVar7 = 1;
  if ((in_EDX & 1) == 0) {
    uVar9 = (int)in_EDX / 2;
    if (0 < (int)uVar9) {
      if (7 < uVar9) {
        uVar5 = uVar9 & 0x80000007;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
        }
        auVar14._0_4_ = (float)(int)in_EDX + 1.0;
        auVar14._4_4_ = (float)(int)in_EDX + 1.0;
        auVar14._8_4_ = (float)(int)in_EDX + 1.0;
        auVar14._12_4_ = (float)(int)in_EDX + 1.0;
        iVar8 = iVar7;
        pauVar10 = (undefined1 (*) [16])(in_ECX + 0x10);
        do {
          iVar7 = iVar8 + 8;
          auVar18._0_4_ = (float)iVar8 * 2.0;
          auVar18._4_4_ = (float)(iVar8 + 1) * 2.0;
          auVar18._8_4_ = (float)(iVar8 + 2) * 2.0;
          auVar18._12_4_ = (float)(iVar8 + 3) * 2.0;
          auVar18 = divps(auVar18,auVar14);
          pauVar10[-1] = auVar18;
          auVar19._0_4_ = (float)(iVar8 + 4) * 2.0;
          auVar19._4_4_ = (float)(iVar8 + 5) * 2.0;
          auVar19._8_4_ = (float)(iVar8 + 6) * 2.0;
          auVar19._12_4_ = (float)(iVar8 + 7) * 2.0;
          auVar18 = divps(auVar19,auVar14);
          *pauVar10 = auVar18;
          iVar8 = iVar7;
          pauVar10 = pauVar10 + 2;
        } while (iVar7 <= (int)(uVar9 - uVar5));
      }
      if (iVar7 <= (int)uVar9) {
        pfVar6 = (float *)(in_ECX + (iVar7 + -1) * 4);
        iVar8 = iVar7;
        do {
          iVar7 = iVar8 + 1;
          *pfVar6 = ((float)iVar8 + (float)iVar8) / ((float)(int)in_EDX + 1.0);
          pfVar6 = pfVar6 + 1;
          iVar8 = iVar7;
        } while (iVar7 <= (int)uVar9);
      }
    }
    uVar9 = (in_EDX - iVar7) + 1;
    if (iVar7 <= (int)in_EDX) {
      if (7 < uVar9) {
        uVar9 = uVar9 & 0x80000007;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
        }
        iVar8 = iVar7;
        pauVar10 = (undefined1 (*) [16])(in_ECX + (iVar7 + 3) * 4);
        do {
          iVar7 = iVar8 + 8;
          auVar20._0_4_ = (float)(int)((in_EDX - iVar8) * 2 + 2);
          auVar20._4_4_ = (float)(int)((in_EDX - (iVar8 + 1)) * 2 + 2);
          auVar20._8_4_ = (float)(int)((in_EDX - (iVar8 + 2)) * 2 + 2);
          auVar20._12_4_ = (float)(int)((in_EDX - (iVar8 + 3)) * 2 + 2);
          auVar3._4_4_ = (float)(int)in_EDX + 1.0;
          auVar3._0_4_ = (float)(int)in_EDX + 1.0;
          auVar3._8_4_ = (float)(int)in_EDX + 1.0;
          auVar3._12_4_ = (float)(int)in_EDX + 1.0;
          auVar14 = divps(auVar20,auVar3);
          pauVar10[-1] = auVar14;
          auVar21._0_4_ = (float)(int)((in_EDX - (iVar8 + 4)) * 2 + 2);
          auVar21._4_4_ = (float)(int)((in_EDX - (iVar8 + 5)) * 2 + 2);
          auVar21._8_4_ = (float)(int)((in_EDX - (iVar8 + 6)) * 2 + 2);
          auVar21._12_4_ = (float)(int)((in_EDX - (iVar8 + 7)) * 2 + 2);
          auVar4._4_4_ = (float)(int)in_EDX + 1.0;
          auVar4._0_4_ = (float)(int)in_EDX + 1.0;
          auVar4._8_4_ = (float)(int)in_EDX + 1.0;
          auVar4._12_4_ = (float)(int)in_EDX + 1.0;
          auVar14 = divps(auVar21,auVar4);
          *pauVar10 = auVar14;
          iVar8 = iVar7;
          pauVar10 = pauVar10 + 2;
        } while (iVar7 <= (int)(in_EDX - uVar9));
      }
      if (iVar7 <= (int)in_EDX) {
        iVar8 = (in_EDX - iVar7) * 2 + 2;
        iVar11 = (in_EDX - iVar7) + 1;
        pfVar6 = (float *)(in_ECX + (iVar7 + -1) * 4);
        do {
          fVar12 = (float)iVar8;
          iVar8 = iVar8 + -2;
          *pfVar6 = fVar12 / ((float)(int)in_EDX + 1.0);
          iVar11 = iVar11 + -1;
          pfVar6 = pfVar6 + 1;
        } while (iVar11 != 0);
      }
    }
  }
  else {
    uVar9 = (int)(in_EDX + 1) / 2;
    if (0 < (int)uVar9) {
      if (7 < uVar9) {
        uVar5 = uVar9 & 0x80000007;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
        }
        auVar22._0_4_ = (float)(int)in_EDX + 1.0;
        auVar22._4_4_ = (float)(int)in_EDX + 1.0;
        auVar22._8_4_ = (float)(int)in_EDX + 1.0;
        auVar22._12_4_ = (float)(int)in_EDX + 1.0;
        iVar8 = iVar7;
        pauVar10 = (undefined1 (*) [16])(in_ECX + 0x10);
        do {
          iVar7 = iVar8 + 8;
          auVar13._0_4_ = (float)iVar8 * 2.0;
          auVar13._4_4_ = (float)(iVar8 + 1) * 2.0;
          auVar13._8_4_ = (float)(iVar8 + 2) * 2.0;
          auVar13._12_4_ = (float)(iVar8 + 3) * 2.0;
          auVar14 = divps(auVar13,auVar22);
          pauVar10[-1] = auVar14;
          auVar15._0_4_ = (float)(iVar8 + 4) * 2.0;
          auVar15._4_4_ = (float)(iVar8 + 5) * 2.0;
          auVar15._8_4_ = (float)(iVar8 + 6) * 2.0;
          auVar15._12_4_ = (float)(iVar8 + 7) * 2.0;
          auVar14 = divps(auVar15,auVar22);
          *pauVar10 = auVar14;
          iVar8 = iVar7;
          pauVar10 = pauVar10 + 2;
        } while (iVar7 <= (int)(uVar9 - uVar5));
      }
      if (iVar7 <= (int)uVar9) {
        pfVar6 = (float *)(in_ECX + (iVar7 + -1) * 4);
        iVar8 = iVar7;
        do {
          iVar7 = iVar8 + 1;
          *pfVar6 = ((float)iVar8 + (float)iVar8) / ((float)(int)in_EDX + 1.0);
          pfVar6 = pfVar6 + 1;
          iVar8 = iVar7;
        } while (iVar7 <= (int)uVar9);
      }
    }
    uVar9 = (in_EDX - iVar7) + 1;
    if (iVar7 <= (int)in_EDX) {
      if (7 < uVar9) {
        uVar9 = uVar9 & 0x80000007;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
        }
        iVar8 = iVar7;
        pauVar10 = (undefined1 (*) [16])(in_ECX + (iVar7 + 3) * 4);
        do {
          iVar7 = iVar8 + 8;
          auVar16._0_4_ = (float)(int)((in_EDX - iVar8) * 2 + 2);
          auVar16._4_4_ = (float)(int)((in_EDX - (iVar8 + 1)) * 2 + 2);
          auVar16._8_4_ = (float)(int)((in_EDX - (iVar8 + 2)) * 2 + 2);
          auVar16._12_4_ = (float)(int)((in_EDX - (iVar8 + 3)) * 2 + 2);
          auVar1._4_4_ = (float)(int)in_EDX + 1.0;
          auVar1._0_4_ = (float)(int)in_EDX + 1.0;
          auVar1._8_4_ = (float)(int)in_EDX + 1.0;
          auVar1._12_4_ = (float)(int)in_EDX + 1.0;
          auVar14 = divps(auVar16,auVar1);
          pauVar10[-1] = auVar14;
          auVar17._0_4_ = (float)(int)((in_EDX - (iVar8 + 4)) * 2 + 2);
          auVar17._4_4_ = (float)(int)((in_EDX - (iVar8 + 5)) * 2 + 2);
          auVar17._8_4_ = (float)(int)((in_EDX - (iVar8 + 6)) * 2 + 2);
          auVar17._12_4_ = (float)(int)((in_EDX - (iVar8 + 7)) * 2 + 2);
          auVar2._4_4_ = (float)(int)in_EDX + 1.0;
          auVar2._0_4_ = (float)(int)in_EDX + 1.0;
          auVar2._8_4_ = (float)(int)in_EDX + 1.0;
          auVar2._12_4_ = (float)(int)in_EDX + 1.0;
          auVar14 = divps(auVar17,auVar2);
          *pauVar10 = auVar14;
          iVar8 = iVar7;
          pauVar10 = pauVar10 + 2;
        } while (iVar7 <= (int)(in_EDX - uVar9));
      }
      if (iVar7 <= (int)in_EDX) {
        iVar8 = (in_EDX - iVar7) * 2 + 2;
        iVar11 = (in_EDX - iVar7) + 1;
        pfVar6 = (float *)(in_ECX + (iVar7 + -1) * 4);
        do {
          fVar12 = (float)iVar8;
          iVar8 = iVar8 + -2;
          *pfVar6 = fVar12 / ((float)(int)in_EDX + 1.0);
          iVar11 = iVar11 + -1;
          pfVar6 = pfVar6 + 1;
        } while (iVar11 != 0);
        return;
      }
    }
  }
  return;
}

