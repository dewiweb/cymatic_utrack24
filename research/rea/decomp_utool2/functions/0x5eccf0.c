// rea decompile_all
// name: FUN_005eccf0
// address: 0x5eccf0
// body: available
// range: 0x5eccf0-0x5ecfc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005eccf0(void)

{
  int iVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  int in_ECX;
  int iVar11;
  uint in_EDX;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  iVar1 = in_EDX - 1;
  iVar11 = 0;
  if ((in_EDX & 1) == 0) {
    uVar10 = (int)in_EDX / 2;
    iVar12 = uVar10 - 1;
    if (-1 < iVar12) {
      if (7 < uVar10) {
        iVar11 = 0;
        uVar10 = uVar10 & 0x80000007;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
        }
        do {
          auVar16._0_4_ = (float)iVar11 * 2.0;
          auVar16._4_4_ = (float)(iVar11 + 1) * 2.0;
          auVar16._8_4_ = (float)(iVar11 + 2) * 2.0;
          auVar16._12_4_ = (float)(iVar11 + 3) * 2.0;
          auVar14._4_4_ = (float)iVar1;
          auVar14._0_4_ = (float)iVar1;
          auVar14._8_4_ = (float)iVar1;
          auVar14._12_4_ = (float)iVar1;
          auVar14 = divps(auVar16,auVar14);
          *(undefined1 (*) [16])(in_ECX + iVar11 * 4) = auVar14;
          auVar17._0_4_ = (float)(iVar11 + 4) * 2.0;
          auVar17._4_4_ = (float)(iVar11 + 5) * 2.0;
          auVar17._8_4_ = (float)(iVar11 + 6) * 2.0;
          auVar17._12_4_ = (float)(iVar11 + 7) * 2.0;
          auVar5._4_4_ = (float)iVar1;
          auVar5._0_4_ = (float)iVar1;
          auVar5._8_4_ = (float)iVar1;
          auVar5._12_4_ = (float)iVar1;
          auVar14 = divps(auVar17,auVar5);
          *(undefined1 (*) [16])(in_ECX + 0x10 + iVar11 * 4) = auVar14;
          iVar11 = iVar11 + 8;
        } while (iVar11 <= (int)(iVar12 - uVar10));
      }
      if (iVar11 <= iVar12) {
        do {
          *(float *)(in_ECX + iVar11 * 4) = ((float)iVar11 + (float)iVar11) / (float)iVar1;
          iVar11 = iVar11 + 1;
        } while (iVar11 <= iVar12);
      }
    }
    uVar10 = (iVar1 - iVar11) + 1;
    if (iVar11 <= iVar1) {
      if (7 < uVar10) {
        uVar10 = uVar10 & 0x80000007;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
        }
        do {
          auVar20._0_4_ = (float)iVar11 * 2.0;
          auVar20._4_4_ = (float)(iVar11 + 1) * 2.0;
          auVar20._8_4_ = (float)(iVar11 + 2) * 2.0;
          auVar20._12_4_ = (float)(iVar11 + 3) * 2.0;
          auVar8._4_4_ = (float)iVar1;
          auVar8._0_4_ = (float)iVar1;
          auVar8._8_4_ = (float)iVar1;
          auVar8._12_4_ = (float)iVar1;
          auVar14 = divps(auVar20,auVar8);
          pfVar2 = (float *)(in_ECX + iVar11 * 4);
          *pfVar2 = 2.0 - auVar14._0_4_;
          pfVar2[1] = 2.0 - auVar14._4_4_;
          pfVar2[2] = 2.0 - auVar14._8_4_;
          pfVar2[3] = 2.0 - auVar14._12_4_;
          auVar21._0_4_ = (float)(iVar11 + 4) * 2.0;
          auVar21._4_4_ = (float)(iVar11 + 5) * 2.0;
          auVar21._8_4_ = (float)(iVar11 + 6) * 2.0;
          auVar21._12_4_ = (float)(iVar11 + 7) * 2.0;
          auVar9._4_4_ = (float)iVar1;
          auVar9._0_4_ = (float)iVar1;
          auVar9._8_4_ = (float)iVar1;
          auVar9._12_4_ = (float)iVar1;
          auVar14 = divps(auVar21,auVar9);
          pfVar2 = (float *)(in_ECX + 0x10 + iVar11 * 4);
          *pfVar2 = 2.0 - auVar14._0_4_;
          pfVar2[1] = 2.0 - auVar14._4_4_;
          pfVar2[2] = 2.0 - auVar14._8_4_;
          pfVar2[3] = 2.0 - auVar14._12_4_;
          iVar11 = iVar11 + 8;
        } while (iVar11 <= (int)(iVar1 - uVar10));
      }
      if (iVar11 <= iVar1) {
        do {
          *(float *)(in_ECX + iVar11 * 4) = 2.0 - ((float)iVar11 + (float)iVar11) / (float)iVar1;
          iVar11 = iVar11 + 1;
        } while (iVar11 <= iVar1);
      }
    }
  }
  else {
    iVar12 = iVar1 / 2;
    if (-1 < iVar12) {
      if (7 < iVar12 + 1U) {
        uVar10 = iVar12 + 1U & 0x80000007;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
        }
        do {
          auVar13._0_4_ = (float)iVar11 * 2.0;
          auVar13._4_4_ = (float)(iVar11 + 1) * 2.0;
          auVar13._8_4_ = (float)(iVar11 + 2) * 2.0;
          auVar13._12_4_ = (float)(iVar11 + 3) * 2.0;
          auVar3._4_4_ = (float)iVar1;
          auVar3._0_4_ = (float)iVar1;
          auVar3._8_4_ = (float)iVar1;
          auVar3._12_4_ = (float)iVar1;
          auVar14 = divps(auVar13,auVar3);
          *(undefined1 (*) [16])(in_ECX + iVar11 * 4) = auVar14;
          auVar15._0_4_ = (float)(iVar11 + 4) * 2.0;
          auVar15._4_4_ = (float)(iVar11 + 5) * 2.0;
          auVar15._8_4_ = (float)(iVar11 + 6) * 2.0;
          auVar15._12_4_ = (float)(iVar11 + 7) * 2.0;
          auVar4._4_4_ = (float)iVar1;
          auVar4._0_4_ = (float)iVar1;
          auVar4._8_4_ = (float)iVar1;
          auVar4._12_4_ = (float)iVar1;
          auVar14 = divps(auVar15,auVar4);
          *(undefined1 (*) [16])(in_ECX + 0x10 + iVar11 * 4) = auVar14;
          iVar11 = iVar11 + 8;
        } while (iVar11 <= (int)(iVar12 - uVar10));
      }
      if (iVar11 <= iVar12) {
        do {
          *(float *)(in_ECX + iVar11 * 4) = ((float)iVar11 + (float)iVar11) / (float)iVar1;
          iVar11 = iVar11 + 1;
        } while (iVar11 <= iVar12);
      }
    }
    uVar10 = (iVar1 - iVar11) + 1;
    if (iVar11 <= iVar1) {
      if (7 < uVar10) {
        uVar10 = uVar10 & 0x80000007;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
        }
        do {
          auVar18._0_4_ = (float)iVar11 * 2.0;
          auVar18._4_4_ = (float)(iVar11 + 1) * 2.0;
          auVar18._8_4_ = (float)(iVar11 + 2) * 2.0;
          auVar18._12_4_ = (float)(iVar11 + 3) * 2.0;
          auVar6._4_4_ = (float)iVar1;
          auVar6._0_4_ = (float)iVar1;
          auVar6._8_4_ = (float)iVar1;
          auVar6._12_4_ = (float)iVar1;
          auVar14 = divps(auVar18,auVar6);
          pfVar2 = (float *)(in_ECX + iVar11 * 4);
          *pfVar2 = 2.0 - auVar14._0_4_;
          pfVar2[1] = 2.0 - auVar14._4_4_;
          pfVar2[2] = 2.0 - auVar14._8_4_;
          pfVar2[3] = 2.0 - auVar14._12_4_;
          auVar19._0_4_ = (float)(iVar11 + 4) * 2.0;
          auVar19._4_4_ = (float)(iVar11 + 5) * 2.0;
          auVar19._8_4_ = (float)(iVar11 + 6) * 2.0;
          auVar19._12_4_ = (float)(iVar11 + 7) * 2.0;
          auVar7._4_4_ = (float)iVar1;
          auVar7._0_4_ = (float)iVar1;
          auVar7._8_4_ = (float)iVar1;
          auVar7._12_4_ = (float)iVar1;
          auVar14 = divps(auVar19,auVar7);
          pfVar2 = (float *)(in_ECX + 0x10 + iVar11 * 4);
          *pfVar2 = 2.0 - auVar14._0_4_;
          pfVar2[1] = 2.0 - auVar14._4_4_;
          pfVar2[2] = 2.0 - auVar14._8_4_;
          pfVar2[3] = 2.0 - auVar14._12_4_;
          iVar11 = iVar11 + 8;
        } while (iVar11 <= (int)(iVar1 - uVar10));
      }
      if (iVar11 <= iVar1) {
        do {
          *(float *)(in_ECX + iVar11 * 4) = 2.0 - ((float)iVar11 + (float)iVar11) / (float)iVar1;
          iVar11 = iVar11 + 1;
        } while (iVar11 <= iVar1);
        return;
      }
    }
  }
  return;
}

