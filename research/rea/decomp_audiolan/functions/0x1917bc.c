// rea decompile_all
// name: FUN_001917bc
// address: 0x1917bc
// body: available
// range: 0x1917bc-0x19191d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x191916 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001917bc(int param_1,int param_2,int param_3,int param_4,byte *param_5,undefined1 *param_6,
                 undefined1 *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_4c;
  byte local_48 [12];
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  uVar4 = 0;
  local_4c = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_24 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  iStack_18 = param_4;
  if (0 < param_1) {
    do {
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      FUN_001b0bf0();
      if (uVar4 < 0x20) {
        if ((*(int *)(DAT_00191920 + uVar4 * 0x18) != 0) &&
           (iVar3 = uVar4 * 0x18 + DAT_00191920, iVar3 != 0)) {
          local_3c = *(int *)(iVar3 + 4);
          local_38 = (int)*(short *)(iVar3 + 10);
          local_34 = (uint)*(ushort *)(iVar3 + 0xc);
          local_30 = (uint)*(ushort *)(iVar3 + 0xe);
        }
      }
      FUN_001b0c3c();
      uVar2 = (int)uVar4 >> 0x1f;
      if (param_2 != 0) {
        iVar3 = (int)((uVar2 >> 0x1d) + uVar4) >> 3;
        uVar1 = 1 << (uVar4 & 7);
        if (((*(byte *)(iVar3 + param_2) & uVar1) != 0) && ((local_3c != 0 || (0 < local_38)))) {
          local_48[iVar3] = local_48[iVar3] | (byte)uVar1;
          local_4c = local_4c + 1;
        }
      }
      if (param_3 != 0) {
        iVar3 = (int)((uVar2 >> 0x1d) + uVar4) >> 3;
        uVar1 = 1 << (uVar4 & 7);
        if (((*(byte *)(iVar3 + param_3) & uVar1) != 0) && (local_34 != 0)) {
          local_48[iVar3 + 4] = local_48[iVar3 + 4] | (byte)uVar1;
          local_4c = local_4c + 1;
        }
      }
      if (param_4 != 0) {
        iVar3 = (int)((uVar2 >> 0x1d) + uVar4) >> 3;
        uVar2 = 1 << (uVar4 & 7);
        if (((*(byte *)(iVar3 + param_4) & uVar2) != 0) && (local_30 != 0)) {
          local_48[iVar3 + 8] = local_48[iVar3 + 8] | (byte)uVar2;
          local_4c = local_4c + 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < local_24);
  }
  *param_5 = local_48[0];
  param_5[1] = local_48[1];
  param_5[2] = local_48[2];
  param_5[3] = local_48[3];
  *param_6 = local_48[4];
  param_6[1] = local_48[5];
  param_6[2] = local_48[6];
  param_6[3] = local_48[7];
  *param_7 = local_48[8];
  param_7[1] = local_48[9];
  param_7[2] = local_48[10];
  param_7[3] = local_48[0xb];
  if (local_4c < 0) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_00191938,s_nready_>__0_0019192c,DAT_00191928,
                 DAT_00191924);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  return;
}

