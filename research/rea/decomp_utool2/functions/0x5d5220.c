// rea decompile_all
// name: FUN_005d5220
// address: 0x5d5220
// body: available
// range: 0x5d5220-0x5d5b14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005d5220(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  
  piVar1 = *(int **)(in_ECX + 0x1c);
  if (piVar1 != (int *)0x0) {
    iVar7 = piVar1[0x360];
    uVar8 = (uint)(iVar7 == 0);
    if (-80.0 < *(double *)(piVar1 + 0x36a)) {
      piVar1[0x36a] = 0;
      piVar1[0x36b] = -0x3fac0000;
    }
    if (*(double *)(piVar1 + 0x36a) <= -200.0 && *(double *)(piVar1 + 0x36a) != -200.0) {
      piVar1[0x36a] = 0;
      piVar1[0x36b] = -0x3f970000;
    }
    if (0.0 < *(double *)(piVar1 + 0x36e)) {
      piVar1[0x36e] = 0;
      piVar1[0x36f] = 0;
    }
    if (*(double *)(piVar1 + 0x36e) <= -99999.0 && *(double *)(piVar1 + 0x36e) != -99999.0) {
      piVar1[0x36e] = 0;
      piVar1[0x36f] = -0x3f079610;
    }
    iVar10 = piVar1[0x351];
    if (iVar10 != 0) {
      piVar1[0x350] = 1;
      puVar13 = *(undefined4 **)(in_ECX + 0x1c);
      uVar2 = *(undefined4 *)(*(int *)(iVar10 + 0x18) + (int)*(double *)(piVar1 + 0x352) * 4);
      puVar13[1] = *(undefined4 *)(*(int *)(iVar10 + 0x1c) + (int)*(double *)(piVar1 + 0x352) * 4);
      *puVar13 = uVar2;
      iVar12 = 0;
      iVar3 = piVar1[1];
      iVar4 = *piVar1;
      if (0 < *(int *)(iVar10 + 0x90)) {
        do {
          FUN_005d6d70();
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)(iVar10 + 0x90));
      }
      iVar12 = *(int *)(iVar10 + 0x80);
      iVar5 = *(int *)(iVar10 + 0x7c);
      iVar6 = *(int *)(in_ECX + 0x1c);
      iVar11 = (int)*(double *)(piVar1 + 0x370);
      dVar16 = *(double *)(piVar1 + 0x370) - (double)iVar11;
      puVar13 = (undefined4 *)((int)*(double *)(iVar12 + iVar11 * 8) * 0x1ec + iVar5);
      puVar14 = (undefined4 *)(iVar6 + 0xb34);
      for (iVar9 = 0x7b; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      dVar16 = *(double *)(iVar12 + 8 + iVar11 * 8) * dVar16 +
               (1.0 - dVar16) * *(double *)(iVar12 + iVar11 * 8);
      iVar12 = (int)dVar16;
      dVar16 = dVar16 - (double)iVar12;
      if ((dVar16 == 0.0) && (0 < iVar12)) {
        iVar12 = iVar12 + -1;
        dVar16 = 1.0;
      }
      iVar12 = iVar12 * 0x1ec;
      dVar17 = 1.0 - dVar16;
      *(float *)(iVar6 + 0xb38) =
           (float)((double)*(float *)(iVar12 + 0x1f0 + iVar5) * dVar16 +
                  (double)*(float *)(iVar12 + 4 + iVar5) * dVar17);
      *(float *)(iVar6 + 0xb54) =
           (float)((double)*(float *)(iVar12 + 0x20c + iVar5) * dVar16 +
                  (double)*(float *)(iVar12 + 0x20 + iVar5) * dVar17);
      *(float *)(iVar6 + 0xb3c) =
           (float)((double)*(float *)(iVar12 + 500 + iVar5) * dVar16 +
                  (double)*(float *)(iVar12 + 8 + iVar5) * dVar17);
      *(float *)(iVar6 + 0xb58) =
           (float)((double)*(float *)(iVar12 + 0x210 + iVar5) * dVar16 +
                  (double)*(float *)(iVar12 + 0x24 + iVar5) * dVar17);
      *(float *)(iVar6 + 0xb40) =
           (float)((double)*(float *)(iVar12 + 0x1f8 + iVar5) * dVar16 +
                  (double)*(float *)(iVar12 + 0xc + iVar5) * dVar17);
      *(float *)(iVar6 + 0xb5c) =
           (float)((double)*(float *)(iVar12 + 0x214 + iVar5) * dVar16 +
                  (double)*(float *)(iVar12 + 0x28 + iVar5) * dVar17);
      *(float *)(iVar6 + 0xb44) =
           (float)((double)*(float *)(iVar12 + 0x1fc + iVar5) * dVar16 +
                  (double)*(float *)(iVar12 + 0x10 + iVar5) * dVar17);
      *(float *)(iVar6 + 0xb60) =
           (float)((double)*(float *)(iVar12 + 0x218 + iVar5) * dVar16 +
                  (double)*(float *)(iVar12 + 0x2c + iVar5) * dVar17);
      *(float *)(iVar6 + 0xb78) = (float)*(double *)(iVar6 + 0xdb8);
      FUN_005d6810();
      FUN_005d6760();
      FUN_005d6760();
      if (iVar4 != iVar3) {
        FUN_005d6760();
        FUN_005d6760();
      }
      FUN_005d65e0(*(undefined4 *)(iVar10 + 0x20),*(undefined4 *)(iVar10 + 0x24),
                   *(undefined4 *)(iVar10 + 0x2c),*(undefined8 *)(piVar1 + uVar8 * 8 + 0x372));
      FUN_005d65e0(*(undefined4 *)(iVar10 + 0x20),*(undefined4 *)(iVar10 + 0x24),
                   *(undefined4 *)(iVar10 + 0x34),*(undefined8 *)(piVar1 + 0x37a));
      if (iVar4 != iVar3) {
        FUN_005d65e0(*(undefined4 *)(iVar10 + 0x20),*(undefined4 *)(iVar10 + 0x24),
                     *(undefined4 *)(iVar10 + 0x34),*(undefined8 *)(piVar1 + 0x382));
        FUN_005d65e0(*(undefined4 *)(iVar10 + 0x20),*(undefined4 *)(iVar10 + 0x24),
                     *(undefined4 *)(iVar10 + 0x30),*(undefined8 *)(piVar1 + 0x38a));
      }
      FUN_005d6510(*(undefined4 *)(iVar10 + 0x50),*(undefined4 *)(iVar10 + 0x54),
                   *(undefined8 *)(piVar1 + (uVar8 + 5) * 8 + 0x350));
      FUN_005d6510(*(undefined4 *)(iVar10 + 0x50),*(undefined4 *)(iVar10 + 0x54),
                   *(undefined8 *)(piVar1 + 0x380));
      if (iVar4 != iVar3) {
        FUN_005d6510(*(undefined4 *)(iVar10 + 0x50),*(undefined4 *)(iVar10 + 0x58),
                     *(undefined8 *)(piVar1 + 0x388));
        FUN_005d6510(*(undefined4 *)(iVar10 + 0x50),*(undefined4 *)(iVar10 + 0x58),
                     *(undefined8 *)(piVar1 + 0x390));
      }
      iVar12 = (int)*(double *)(piVar1 + uVar8 * 8 + 0x374);
      dVar16 = *(double *)(piVar1 + uVar8 * 8 + 0x374) - (double)iVar12;
      *(float *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0xb24) + 0x20) =
           (float)((double)*(int *)(*(int *)(iVar10 + 0x28) + 4 + iVar12 * 4) * dVar16 +
                  (1.0 - dVar16) * (double)*(int *)(*(int *)(iVar10 + 0x28) + iVar12 * 4));
      iVar12 = (int)*(double *)(piVar1 + 0x37c);
      dVar16 = *(double *)(piVar1 + 0x37c) - (double)iVar12;
      *(float *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0xb28) + 0x20) =
           (float)((double)*(int *)(*(int *)(iVar10 + 0x28) + 4 + iVar12 * 4) * dVar16 +
                  (1.0 - dVar16) * (double)*(int *)(*(int *)(iVar10 + 0x28) + iVar12 * 4));
      if (iVar4 != iVar3) {
        iVar12 = (int)*(double *)(piVar1 + 900);
        dVar16 = *(double *)(piVar1 + 900) - (double)iVar12;
        *(float *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0xb2c) + 0x20) =
             (float)((double)*(int *)(*(int *)(iVar10 + 0x28) + 4 + iVar12 * 4) * dVar16 +
                    (1.0 - dVar16) * (double)*(int *)(*(int *)(iVar10 + 0x28) + iVar12 * 4));
        iVar12 = (int)*(double *)(piVar1 + 0x38c);
        dVar16 = *(double *)(piVar1 + 0x38c) - (double)iVar12;
        *(float *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0xb30) + 0x20) =
             (float)((double)*(int *)(*(int *)(iVar10 + 0x28) + 4 + iVar12 * 4) * dVar16 +
                    (1.0 - dVar16) * (double)*(int *)(*(int *)(iVar10 + 0x28) + iVar12 * 4));
      }
      uVar18 = 0;
      if (iVar7 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(piVar1 + 0x354);
      }
      FUN_005d6380(*(undefined4 *)(iVar10 + 0x4c),*(undefined4 *)(iVar10 + 0x3c),
                   *(undefined4 *)(iVar10 + 0x38),*(undefined8 *)(piVar1 + uVar8 * 8 + 0x376),uVar15
                  );
      FUN_005d6380(*(undefined4 *)(iVar10 + 0x4c),*(undefined4 *)(iVar10 + 0x40),
                   *(undefined4 *)(iVar10 + 0x38),*(undefined8 *)(piVar1 + 0x37e),uVar18);
      if (iVar4 != iVar3) {
        FUN_005d6380(*(undefined4 *)(iVar10 + 0x4c),*(undefined4 *)(iVar10 + 0x44),
                     *(undefined4 *)(iVar10 + 0x38),*(undefined8 *)(piVar1 + 0x386),uVar18);
        FUN_005d6380(*(undefined4 *)(iVar10 + 0x4c),*(undefined4 *)(iVar10 + 0x48),
                     *(undefined4 *)(iVar10 + 0x38),*(undefined8 *)(piVar1 + 0x38e),uVar18);
      }
      iVar7 = *(int *)(in_ECX + 0x1c);
      iVar10 = *(int *)(iVar7 + 0xb24);
      *(float *)(iVar10 + 4) = (float)*(double *)(iVar7 + 0xda8);
      *(float *)(iVar10 + 8) = (float)*(double *)(iVar7 + 0xdb0);
      iVar7 = *(int *)(in_ECX + 0x1c);
      iVar10 = *(int *)(iVar7 + 0xb28);
      *(float *)(iVar10 + 4) = (float)*(double *)(iVar7 + 0xda8);
      *(float *)(iVar10 + 8) = (float)*(double *)(iVar7 + 0xdb0);
      if (iVar4 != iVar3) {
        iVar7 = *(int *)(in_ECX + 0x1c);
        iVar10 = *(int *)(iVar7 + 0xb2c);
        *(float *)(iVar10 + 4) = (float)*(double *)(iVar7 + 0xda8);
        *(float *)(iVar10 + 8) = (float)*(double *)(iVar7 + 0xdb0);
        iVar7 = *(int *)(in_ECX + 0x1c);
        iVar10 = *(int *)(iVar7 + 0xb30);
        *(float *)(iVar10 + 4) = (float)*(double *)(iVar7 + 0xda8);
        *(float *)(iVar10 + 8) = (float)*(double *)(iVar7 + 0xdb0);
      }
      FUN_005d5d00();
      iVar7 = piVar1[0x359];
      if (iVar7 < 1) {
        dVar16 = *(double *)(*(int *)(in_ECX + 0x1c) + 0xd48);
        iVar10 = (int)dVar16;
        iVar7 = *(int *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0xd44) + 4);
        dVar16 = dVar16 - (double)iVar10;
        if (iVar7 == 0) {
          dVar16 = -1.0;
        }
        else {
          dVar16 = (*(double *)(iVar7 + 8 + iVar10 * 8) * dVar16 +
                   (1.0 - dVar16) * *(double *)(iVar7 + iVar10 * 8)) * (double)*(int *)(in_ECX + 4);
        }
        iVar7 = (int)dVar16;
      }
      *(int *)(in_ECX + 0x10) = iVar7;
      *(int *)(in_ECX + 0x14) = piVar1[0x358];
      *(int *)(in_ECX + 0xc) = piVar1[0x35c];
      if (piVar1[0x359] == 0) {
        *(undefined4 *)(in_ECX + 0x18) = 0;
      }
      else {
        *(int *)(in_ECX + 0x18) = (int)((double)piVar1[0x35d] / (double)piVar1[0x359]);
      }
      if (piVar1[0x357] != 0) {
        piVar1[0x348] = piVar1[0x359];
        piVar1[0x349] = piVar1[0x358];
        piVar1[0x34a] = piVar1[0x35c];
        piVar1[0x34b] = piVar1[0x35d];
        *(undefined8 *)(piVar1 + 0x34c) = *(undefined8 *)(piVar1 + 0x35e);
        *(undefined8 *)(piVar1 + 0x34e) = *(undefined8 *)(piVar1 + 0x35a);
      }
      return 0;
    }
  }
  return 0xffffff7d;
}

