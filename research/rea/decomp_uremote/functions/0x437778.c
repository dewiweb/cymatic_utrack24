// rea decompile_all
// name: FUN_00437778
// address: 0x437778
// body: available
// range: 0x437778-0x437889 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00437778(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
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
  
  uVar3 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_2 == (byte *)0x0) {
    uVar3 = 1;
  }
  else {
    while (param_3 != 0) {
      uVar2 = 0x15b0;
      if (param_3 < 0x15b0) {
        uVar2 = param_3;
      }
      param_3 = param_3 - uVar2;
      if (0xf < (int)uVar2) {
        uVar1 = uVar2 >> 4;
        uVar2 = uVar2 + uVar1 * -0x10;
        do {
          iVar4 = uVar3 + *param_2;
          iVar5 = iVar4 + (uint)param_2[1];
          iVar6 = iVar5 + (uint)param_2[2];
          iVar7 = iVar6 + (uint)param_2[3];
          iVar8 = iVar7 + (uint)param_2[4];
          iVar9 = iVar8 + (uint)param_2[5];
          iVar10 = iVar9 + (uint)param_2[6];
          iVar11 = iVar10 + (uint)param_2[7];
          iVar12 = iVar11 + (uint)param_2[8];
          iVar13 = iVar12 + (uint)param_2[9];
          iVar14 = iVar13 + (uint)param_2[10];
          iVar15 = iVar14 + (uint)param_2[0xb];
          iVar16 = iVar15 + (uint)param_2[0xc];
          iVar17 = iVar16 + (uint)param_2[0xd];
          iVar18 = iVar17 + (uint)param_2[0xe];
          uVar3 = iVar18 + (uint)param_2[0xf];
          param_1 = param_1 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                    iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
          param_2 = param_2 + 0x10;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        uVar3 = uVar3 + *param_2;
        param_2 = param_2 + 1;
        param_1 = param_1 + uVar3;
      }
      uVar3 = uVar3 % 0xfff1;
      param_1 = param_1 % 0xfff1;
    }
    uVar3 = param_1 << 0x10 | uVar3;
  }
  return uVar3;
}

