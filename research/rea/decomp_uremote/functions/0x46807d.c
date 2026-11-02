// rea decompile_all
// name: FUN_0046807d
// address: 0x46807d
// body: available
// range: 0x46807d-0x468296 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0046807d(uint param_1)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  byte *in_ECX;
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
  uint uVar19;
  uint local_8;
  
  uVar19 = in_EAX >> 0x10;
  uVar3 = in_EAX & 0xffff;
  if (param_1 == 1) {
    uVar3 = uVar3 + *in_ECX;
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    uVar19 = uVar19 + uVar3;
    if (0xfff0 < uVar19) {
      uVar19 = uVar19 - 0xfff1;
    }
  }
  else {
    if (in_ECX == (byte *)0x0) {
      return 1;
    }
    if (param_1 < 0x10) {
      for (; param_1 != 0; param_1 = param_1 - 1) {
        uVar3 = uVar3 + *in_ECX;
        in_ECX = in_ECX + 1;
        uVar19 = uVar19 + uVar3;
      }
      if (0xfff0 < uVar3) {
        uVar3 = uVar3 - 0xfff1;
      }
      uVar19 = uVar19 % 0xfff1;
    }
    else {
      if (0x15af < param_1) {
        local_8 = param_1 / 0x15b0;
        do {
          param_1 = param_1 - 0x15b0;
          iVar1 = 0x15b;
          do {
            iVar4 = uVar3 + *in_ECX;
            iVar5 = iVar4 + (uint)in_ECX[1];
            iVar6 = iVar5 + (uint)in_ECX[2];
            iVar7 = iVar6 + (uint)in_ECX[3];
            iVar8 = iVar7 + (uint)in_ECX[4];
            iVar9 = iVar8 + (uint)in_ECX[5];
            iVar10 = iVar9 + (uint)in_ECX[6];
            iVar11 = iVar10 + (uint)in_ECX[7];
            iVar12 = iVar11 + (uint)in_ECX[8];
            iVar13 = iVar12 + (uint)in_ECX[9];
            iVar14 = iVar13 + (uint)in_ECX[10];
            iVar15 = iVar14 + (uint)in_ECX[0xb];
            iVar16 = iVar15 + (uint)in_ECX[0xc];
            iVar17 = iVar16 + (uint)in_ECX[0xd];
            iVar18 = iVar17 + (uint)in_ECX[0xe];
            uVar3 = iVar18 + (uint)in_ECX[0xf];
            uVar19 = uVar19 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                     iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
            in_ECX = in_ECX + 0x10;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          uVar3 = uVar3 % 0xfff1;
          uVar19 = uVar19 % 0xfff1;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      if (param_1 != 0) {
        if (0xf < param_1) {
          uVar2 = param_1 >> 4;
          do {
            iVar1 = uVar3 + *in_ECX;
            iVar4 = iVar1 + (uint)in_ECX[1];
            iVar5 = iVar4 + (uint)in_ECX[2];
            iVar6 = iVar5 + (uint)in_ECX[3];
            iVar7 = iVar6 + (uint)in_ECX[4];
            iVar8 = iVar7 + (uint)in_ECX[5];
            iVar9 = iVar8 + (uint)in_ECX[6];
            iVar10 = iVar9 + (uint)in_ECX[7];
            iVar11 = iVar10 + (uint)in_ECX[8];
            iVar12 = iVar11 + (uint)in_ECX[9];
            iVar13 = iVar12 + (uint)in_ECX[10];
            iVar14 = iVar13 + (uint)in_ECX[0xb];
            iVar15 = iVar14 + (uint)in_ECX[0xc];
            iVar16 = iVar15 + (uint)in_ECX[0xd];
            iVar17 = iVar16 + (uint)in_ECX[0xe];
            uVar3 = iVar17 + (uint)in_ECX[0xf];
            param_1 = param_1 - 0x10;
            uVar19 = uVar19 + iVar1 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
                     iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar3;
            in_ECX = in_ECX + 0x10;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        for (; param_1 != 0; param_1 = param_1 - 1) {
          uVar3 = uVar3 + *in_ECX;
          in_ECX = in_ECX + 1;
          uVar19 = uVar19 + uVar3;
        }
        uVar3 = uVar3 % 0xfff1;
        uVar19 = uVar19 % 0xfff1;
      }
    }
  }
  return uVar19 << 0x10 | uVar3;
}

