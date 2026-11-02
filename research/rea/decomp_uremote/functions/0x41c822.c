// rea decompile_all
// name: FUN_0041c822
// address: 0x41c822
// body: available
// range: 0x41c822-0x41c8e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041c822(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *in_EAX;
  int iVar5;
  undefined4 *puVar6;
  uint *extraout_EDX;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int local_14;
  uint local_10;
  int local_c;
  undefined4 *local_8;
  
  pbVar7 = (byte *)in_EAX[2];
  iVar9 = *in_EAX;
  uVar8 = 0;
  local_8 = (undefined4 *)0x0;
  local_10 = 0;
  FUN_0041c660();
  if (iVar9 != 0) {
    local_c = 0;
    do {
      if (local_8 == (undefined4 *)0x0) {
        local_10 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
        local_8 = (undefined4 *)0x80;
      }
      if ((local_10 & (uint)local_8) != 0) {
        iVar5 = extraout_EDX[2] + local_c;
        if (((*(uint *)(iVar5 + 0x10) & 4) == 0) &&
           (*(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | 4, uVar8 < *extraout_EDX)) {
          *(int *)(extraout_EDX[3] + uVar8 * 4) = iVar5;
          uVar8 = uVar8 + 1;
        }
      }
      local_8 = (undefined4 *)((int)local_8 >> 1);
      local_c = local_c + 0x1c;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  extraout_EDX[1] = uVar8;
  uVar2 = extraout_EDX[3];
  if (1 < (int)uVar8) {
    local_10 = 0;
    puVar1 = (undefined4 *)(uVar2 + 4);
    local_14 = uVar8 - 1;
    local_8 = puVar1;
    do {
      piVar3 = (int *)*local_8;
      for (uVar8 = local_10; -1 < (int)uVar8; uVar8 = uVar8 + -1) {
        puVar6 = (undefined4 *)(uVar8 * 4 + uVar2);
        piVar4 = (int *)*puVar6;
        if (*piVar4 < *piVar3) break;
        puVar1[uVar8] = piVar4;
        *puVar6 = piVar3;
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

