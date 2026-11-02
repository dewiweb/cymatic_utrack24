// rea decompile_all
// name: FUN_00423f50
// address: 0x423f50
// body: available
// range: 0x423f50-0x4249f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00423f50(int param_1,float *param_2,int param_3)

{
  int in_ECX;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (0 < param_3) {
    param_1 = param_1 - (int)param_2;
    do {
      fVar18 = (*param_2 + *(float *)(param_1 + (int)param_2)) * *(float *)(in_ECX + 0x18);
      if (*(int *)(in_ECX + 0x188) < 1) {
        fVar1 = *(float *)(in_ECX + 0x180);
      }
      else {
        fVar1 = *(float *)(in_ECX + 0x184) + *(float *)(in_ECX + 0x17c);
        *(int *)(in_ECX + 0x188) = *(int *)(in_ECX + 0x188) + -1;
        *(float *)(in_ECX + 0x17c) = fVar1;
      }
      if (*(int *)(in_ECX + 0x19c) < 1) {
        fVar17 = *(float *)(in_ECX + 0x194);
      }
      else {
        fVar17 = *(float *)(in_ECX + 0x198) + *(float *)(in_ECX + 400);
        *(int *)(in_ECX + 0x19c) = *(int *)(in_ECX + 0x19c) + -1;
        *(float *)(in_ECX + 400) = fVar17;
      }
      fVar19 = 1.0 - fVar1;
      fVar16 = *(float *)(*(int *)(in_ECX + 0x1c) + *(int *)(in_ECX + 0x24) * 4);
      fVar2 = (fVar19 * fVar16 + *(float *)(in_ECX + 0x28) * fVar1 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x28) = fVar2;
      *(float *)(*(int *)(in_ECX + 0x1c) + *(int *)(in_ECX + 0x24) * 4) =
           (fVar2 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x24) = (*(int *)(in_ECX + 0x24) + 1) % *(int *)(in_ECX + 0x20);
      fVar2 = *(float *)(*(int *)(in_ECX + 0x9c) + *(int *)(in_ECX + 0xa4) * 4);
      fVar3 = (*(float *)(in_ECX + 0xa8) * fVar1 + fVar19 * fVar2 + 0.1) - 0.1;
      *(float *)(in_ECX + 0xa8) = fVar3;
      *(float *)(*(int *)(in_ECX + 0x9c) + *(int *)(in_ECX + 0xa4) * 4) =
           (fVar3 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0xa4) = (*(int *)(in_ECX + 0xa4) + 1) % *(int *)(in_ECX + 0xa0);
      fVar3 = *(float *)(*(int *)(in_ECX + 0x2c) + *(int *)(in_ECX + 0x34) * 4);
      fVar4 = (fVar19 * fVar3 + *(float *)(in_ECX + 0x38) * fVar1 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x38) = fVar4;
      *(float *)(*(int *)(in_ECX + 0x2c) + *(int *)(in_ECX + 0x34) * 4) =
           (fVar4 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x34) = (*(int *)(in_ECX + 0x34) + 1) % *(int *)(in_ECX + 0x30);
      fVar4 = *(float *)(*(int *)(in_ECX + 0xac) + *(int *)(in_ECX + 0xb4) * 4);
      fVar5 = (*(float *)(in_ECX + 0xb8) * fVar1 + fVar19 * fVar4 + 0.1) - 0.1;
      *(float *)(in_ECX + 0xb8) = fVar5;
      *(float *)(*(int *)(in_ECX + 0xac) + *(int *)(in_ECX + 0xb4) * 4) =
           (fVar5 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0xb4) = (*(int *)(in_ECX + 0xb4) + 1) % *(int *)(in_ECX + 0xb0);
      fVar5 = *(float *)(*(int *)(in_ECX + 0x3c) + *(int *)(in_ECX + 0x44) * 4);
      fVar6 = (fVar19 * fVar5 + *(float *)(in_ECX + 0x48) * fVar1 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x48) = fVar6;
      *(float *)(*(int *)(in_ECX + 0x3c) + *(int *)(in_ECX + 0x44) * 4) =
           (fVar6 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x44) = (*(int *)(in_ECX + 0x44) + 1) % *(int *)(in_ECX + 0x40);
      fVar6 = *(float *)(*(int *)(in_ECX + 0xbc) + *(int *)(in_ECX + 0xc4) * 4);
      fVar7 = (*(float *)(in_ECX + 200) * fVar1 + fVar19 * fVar6 + 0.1) - 0.1;
      *(float *)(in_ECX + 200) = fVar7;
      *(float *)(*(int *)(in_ECX + 0xbc) + *(int *)(in_ECX + 0xc4) * 4) =
           (fVar7 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0xc4) = (*(int *)(in_ECX + 0xc4) + 1) % *(int *)(in_ECX + 0xc0);
      fVar7 = *(float *)(*(int *)(in_ECX + 0x4c) + *(int *)(in_ECX + 0x54) * 4);
      fVar8 = (fVar19 * fVar7 + *(float *)(in_ECX + 0x58) * fVar1 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x58) = fVar8;
      *(float *)(*(int *)(in_ECX + 0x4c) + *(int *)(in_ECX + 0x54) * 4) =
           (fVar8 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x54) = (*(int *)(in_ECX + 0x54) + 1) % *(int *)(in_ECX + 0x50);
      fVar8 = *(float *)(*(int *)(in_ECX + 0xcc) + *(int *)(in_ECX + 0xd4) * 4);
      fVar9 = (*(float *)(in_ECX + 0xd8) * fVar1 + fVar19 * fVar8 + 0.1) - 0.1;
      *(float *)(in_ECX + 0xd8) = fVar9;
      *(float *)(*(int *)(in_ECX + 0xcc) + *(int *)(in_ECX + 0xd4) * 4) =
           (fVar9 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0xd4) = (*(int *)(in_ECX + 0xd4) + 1) % *(int *)(in_ECX + 0xd0);
      fVar9 = *(float *)(*(int *)(in_ECX + 0x5c) + *(int *)(in_ECX + 100) * 4);
      fVar10 = (fVar19 * fVar9 + *(float *)(in_ECX + 0x68) * fVar1 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x68) = fVar10;
      *(float *)(*(int *)(in_ECX + 0x5c) + *(int *)(in_ECX + 100) * 4) =
           (fVar10 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 100) = (*(int *)(in_ECX + 100) + 1) % *(int *)(in_ECX + 0x60);
      fVar10 = *(float *)(*(int *)(in_ECX + 0xdc) + *(int *)(in_ECX + 0xe4) * 4);
      fVar11 = (*(float *)(in_ECX + 0xe8) * fVar1 + fVar19 * fVar10 + 0.1) - 0.1;
      *(float *)(in_ECX + 0xe8) = fVar11;
      *(float *)(*(int *)(in_ECX + 0xdc) + *(int *)(in_ECX + 0xe4) * 4) =
           (fVar11 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0xe4) = (*(int *)(in_ECX + 0xe4) + 1) % *(int *)(in_ECX + 0xe0);
      fVar11 = *(float *)(*(int *)(in_ECX + 0x6c) + *(int *)(in_ECX + 0x74) * 4);
      fVar12 = (fVar19 * fVar11 + *(float *)(in_ECX + 0x78) * fVar1 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x78) = fVar12;
      *(float *)(*(int *)(in_ECX + 0x6c) + *(int *)(in_ECX + 0x74) * 4) =
           (fVar12 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x74) = (*(int *)(in_ECX + 0x74) + 1) % *(int *)(in_ECX + 0x70);
      fVar12 = *(float *)(*(int *)(in_ECX + 0xec) + *(int *)(in_ECX + 0xf4) * 4);
      fVar13 = (*(float *)(in_ECX + 0xf8) * fVar1 + fVar19 * fVar12 + 0.1) - 0.1;
      *(float *)(in_ECX + 0xf8) = fVar13;
      *(float *)(*(int *)(in_ECX + 0xec) + *(int *)(in_ECX + 0xf4) * 4) =
           (fVar13 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0xf4) = (*(int *)(in_ECX + 0xf4) + 1) % *(int *)(in_ECX + 0xf0);
      fVar13 = *(float *)(*(int *)(in_ECX + 0x7c) + *(int *)(in_ECX + 0x84) * 4);
      fVar14 = (fVar19 * fVar13 + *(float *)(in_ECX + 0x88) * fVar1 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x88) = fVar14;
      *(float *)(*(int *)(in_ECX + 0x7c) + *(int *)(in_ECX + 0x84) * 4) =
           (fVar14 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x84) = (*(int *)(in_ECX + 0x84) + 1) % *(int *)(in_ECX + 0x80);
      fVar14 = *(float *)(*(int *)(in_ECX + 0xfc) + *(int *)(in_ECX + 0x104) * 4);
      fVar15 = (*(float *)(in_ECX + 0x108) * fVar1 + fVar19 * fVar14 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x108) = fVar15;
      *(float *)(*(int *)(in_ECX + 0xfc) + *(int *)(in_ECX + 0x104) * 4) =
           (fVar15 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x104) = (*(int *)(in_ECX + 0x104) + 1) % *(int *)(in_ECX + 0x100);
      fVar15 = *(float *)(*(int *)(in_ECX + 0x8c) + *(int *)(in_ECX + 0x94) * 4);
      fVar3 = fVar15 + fVar13 + fVar11 + fVar9 + fVar7 + fVar5 + fVar3 + fVar16 + 0.0;
      fVar16 = (fVar19 * fVar15 + *(float *)(in_ECX + 0x98) * fVar1 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x98) = fVar16;
      *(float *)(*(int *)(in_ECX + 0x8c) + *(int *)(in_ECX + 0x94) * 4) =
           (fVar16 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x94) = (*(int *)(in_ECX + 0x94) + 1) % *(int *)(in_ECX + 0x90);
      fVar16 = *(float *)(*(int *)(in_ECX + 0x10c) + *(int *)(in_ECX + 0x114) * 4);
      fVar2 = fVar16 + fVar14 + fVar12 + fVar10 + fVar8 + fVar6 + fVar4 + fVar2 + 0.0;
      fVar1 = (*(float *)(in_ECX + 0x118) * fVar1 + fVar19 * fVar16 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x118) = fVar1;
      *(float *)(*(int *)(in_ECX + 0x10c) + *(int *)(in_ECX + 0x114) * 4) =
           (fVar1 * fVar17 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x114) = (*(int *)(in_ECX + 0x114) + 1) % *(int *)(in_ECX + 0x110);
      fVar18 = *(float *)(*(int *)(in_ECX + 0x11c) + *(int *)(in_ECX + 0x124) * 4);
      fVar1 = fVar18 - fVar3;
      *(float *)(*(int *)(in_ECX + 0x11c) + *(int *)(in_ECX + 0x124) * 4) =
           (fVar18 * 0.5 + fVar3 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x124) = (*(int *)(in_ECX + 0x124) + 1) % *(int *)(in_ECX + 0x120);
      fVar18 = *(float *)(*(int *)(in_ECX + 0x14c) + *(int *)(in_ECX + 0x154) * 4);
      fVar17 = fVar18 - fVar2;
      *(float *)(*(int *)(in_ECX + 0x14c) + *(int *)(in_ECX + 0x154) * 4) =
           (fVar18 * 0.5 + fVar2 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x154) = (*(int *)(in_ECX + 0x154) + 1) % *(int *)(in_ECX + 0x150);
      fVar18 = *(float *)(*(int *)(in_ECX + 0x128) + *(int *)(in_ECX + 0x130) * 4);
      fVar16 = fVar18 - fVar1;
      *(float *)(*(int *)(in_ECX + 0x128) + *(int *)(in_ECX + 0x130) * 4) =
           (fVar18 * 0.5 + fVar1 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x130) = (*(int *)(in_ECX + 0x130) + 1) % *(int *)(in_ECX + 300);
      fVar18 = *(float *)(*(int *)(in_ECX + 0x158) + *(int *)(in_ECX + 0x160) * 4);
      fVar1 = fVar18 - fVar17;
      *(float *)(*(int *)(in_ECX + 0x158) + *(int *)(in_ECX + 0x160) * 4) =
           (fVar18 * 0.5 + fVar17 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x160) = (*(int *)(in_ECX + 0x160) + 1) % *(int *)(in_ECX + 0x15c);
      fVar18 = *(float *)(*(int *)(in_ECX + 0x134) + *(int *)(in_ECX + 0x13c) * 4);
      fVar17 = fVar18 - fVar16;
      *(float *)(*(int *)(in_ECX + 0x134) + *(int *)(in_ECX + 0x13c) * 4) =
           (fVar18 * 0.5 + fVar16 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x13c) = (*(int *)(in_ECX + 0x13c) + 1) % *(int *)(in_ECX + 0x138);
      fVar18 = *(float *)(*(int *)(in_ECX + 0x164) + *(int *)(in_ECX + 0x16c) * 4);
      *(float *)(*(int *)(in_ECX + 0x164) + *(int *)(in_ECX + 0x16c) * 4) =
           (fVar18 * 0.5 + fVar1 + 0.1) - 0.1;
      fVar18 = fVar18 - fVar1;
      *(int *)(in_ECX + 0x16c) = (*(int *)(in_ECX + 0x16c) + 1) % *(int *)(in_ECX + 0x168);
      fVar1 = *(float *)(*(int *)(in_ECX + 0x140) + *(int *)(in_ECX + 0x148) * 4);
      fVar16 = fVar1 - fVar17;
      *(float *)(*(int *)(in_ECX + 0x140) + *(int *)(in_ECX + 0x148) * 4) =
           (fVar1 * 0.5 + fVar17 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x148) = (*(int *)(in_ECX + 0x148) + 1) % *(int *)(in_ECX + 0x144);
      fVar1 = *(float *)(*(int *)(in_ECX + 0x170) + *(int *)(in_ECX + 0x178) * 4);
      fVar17 = fVar1 - fVar18;
      *(float *)(*(int *)(in_ECX + 0x170) + *(int *)(in_ECX + 0x178) * 4) =
           (fVar1 * 0.5 + fVar18 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x178) = (*(int *)(in_ECX + 0x178) + 1) % *(int *)(in_ECX + 0x174);
      if (*(int *)(in_ECX + 0x1b0) < 1) {
        fVar18 = *(float *)(in_ECX + 0x1a8);
      }
      else {
        fVar18 = *(float *)(in_ECX + 0x1ac) + *(float *)(in_ECX + 0x1a4);
        *(int *)(in_ECX + 0x1b0) = *(int *)(in_ECX + 0x1b0) + -1;
        *(float *)(in_ECX + 0x1a4) = fVar18;
      }
      if (*(int *)(in_ECX + 0x1c4) < 1) {
        fVar1 = *(float *)(in_ECX + 0x1bc);
      }
      else {
        fVar1 = *(float *)(in_ECX + 0x1c0) + *(float *)(in_ECX + 0x1b8);
        *(int *)(in_ECX + 0x1c4) = *(int *)(in_ECX + 0x1c4) + -1;
        *(float *)(in_ECX + 0x1b8) = fVar1;
      }
      if (*(int *)(in_ECX + 0x1d8) < 1) {
        fVar2 = *(float *)(in_ECX + 0x1d0);
      }
      else {
        fVar2 = *(float *)(in_ECX + 0x1d4) + *(float *)(in_ECX + 0x1cc);
        *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) + -1;
        *(float *)(in_ECX + 0x1cc) = fVar2;
      }
      *(float *)(param_1 + (int)param_2) =
           fVar2 * fVar17 + fVar1 * fVar16 + *(float *)(param_1 + (int)param_2) * fVar18;
      *param_2 = fVar1 * fVar17 + fVar2 * fVar16 + *param_2 * fVar18;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

