// rea decompile_all
// name: FUN_0015c170
// address: 0x15c170
// body: available
// range: 0x15c170-0x15c3ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0015c170(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint local_a0 [4];
  int local_90;
  undefined1 auStack_8c [4];
  int local_88;
  int local_84 [5];
  int local_70;
  int local_6c;
  int local_64;
  undefined4 local_5c;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_1c;
  int *piStack_18;
  
  piVar3 = DAT_0015c3b0;
  local_a0[2] = *DAT_0015c3b0;
  local_5c = DAT_0015c3b4;
  local_1c = param_1;
  piStack_18 = param_2;
  if (*DAT_0015c3b8 == 0) {
    FUN_00161678();
  }
  local_44 = *DAT_0015c3b8;
  *(int *)(local_44 + 0x1c) = *(int *)(local_44 + 0x1c) + 1;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_5c = DAT_0015c3bc;
  piVar1 = (int *)FUN_001d9dac(local_a0 + 2,piVar3 + 1,auStack_8c);
  piVar4 = DAT_0015c3b8;
  iVar5 = *piVar3;
  *piVar1 = iVar5;
  *(int *)((int)piVar1 + *(int *)(iVar5 + -0xc)) = piVar3[8];
  piVar1[2] = piVar3[9];
  iVar5 = DAT_0015c3c0;
  piVar1[4] = 0xc;
  piVar1[3] = iVar5;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  piVar1[8] = 0;
  piVar1[9] = 0;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  piVar1[0xc] = 0;
  piVar1[0xd] = 0;
  if (*piVar4 == 0) {
    FUN_00161678();
  }
  iVar5 = *piVar4;
  piVar1[0xe] = iVar5;
  *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
  piVar1[3] = DAT_0015c3c4;
  piVar1[7] = piVar1[7] | 1;
  iVar5 = *(int *)(param_2[1] + -4);
  if (iVar5 != 0) {
    piVar1[6] = iVar5;
    iVar2 = FUN_0010f82c(iVar5,0);
    piVar1[5] = iVar2;
    FUN_00003628(iVar2,param_2[1],iVar5);
    if (piVar1[4] << 0x1d < 0) {
      iVar5 = piVar1[5];
      piVar1[8] = iVar5;
      piVar1[10] = iVar5 + piVar1[6];
      piVar1[9] = iVar5;
    }
    if (piVar1[4] << 0x1c < 0) {
      iVar5 = piVar1[5];
      piVar1[0xc] = iVar5;
      piVar1[0xd] = iVar5 + piVar1[6];
      piVar1[0xb] = iVar5;
    }
  }
  FUN_001e23a4(&local_90,&DAT_0015c3c8);
  if ((char)param_2[2] != '\0') {
    FUN_001e23a4(&local_90,s_unicast__0015c3cc);
  }
  FUN_001e23a4(&local_90,s_server_port__0015c3d8);
  FUN_001c01dc(&local_90,(short)param_2[6]);
  FUN_001e23a4(&local_90,&DAT_0015c3e8);
  FUN_001c01dc(&local_90,*(undefined2 *)((int)param_2 + 0x1a));
  FUN_001e23a4(&local_90,&DAT_0015c3c8);
  FUN_001e23a4(&local_90,s_client_port__0015c3ec);
  FUN_001c01dc(&local_90,(short)param_2[5]);
  FUN_001e23a4(&local_90,&DAT_0015c3e8);
  FUN_001c01dc(&local_90,*(undefined2 *)((int)param_2 + 0x16));
  FUN_001e23a4(&local_90,&DAT_0015c3c8);
  if (*(int *)(*param_2 + -4) != 0) {
    FUN_001e23a4(&local_90,s_ssrc__0015c3fc);
    piVar3 = (int *)FUN_001c00a4(&local_90,*param_2,*(undefined4 *)(*param_2 + -4),
                                 *(undefined4 *)((int)local_84 + *(int *)(local_90 + -0xc)));
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(*(int *)(*piVar3 + -0xc) + (int)piVar3);
    }
    piVar3[3] = 0;
    FUN_001e23a4(&local_90,&DAT_0015c3c8);
  }
  FUN_001e23a4(&local_90,s_mode__0015c404);
  piVar4 = (int *)FUN_001c00a4(&local_90,param_2[4],*(undefined4 *)(param_2[4] + -4),
                               *(undefined4 *)((int)local_84 + *(int *)(local_90 + -0xc)));
  piVar3 = local_1c;
  if (piVar4 != (int *)0x0) {
    piVar4 = (int *)(*(int *)(*piVar4 + -0xc) + (int)piVar4);
  }
  piVar4[3] = 0;
  iVar5 = DAT_0015c40c;
  iVar2 = local_64;
  iVar7 = local_6c;
  if (local_88 << 0x1d < 0) {
    iVar2 = local_70;
    iVar7 = local_84[3];
  }
  if (iVar2 == iVar7) {
    *local_1c = DAT_0015c40c;
  }
  else {
    if (local_88 << 0x1d < 0) {
      local_64 = local_70;
      local_6c = local_84[3];
    }
    uVar8 = local_64 - local_6c;
    if (0xfffffff1 < uVar8) {
      local_a0[0] = 0xfffffff1;
      FUN_0010f7cc(8,DAT_0015c410,DAT_0015c410,uVar8);
    }
    if (uVar8 != 0) {
      local_a0[1] = 0x80;
      local_a0[0] = uVar8;
      puVar6 = local_a0 + 1;
      if (0x80 < uVar8) {
        puVar6 = local_a0;
      }
      iVar5 = FUN_001da28c(piVar3,*puVar6,uVar8);
      iVar5 = iVar5 + 0xc;
    }
    *piVar3 = iVar5;
    if (local_84[0] != 0) {
      FUN_00003628(iVar5,local_84[0],uVar8);
    }
  }
  FUN_00161210(local_a0 + 2,0);
  return;
}

