// rea decompile_all
// name: FUN_0061a0c0
// address: 0x61a0c0
// body: available
// range: 0x61a0c0-0x61a330 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0061a0c0(uint param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  byte *in_EDX;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  uVar22 = in_ECX >> 0x10;
  uVar3 = in_ECX & 0xffff;
  if (param_1 == 1) {
    uVar3 = uVar3 + *in_EDX;
    uVar21 = uVar3 - 0xfff1;
    if (uVar3 < 0xfff1) {
      uVar21 = uVar3;
    }
    uVar22 = uVar22 + uVar21;
    uVar3 = uVar22 - 0xfff1;
    if (uVar22 < 0xfff1) {
      uVar3 = uVar22;
    }
    return uVar3 << 0x10 | uVar21;
  }
  if (in_EDX != (byte *)0x0) {
    if (0xf < param_1) {
      uVar21 = param_1;
      if (0x15af < param_1) {
        param_1 = param_1 / 0x15b0;
        do {
          uVar21 = uVar21 - 0x15b0;
          iVar19 = 0x15b;
          do {
            iVar4 = uVar3 + *in_EDX;
            iVar5 = iVar4 + (uint)in_EDX[1];
            iVar6 = iVar5 + (uint)in_EDX[2];
            iVar7 = iVar6 + (uint)in_EDX[3];
            iVar8 = iVar7 + (uint)in_EDX[4];
            iVar9 = iVar8 + (uint)in_EDX[5];
            iVar10 = iVar9 + (uint)in_EDX[6];
            iVar11 = iVar10 + (uint)in_EDX[7];
            iVar12 = iVar11 + (uint)in_EDX[8];
            iVar13 = iVar12 + (uint)in_EDX[9];
            iVar14 = iVar13 + (uint)in_EDX[10];
            iVar15 = iVar14 + (uint)in_EDX[0xb];
            iVar16 = iVar15 + (uint)in_EDX[0xc];
            iVar17 = iVar16 + (uint)in_EDX[0xd];
            iVar18 = iVar17 + (uint)in_EDX[0xe];
            pbVar1 = in_EDX + 0xf;
            in_EDX = in_EDX + 0x10;
            uVar3 = iVar18 + (uint)*pbVar1;
            uVar22 = uVar22 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                     iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
          uVar3 = uVar3 % 0xfff1;
          uVar22 = uVar22 % 0xfff1;
          param_1 = param_1 - 1;
        } while (param_1 != 0);
      }
      if (uVar21 != 0) {
        if (0xf < uVar21) {
          uVar20 = uVar21 >> 4;
          do {
            uVar21 = uVar21 - 0x10;
            iVar19 = uVar3 + *in_EDX;
            iVar4 = iVar19 + (uint)in_EDX[1];
            iVar5 = iVar4 + (uint)in_EDX[2];
            iVar6 = iVar5 + (uint)in_EDX[3];
            iVar7 = iVar6 + (uint)in_EDX[4];
            iVar8 = iVar7 + (uint)in_EDX[5];
            iVar9 = iVar8 + (uint)in_EDX[6];
            iVar10 = iVar9 + (uint)in_EDX[7];
            iVar11 = iVar10 + (uint)in_EDX[8];
            iVar12 = iVar11 + (uint)in_EDX[9];
            iVar13 = iVar12 + (uint)in_EDX[10];
            iVar14 = iVar13 + (uint)in_EDX[0xb];
            iVar15 = iVar14 + (uint)in_EDX[0xc];
            iVar16 = iVar15 + (uint)in_EDX[0xd];
            iVar17 = iVar16 + (uint)in_EDX[0xe];
            pbVar1 = in_EDX + 0xf;
            in_EDX = in_EDX + 0x10;
            uVar3 = iVar17 + (uint)*pbVar1;
            uVar22 = uVar22 + iVar19 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
                     iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar3;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
        for (; uVar21 != 0; uVar21 = uVar21 - 1) {
          bVar2 = *in_EDX;
          in_EDX = in_EDX + 1;
          uVar3 = uVar3 + bVar2;
          uVar22 = uVar22 + uVar3;
        }
        uVar3 = uVar3 % 0xfff1;
        uVar22 = uVar22 % 0xfff1;
      }
      return uVar22 << 0x10 | uVar3;
    }
    for (; param_1 != 0; param_1 = param_1 - 1) {
      bVar2 = *in_EDX;
      in_EDX = in_EDX + 1;
      uVar3 = uVar3 + bVar2;
      uVar22 = uVar22 + uVar3;
    }
    uVar21 = uVar3 - 0xfff1;
    if (uVar3 < 0xfff1) {
      uVar21 = uVar3;
    }
    return ((uVar22 / 0xfff1) * 0xf + uVar22) * 0x10000 | uVar21;
  }
  return 1;
}

