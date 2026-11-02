// rea decompile_all
// name: FUN_0042493f
// address: 0x42493f
// body: available
// range: 0x42493f-0x424b3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042493f(int param_1)

{
  byte bVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  int local_14;
  byte *local_10;
  uint local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  if (*(int *)(param_1 + 700) == 0) {
    local_c = 0;
    uVar9 = -1;
    uVar4 = -1;
    if (*(ushort *)(param_1 + 0x158) != 0) {
      psVar2 = *(short **)(param_1 + 0x168);
      psVar8 = psVar2;
      do {
        if ((psVar8[3] == 6) && (psVar8[4] != 0)) {
          if ((*psVar8 == 3) && ((psVar8[1] == 1 && (psVar8[2] == 0x409)))) {
            uVar4 = local_c;
          }
          if (((*psVar8 == 1) && (psVar8[1] == 0)) && (psVar8[2] == 0)) {
            uVar9 = local_c;
          }
        }
        local_c = local_c + 1;
        psVar8 = psVar8 + 10;
      } while ((int)local_c < (int)(uint)*(ushort *)(param_1 + 0x158));
      if (uVar4 == -1) {
        if (uVar9 != -1) {
          local_14 = 0;
          local_10 = *(byte **)(param_1 + 100);
          local_c = (uint)(ushort)psVar2[uVar9 * 10 + 4];
          local_8 = (byte *)FUN_00411912(local_c + 1,&local_14);
          if (local_14 == 0) {
            iVar7 = FUN_0041106d();
            uVar4 = local_c;
            if ((iVar7 == 0) && (iVar7 = FUN_004110b4(local_8,local_c), iVar7 == 0)) {
              local_8[uVar4] = 0;
            }
            else {
              uVar3 = *(undefined4 *)(psVar2 + uVar9 * 10 + 8);
              psVar2[uVar9 * 10 + 4] = 0;
              (psVar2 + uVar9 * 10 + 6)[0] = 0;
              (psVar2 + uVar9 * 10 + 6)[1] = 0;
              FUN_00411a5c(uVar3);
              (psVar2 + uVar9 * 10 + 8)[0] = 0;
              (psVar2 + uVar9 * 10 + 8)[1] = 0;
              FUN_00411a5c(local_8);
              local_8 = (byte *)0x0;
            }
          }
        }
      }
      else {
        local_10 = (byte *)0x0;
        local_14 = *(int *)(param_1 + 100);
        local_c = (uint)((ushort)psVar2[uVar4 * 10 + 4] >> 1);
        local_8 = (byte *)FUN_00411912((ushort)psVar2[uVar4 * 10 + 4] + 1,&local_10);
        if (local_10 == (byte *)0x0) {
          iVar7 = *(int *)(param_1 + 0x16c);
          local_10 = local_8;
          iVar5 = FUN_0041106d();
          if ((iVar5 == 0) && (iVar5 = FUN_004111b5(), iVar5 == 0)) {
            pcVar6 = *(char **)(iVar7 + 0x20);
            for (; local_c != 0; local_c = local_c - 1) {
              if (((*pcVar6 == '\0') && (bVar1 = pcVar6[1], 0x1f < bVar1)) && (bVar1 < 0x80)) {
                *local_10 = bVar1;
                local_10 = local_10 + 1;
              }
              pcVar6 = pcVar6 + 2;
            }
            *local_10 = 0;
            FUN_00411249();
          }
          else {
            FUN_00411a5c(local_8);
            uVar3 = *(undefined4 *)(psVar2 + uVar4 * 10 + 8);
            psVar2[uVar4 * 10 + 4] = 0;
            local_8 = (byte *)0x0;
            (psVar2 + uVar4 * 10 + 6)[0] = 0;
            (psVar2 + uVar4 * 10 + 6)[1] = 0;
            FUN_00411a5c(uVar3);
            (psVar2 + uVar4 * 10 + 8)[0] = 0;
            (psVar2 + uVar4 * 10 + 8)[1] = 0;
          }
        }
      }
    }
    *(byte **)(param_1 + 700) = local_8;
  }
  return;
}

