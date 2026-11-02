// rea decompile_all
// name: FUN_005ac0a0
// address: 0x5ac0a0
// body: available
// range: 0x5ac0a0-0x5ac302 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005ac0a0(uint param_1,byte *param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
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
  uint local_18;
  uint local_14;
  short local_10;
  byte *local_c;
  uint local_8;
  
  local_c = param_2;
  local_8 = (uint)param_3;
  local_18 = param_1 & 0xffff;
  local_14 = param_1 >> 0x10;
  if (param_2 == (byte *)0x0) {
    local_18 = 1;
  }
  else {
    while (local_8 != 0) {
      if (local_8 < 0x1591) {
        local_10 = (short)local_8;
      }
      else {
        local_10 = 0x1591;
      }
      local_8 = local_8 - (int)local_10;
      for (; 0xf < local_10; local_10 = local_10 + -0x10) {
        iVar1 = *local_c + local_18;
        iVar2 = (uint)local_c[1] + iVar1;
        iVar3 = (uint)local_c[2] + iVar2;
        iVar4 = (uint)local_c[3] + iVar3;
        iVar5 = (uint)local_c[4] + iVar4;
        iVar6 = (uint)local_c[5] + iVar5;
        iVar7 = (uint)local_c[6] + iVar6;
        iVar8 = (uint)local_c[7] + iVar7;
        iVar9 = (uint)local_c[8] + iVar8;
        iVar10 = (uint)local_c[9] + iVar9;
        iVar11 = (uint)local_c[10] + iVar10;
        iVar12 = (uint)local_c[0xb] + iVar11;
        iVar13 = (uint)local_c[0xc] + iVar12;
        iVar14 = (uint)local_c[0xd] + iVar13;
        iVar15 = (uint)local_c[0xe] + iVar14;
        local_18 = (uint)local_c[0xf] + iVar15;
        local_14 = local_14 + iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9
                   + iVar10 + iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + local_18;
        local_c = local_c + 0x10;
      }
      for (; local_10 != 0; local_10 = local_10 + -1) {
        local_18 = *local_c + local_18;
        local_c = local_c + 1;
        local_14 = local_14 + local_18;
      }
      local_18 = local_18 % 0xfff1;
      local_14 = local_14 % 0xfff1;
    }
    local_18 = local_14 << 0x10 | local_18;
  }
  return local_18;
}

