// rea decompile_all
// name: FUN_001527d8
// address: 0x1527d8
// body: available
// range: 0x1527d8-0x152a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_001527d8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint local_b0;
  int local_ac [2];
  int local_a4 [13];
  undefined4 local_70;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  int *piStack_2c;
  undefined4 local_28;
  
  piVar3 = DAT_00152a30;
  piVar2 = DAT_00152a28;
  local_ac[0] = *DAT_00152a28;
  local_70 = DAT_00152a2c;
  piStack_2c = param_1;
  local_28 = param_2;
  if (*DAT_00152a30 == 0) {
    thunk_FUN_00161678();
  }
  local_58 = *piVar3;
  *(int *)(local_58 + 0x1c) = *(int *)(local_58 + 0x1c) + 1;
  local_54 = 0;
  local_48 = 0;
  local_50 = 0;
  local_4c = 0;
  local_44 = 0;
  local_70 = DAT_00152a34;
  local_40 = 0;
  local_ac[0] = piVar2[2];
  *(int *)((int)local_ac + *(int *)(local_ac[0] + -0xc)) = piVar2[3];
  local_ac[1] = 0;
  FUN_001e0ac4((int)local_ac + *(int *)(local_ac[0] + -0xc),local_a4 + 1);
  local_a4[0] = piVar2[4];
  *(int *)((int)local_a4 + *(int *)(local_a4[0] + -0xc)) = piVar2[5];
  FUN_001e0ac4((int)local_a4 + *(int *)(local_a4[0] + -0xc),local_a4 + 1);
  *(int *)((int)local_ac + *(int *)(piVar2[1] + -0xc)) = piVar2[6];
  local_ac[0] = *piVar2;
  *(int *)((int)local_ac + *(int *)(local_ac[0] + -0xc)) = piVar2[8];
  local_a4[0] = piVar2[9];
  local_a4[3] = 0;
  local_a4[4] = 0;
  local_a4[5] = 0;
  local_a4[6] = 0;
  local_a4[7] = 0;
  local_a4[8] = 0;
  local_a4[9] = 0;
  local_a4[10] = 0;
  local_a4[0xb] = 0;
  local_a4[1] = DAT_00152a38;
  local_a4[2] = 0xc;
  if (*piVar3 == 0) {
    thunk_FUN_00161678();
  }
  local_a4[0xc] = *piVar3;
  *(int *)(local_a4[0xc] + 0x1c) = *(int *)(local_a4[0xc] + 0x1c) + 1;
  local_a4[1] = DAT_00152a3c;
  local_a4[5] = local_a4[5] | 1;
  FUN_00152728(local_28,local_ac);
  iVar4 = local_a4[3];
  iVar5 = DAT_00152a40;
  uVar8 = (local_a4[2] & 4U) >> 2;
  iVar6 = local_a4[6];
  iVar1 = local_a4[8];
  if (uVar8 == 0) {
    iVar6 = local_a4[9];
    iVar1 = local_a4[0xb];
  }
  if (iVar1 == iVar6) {
    *param_1 = DAT_00152a40;
  }
  else {
    iVar6 = local_a4[6];
    iVar1 = local_a4[8];
    if (uVar8 == 0) {
      iVar6 = local_a4[9];
      iVar1 = local_a4[0xb];
    }
    uVar8 = iVar1 - iVar6;
    if (0xfffffff1 < uVar8) {
      local_b0 = 0xfffffff1;
      FUN_0010f7cc(8,DAT_00152a44,DAT_00152a44,uVar8);
    }
    if (uVar8 != 0) {
      puVar7 = &local_30;
      if (0x80 < uVar8) {
        puVar7 = &local_b0;
      }
      local_b0 = uVar8;
      local_30 = 0x80;
      iVar5 = FUN_001da28c(param_1,*puVar7,uVar8);
      iVar5 = iVar5 + 0xc;
    }
    *param_1 = iVar5;
    if (iVar4 != 0) {
      FUN_00003628(iVar5,iVar4,uVar8);
    }
  }
  FUN_00161210(local_ac,0);
  return;
}

