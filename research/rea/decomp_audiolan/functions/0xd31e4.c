// rea decompile_all
// name: FUN_000d31e4
// address: 0xd31e4
// body: available
// range: 0xd31e4-0xd359b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000d32c0) */

void FUN_000d31e4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  uint extraout_r1;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined2 *local_b4;
  undefined4 local_b0 [4];
  byte local_a0;
  char local_9e;
  undefined1 auStack_9c [4];
  undefined4 local_98 [4];
  char local_86;
  short local_76 [13];
  short *local_5c;
  char local_50 [4];
  undefined4 local_4c [4];
  int local_3c [3];
  int iStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  puVar1 = (undefined4 *)FUN_0009b63c();
  uVar2 = (**(code **)*puVar1)();
  FUN_000b8e54(local_b0,param_1 + 0x14c,uVar2,local_28);
  piVar3 = (int *)FUN_0009b63c();
  (**(code **)(*piVar3 + 8))(piVar3,local_b0,0xffffffff);
  local_50[0] = local_9e;
  uVar7 = extraout_r1;
  if (local_9e != '\0') {
    uVar7 = (uint)local_a0;
  }
  if (((local_9e == '\0' || uVar7 == 0) || (local_9e != '\a')) ||
     (iVar4 = FUN_000ce99c(param_1,uVar2,local_28,local_4c,local_50), iVar4 == 0))
  goto LAB_000d356c;
  FUN_001d9c54(&local_b4,local_28);
  iVar4 = *(int *)(local_b4 + -2);
  if (iVar4 == 0) {
    iVar4 = FUN_00003544(&DAT_000d35a0);
    if (iVar4 != 0) {
      uVar8 = *(undefined4 *)(local_b4 + -2);
      uVar9 = 0;
      goto LAB_000d3350;
    }
    if (*(int *)(local_b4 + -6) == 0) {
      *(undefined4 *)(local_b4 + -2) = 0;
      *local_b4 = 0;
      uVar9 = DAT_000d35a4;
    }
    else {
      FUN_001d9b00(&local_b4);
      local_b4 = DAT_000d35ac;
      uVar9 = DAT_000d35a4;
    }
  }
  else {
    if (1 < *(int *)(local_b4 + -6) + 1U) {
      iVar5 = FUN_001d9a60(&local_b4,iVar4,iVar4);
      FUN_00003628(iVar5 + 0xc,local_b4,*(int *)(local_b4 + -2) << 1);
      FUN_001d9b00(&local_b4);
      local_b4 = (undefined2 *)(iVar5 + 0xc);
    }
    if ((undefined4 *)(local_b4 + -6) != DAT_000d359c) {
      *(undefined4 *)(local_b4 + -6) = 0xffffffff;
    }
    uVar9 = DAT_000d35a4;
    if (local_b4[iVar4 + -1] != 0x2f) {
      uVar9 = *(undefined4 *)(local_b4 + -2);
      iVar4 = FUN_00003544(&DAT_000d35a0);
      uVar8 = 0;
LAB_000d3350:
      FUN_001d982c(&local_b4,uVar9,uVar8,&DAT_000d35a0,iVar4,0,iVar4);
      uVar9 = DAT_000d35a4;
    }
  }
  while( true ) {
    FUN_000c4d50(local_98,param_1 + 0x14c,uVar2,local_4c[0]);
    piVar3 = (int *)FUN_0009b63c();
    (**(code **)(*piVar3 + 8))(piVar3,local_98,0xffffffff);
    local_50[0] = local_86;
    if (local_86 != '\0') break;
    psVar6 = local_5c;
    if (*local_5c == 0) {
      psVar6 = local_76;
    }
    if (*psVar6 == 0) break;
    FUN_001d9c54(local_3c,&local_b4);
    psVar6 = local_5c;
    if (*local_5c == 0) {
      psVar6 = local_76;
    }
    uVar10 = *(undefined4 *)(local_3c[0] + -4);
    uVar8 = FUN_00003544(psVar6);
    FUN_001d982c(local_3c,uVar10,0,psVar6,uVar8,0,uVar8);
    FUN_000b8e2c(local_b0,param_1 + 0x14c,uVar2,local_3c);
    piVar3 = (int *)FUN_0009b63c();
    (**(code **)(*piVar3 + 8))(piVar3,local_b0,0xffffffff);
    local_50[0] = local_86;
    if (local_86 != '\0') {
      FUN_001d9b00(local_3c);
      break;
    }
    FUN_001d9b00(local_3c);
    local_98[0] = uVar9;
    FUN_0019f30c(local_5c);
  }
  local_98[0] = uVar9;
  FUN_0019f30c(local_5c);
  FUN_000d7e18(local_98,param_1 + 0x14c,uVar2,local_4c[0]);
  piVar3 = (int *)FUN_0009b63c();
  iVar4 = (**(code **)(*piVar3 + 8))(piVar3,local_98,0xffffffff);
  if (iVar4 != 0) {
    thunk_FUN_000028a4(DAT_000d35a8);
  }
  if (local_50[0] == '\0') {
    FUN_000b8e2c(local_b0,param_1 + 0x14c,uVar2,local_28);
    piVar3 = (int *)FUN_0009b63c();
    (**(code **)(*piVar3 + 8))(piVar3,local_b0,0xffffffff);
    local_50[0] = local_9e;
  }
  FUN_001d9b00(&local_b4);
LAB_000d356c:
  (**(code **)(**(int **)(param_1 + 0x118) + 0xc))(*(int **)(param_1 + 0x118),local_2c,local_50[0]);
  local_b0[0] = DAT_000d35b0;
  FUN_001d9b00(auStack_9c);
  return;
}

