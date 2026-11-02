// rea decompile_all
// name: FUN_00423917
// address: 0x423917
// body: available
// range: 0x423917-0x423ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00423917(int param_1,int param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_18;
  uint local_14;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  iVar4 = *(int *)(param_1 + 0x30c);
  uVar8 = *(int *)(param_1 + 0x308) + *(int *)(param_1 + 0x304);
  local_8 = 1;
  uVar5 = *(int *)(param_1 + 0x304) + 4;
  uVar6 = local_c;
  do {
    if ((iVar4 == 0) || (uVar8 < uVar5 + 6)) {
      return uVar6;
    }
    uVar9 = uVar5 + CONCAT11(*(undefined1 *)(uVar5 + 2),*(undefined1 *)(uVar5 + 3));
    if (uVar8 < uVar9) {
      uVar9 = uVar8;
    }
    local_c = uVar6;
    if (((*(uint *)(param_1 + 0x310) & local_8) != 0) && (uVar5 + 0xe <= uVar9)) {
      local_18 = (uint)CONCAT11(*(undefined1 *)(uVar5 + 6),*(undefined1 *)(uVar5 + 7));
      puVar7 = (undefined1 *)(uVar5 + 0xe);
      if ((int)(uVar9 - (int)puVar7) < (int)(local_18 * 6)) {
        local_18 = (int)(uVar9 - (int)puVar7) / 6;
      }
      if (*(char *)(uVar5 + 4) == '\0') {
        uVar12 = param_2 << 0x10 | param_3;
        if ((*(uint *)(param_1 + 0x314) & local_8) == 0) {
          for (; local_18 != 0; local_18 = local_18 - 1) {
            if (CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]) == uVar12) {
              cVar2 = puVar7[4];
              bVar3 = puVar7[5];
              goto LAB_00423aba;
            }
            puVar7 = puVar7 + 6;
          }
        }
        else {
          local_14 = 0;
          if (local_18 != 0) {
LAB_00423a13:
            uVar11 = local_18 + local_14 >> 1;
            pcVar1 = puVar7 + uVar11 * 6 + 4;
            uVar10 = CONCAT31(CONCAT21(CONCAT11(pcVar1[-4],pcVar1[-3]),pcVar1[-2]),pcVar1[-1]);
            if (uVar10 != uVar12) break;
            cVar2 = *pcVar1;
            bVar3 = pcVar1[1];
LAB_00423aba:
            local_c = (int)(short)((short)cVar2 << 8) | (uint)bVar3;
            if ((*(byte *)(uVar5 + 5) & 8) == 0) {
              local_c = uVar6 + local_c;
            }
          }
        }
      }
    }
LAB_00423ac9:
    iVar4 = iVar4 + -1;
    local_8 = local_8 << 1;
    uVar5 = uVar9;
    uVar6 = local_c;
  } while( true );
  if (uVar10 < uVar12) {
    local_14 = uVar11 + 1;
    uVar11 = local_18;
  }
  local_18 = uVar11;
  if (local_18 <= local_14) goto LAB_00423ac9;
  goto LAB_00423a13;
}

