// rea decompile_all
// name: FUN_0007b27c
// address: 0x7b27c
// body: available
// range: 0x7a894-0x7ab8b inclusive
// range: 0x7b27c-0x7b2db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007b27c(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_r6;
  bool bVar8;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 *local_9c;
  undefined4 local_98;
  undefined4 local_94 [5];
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 auStack_70 [14];
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  uVar4 = *(uint *)(param_1 + 0x138);
  if (DAT_0007b2dc < uVar4) {
    iVar6 = uVar4 - DAT_0007b2dc;
  }
  else {
    iVar6 = 0;
  }
  *(int *)(param_1 + 0x160) = iVar6;
  iVar6 = *(int *)(param_1 + 0x120) * uVar4;
  *(int *)(param_1 + 0x164) = iVar6 * 2 + 0x2c;
  *(int *)(param_1 + 0x168) = iVar6 * 3 + 0x2c;
  FUN_0007a318(param_1);
  uVar5 = FUN_000d97d4();
  FUN_000d95e4(uVar5,param_1 + 0x114);
  FUN_00002898(s_TRACE__doCycleStart_0007ab8c);
  local_38[0] = DAT_0007aba4;
  *(undefined4 *)(param_1 + 0x148) = 0;
  FUN_001b3dbc(param_1,local_38,0);
  uVar5 = DAT_0007abac;
  iVar6 = DAT_0007aba8;
  if (*(char *)(param_1 + 0x14c) == '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x118) + 0x14))();
    local_a0 = 0;
    local_a4 = 0;
    local_9c = (undefined4 *)0x0;
    local_b4 = 1;
    local_98 = 0;
    local_b0 = 0x40;
    uStack_ac = 0;
    local_a8 = 0;
    local_c0 = *(undefined4 *)(param_1 + 0x130);
    local_b8 = local_38;
    local_bc = iVar6;
    FUN_0014afac(local_94,0,uVar2,*(uint *)(param_1 + 0x11c) & 0xff,*(uint *)(param_1 + 300) & 0xff,
                 *(uint *)(param_1 + 0x134) & 0xff);
    iVar6 = (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),local_94);
    uVar7 = _DAT_0007ac04;
    if (iVar6 == 0) {
      FUN_00002898(s_ERROR__Failed_to_create_file_dec_0007ac30);
      local_94[0] = uVar7;
      FUN_00232190(auStack_70);
      FUN_00232190(local_38);
      return;
    }
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 0;
    *(bool *)(param_1 + 0x14d) = 1 < *(uint *)(param_1 + 0x13c);
    local_2b = 1;
    local_2a = 0;
    local_29 = 1;
    local_30 = uVar5;
    local_2c = 1;
    iVar6 = (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),&local_30);
    if (iVar6 == 0) {
      FUN_00002898(s____ERROR__Failed_to_start_file_d_0007ac05 + 3);
      local_94[0] = uVar7;
      FUN_00232190(auStack_70);
      FUN_00232190(local_38);
      return;
    }
    puVar3 = auStack_70;
    local_94[0] = uVar7;
  }
  else {
    bVar8 = (*(uint *)(param_1 + 0x144) & 1) == 0;
    if (!bVar8) {
      unaff_r6 = *(undefined4 *)(param_1 + 0x164);
    }
    if (bVar8) {
      unaff_r6 = *(undefined4 *)(param_1 + 0x168);
    }
    if (bVar8) {
      uVar2 = 0x18;
    }
    else {
      uVar2 = 0x10;
    }
    uVar1 = (**(code **)(**(int **)(param_1 + 0x118) + 0x10))();
    uVar7 = _DAT_0007abb0;
    local_9c = local_38;
    local_b4 = *(undefined4 *)(param_1 + 0x128);
    local_c0 = _DAT_0007abb0;
    local_bc = (uint)CONCAT11((char)*(undefined4 *)(param_1 + 0x11c),uVar1) << 0x10;
    local_b8._0_3_ =
         CONCAT12((char)*(undefined4 *)(param_1 + 0x124),
                  CONCAT11(uVar2,(char)*(undefined4 *)(param_1 + 0x120)));
    local_b0 = iVar6;
    iVar6 = FUN_00232084(&uStack_ac,local_9c);
    *(undefined1 *)(iVar6 + 4) = 1;
    *(undefined1 *)(iVar6 + 5) = 0;
    *(undefined4 *)(iVar6 + 8) = unaff_r6;
    *(undefined1 *)(iVar6 + -0x10) = 1;
    iVar6 = (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),&local_c0);
    if (iVar6 == 0) {
      FUN_00002898(s____ERROR__Failed_to_create_file_e_0007abb1 + 3);
      local_c0 = uVar7;
      FUN_00232190(&uStack_ac);
      FUN_00232190(local_38);
      return;
    }
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(bool *)(param_1 + 0x14d) = 1 < *(uint *)(param_1 + 0x13c);
    local_7b = 1;
    local_7a = 1;
    local_79 = 0;
    local_80 = uVar5;
    local_7c = 1;
    iVar6 = (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),&local_80);
    if (iVar6 == 0) {
      FUN_00002898(s_ERROR__Failed_to_start_file_enco_0007abdc);
      local_c0 = uVar7;
      FUN_00232190(&uStack_ac);
      FUN_00232190(local_38);
      return;
    }
    puVar3 = &uStack_ac;
    local_c0 = uVar7;
  }
  FUN_00232190(puVar3);
  FUN_0007a098(param_1);
  FUN_00232190(local_38);
  return;
}

