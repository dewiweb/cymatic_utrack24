// rea decompile_all
// name: FUN_0009d5d8
// address: 0x9d5d8
// body: available
// range: 0x9d5d8-0x9d9c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009d5d8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint local_d8 [3];
  int local_cc [2];
  int local_c4 [13];
  undefined4 local_90;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_50 [4];
  int local_40;
  int local_3c;
  uint local_38 [3];
  int *local_2c;
  int iStack_28;
  
  piVar1 = DAT_0009d9cc;
  piVar5 = DAT_0009d9c4;
  puVar8 = local_d8;
  local_cc[0] = *DAT_0009d9c4;
  local_90 = DAT_0009d9c8;
  local_2c = param_1;
  iStack_28 = param_2;
  if (*DAT_0009d9cc == 0) {
    thunk_FUN_00161678();
  }
  local_78 = *piVar1;
  *(int *)(local_78 + 0x1c) = *(int *)(local_78 + 0x1c) + 1;
  local_74 = 0;
  local_68 = 0;
  local_70 = 0;
  local_6c = 0;
  local_64 = 0;
  local_90 = DAT_0009d9d0;
  local_60 = 0;
  local_cc[0] = piVar5[2];
  *(int *)((int)local_cc + *(int *)(local_cc[0] + -0xc)) = piVar5[3];
  local_cc[1] = 0;
  FUN_001e0ac4((int)local_cc + *(int *)(local_cc[0] + -0xc),local_c4 + 1);
  local_c4[0] = piVar5[4];
  *(int *)((int)local_c4 + *(int *)(local_c4[0] + -0xc)) = piVar5[5];
  FUN_001e0ac4((int)local_c4 + *(int *)(local_c4[0] + -0xc),local_c4 + 1);
  *(int *)((int)local_cc + *(int *)(piVar5[1] + -0xc)) = piVar5[6];
  local_cc[0] = *piVar5;
  *(int *)((int)local_cc + *(int *)(local_cc[0] + -0xc)) = piVar5[8];
  local_c4[0] = piVar5[9];
  local_c4[3] = 0;
  local_c4[4] = 0;
  local_c4[5] = 0;
  local_c4[6] = 0;
  local_c4[7] = 0;
  local_c4[8] = 0;
  local_c4[9] = 0;
  local_c4[10] = 0;
  local_c4[0xb] = 0;
  local_c4[1] = DAT_0009d9d4;
  local_c4[2] = 0xc;
  if (*piVar1 == 0) {
    thunk_FUN_00161678();
  }
  local_c4[0xc] = *piVar1;
  *(int *)(local_c4[0xc] + 0x1c) = *(int *)(local_c4[0xc] + 0x1c) + 1;
  local_c4[1] = _DAT_0009d9d8;
  local_c4[5] = local_c4[5] | 1;
  uVar4 = FUN_000034d0(s____by_name__0009d9da + 2);
  piVar5 = (int *)FUN_001c00a4(local_c4,s____by_name__0009d9da + 2,uVar4,
                               *(undefined4 *)((int)local_c4 + *(int *)(local_c4[0] + -0xc) + 0xcU))
  ;
  if (piVar5 != (int *)0x0) {
    piVar5 = (int *)((int)piVar5 + *(int *)(*piVar5 + -0xc));
  }
  piVar5[3] = 0;
  FUN_001569a8(&local_40,param_2);
  piVar5 = (int *)FUN_001c00a4(local_c4,local_40,*(undefined4 *)(local_40 + -4),
                               *(undefined4 *)((int)local_c4 + *(int *)(local_c4[0] + -0xc) + 0xcU))
  ;
  if (piVar5 != (int *)0x0) {
    piVar5 = (int *)((int)piVar5 + *(int *)(*piVar5 + -0xc));
  }
  piVar5[3] = 0;
  FUN_001da314(&local_40);
  iVar3 = local_c4[3];
  iVar2 = DAT_0009d9e8;
  uVar9 = (local_c4[2] & 4U) >> 2;
  iVar7 = local_c4[6];
  iVar6 = local_c4[8];
  if (uVar9 == 0) {
    iVar7 = local_c4[9];
    iVar6 = local_c4[0xb];
  }
  if (iVar6 == iVar7) {
    local_50[0] = DAT_0009d9e8;
  }
  else {
    iVar7 = local_c4[6];
    iVar6 = local_c4[8];
    if (uVar9 == 0) {
      iVar7 = local_c4[9];
      iVar6 = local_c4[0xb];
    }
    uVar9 = iVar6 - iVar7;
    if (0xfffffff1 < uVar9) {
      local_d8[0] = 0xfffffff1;
      FUN_0010f7cc(8,DAT_0009d9ec,DAT_0009d9ec,uVar9);
    }
    local_50[0] = iVar2;
    if (uVar9 != 0) {
      local_38[0] = uVar9;
      if (0x80 < uVar9) {
        puVar8 = local_38;
      }
      local_d8[0] = 0x80;
      iVar6 = FUN_001da28c(local_50,*puVar8,uVar9);
      local_50[0] = iVar6 + 0xc;
    }
    if (iVar3 != 0) {
      FUN_00003628(local_50[0],iVar3,uVar9);
    }
  }
  local_3c = iVar2;
  (**(code **)(*local_2c + 0xd4))(local_2c,local_50,&local_3c);
  uVar9 = *(uint *)(*(int *)(param_2 + 100) + -4);
  if (uVar9 == *(uint *)(local_3c + -4)) {
    local_d8[2] = uVar9;
    puVar8 = local_d8 + 2;
    if (*(uint *)(local_3c + -4) < uVar9) {
      puVar8 = local_38;
    }
    local_38[0] = *(uint *)(local_3c + -4);
    iVar6 = FUN_0000339c(*(int *)(param_2 + 100),local_3c,*puVar8);
    if ((iVar6 == 0) && (*(int *)(*(int *)(param_2 + 100) + -4) == *(int *)(local_3c + -4)))
    goto LAB_0009d968;
  }
  iVar6 = local_3c;
  piVar5 = (int *)(param_2 + 100);
  uVar9 = FUN_000034d0(local_3c);
  if (uVar9 == 0) {
    if (*(int *)(*piVar5 + -0xc) == 0) {
      *(undefined4 *)(*piVar5 + -4) = 0;
      *(undefined1 *)*piVar5 = 0;
    }
    else {
      FUN_001da314(piVar5);
      *piVar5 = iVar2;
    }
  }
  else {
    local_d8[1] = 0;
    local_d8[0] = uVar9;
    local_d8[2] = uVar9;
    FUN_001da110(piVar5,0,*(undefined4 *)(*piVar5 + -4),iVar6);
  }
LAB_0009d968:
  FUN_001da314(&local_3c);
  FUN_001da314(local_50);
  FUN_00161210(local_cc,0);
  return;
}

