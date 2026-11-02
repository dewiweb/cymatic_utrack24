// rea decompile_all
// name: FUN_000cd5e4
// address: 0xcd5e4
// body: available
// range: 0xcd5e4-0xcd953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000cd5e4(int param_1,undefined4 param_2,int param_3,undefined1 *param_4,undefined1 *param_5
                 )

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *local_3c [2];
  int iStack_34;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *puStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  puStack_28 = param_4;
  if (*(char *)(param_1 + 0x480) != '\0') {
    FUN_000028a4(DAT_000cd954);
                    /* WARNING: Could not recover jumptable at 0x000cd628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),local_30,1);
    return;
  }
  if (param_3 != 0) {
    piVar1 = (int *)FUN_0009b63c();
    (**(code **)(*piVar1 + 0x10))
              (piVar1,*(undefined2 *)(param_4 + 2),param_4[1],*param_4,*param_5,param_5[1],
               param_5[2]);
  }
  uVar9 = 0;
  uVar7 = 1;
  uVar6 = 0x20;
  uVar2 = 0;
  do {
    uVar4 = *(uint *)(param_1 + uVar2 * 0xc + 0x1bc);
    if (uVar4 == 0) break;
    if (uVar4 < uVar6) {
      uVar6 = uVar4;
      uVar9 = uVar2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
  uVar6 = 0;
  while (iVar10 = param_1 + uVar6 * 0xc, *(int *)(iVar10 + 0x1bc) != 0) {
    piVar1 = *(int **)(param_1 + 0x1b4);
    if (piVar1[-3] == -1) {
      uVar2 = piVar1[-1];
      if (0xfffffff1 < uVar2) {
        FUN_0010f7cc(8,DAT_000cd95c,DAT_000cd95c,uVar2,0xfffffff1);
      }
      piVar1 = DAT_000cd958;
      if (uVar2 != 0) {
        piVar1 = (int *)FUN_0010f82c((uVar2 + 8) * 2,0);
        if (piVar1 != (int *)0x0) {
          *piVar1 = 0;
          piVar1[1] = 0;
          piVar1[2] = 0;
        }
        piVar1[2] = uVar2;
        *piVar1 = 0;
        piVar1[1] = uVar2;
        puVar5 = (undefined2 *)((int)piVar1 + uVar2 * 2 + 0xc);
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
      }
      local_3c[0] = piVar1 + 3;
      FUN_00003628(local_3c[0],*(undefined4 *)(param_1 + 0x1b4),uVar2 << 1);
    }
    else {
      local_3c[0] = piVar1;
      if (piVar1 + -3 != DAT_000cd958) {
        piVar1[-3] = piVar1[-3] + 1;
      }
    }
    uVar2 = local_3c[0][-1];
    iVar8 = *(int *)(*(int *)(iVar10 + 0x1c0) + -4);
    if (((uint)local_3c[0][-2] < uVar2 + iVar8) || (1 < local_3c[0][-3] + 1U)) {
      if (-iVar8 - 0xfU < uVar2) {
        FUN_0010f7cc(8,DAT_000cd95c,DAT_000cd95c,uVar2,-iVar8 - 0xfU);
      }
      FUN_001d982c(local_3c,local_3c[0][-1],0,*(int *)(iVar10 + 0x1c0),
                   *(undefined4 *)(*(int *)(iVar10 + 0x1c0) + -4),0,iVar8);
    }
    else {
      FUN_00003628((int)local_3c[0] + uVar2 * 2,*(int *)(iVar10 + 0x1c0),(iVar8 + 1) * 2);
      local_3c[0][-1] = uVar2 + iVar8;
    }
    if (uVar6 == uVar9) {
      uVar7 = *(undefined4 *)(param_1 + 0x1ac);
    }
    else {
      uVar7 = 0;
    }
    iVar10 = (**(code **)(**(int **)(param_1 + 0x11c) + 0x18))
                       (*(int **)(param_1 + 0x11c),uVar6 & 0xff,*(uint *)(iVar10 + 0x1b8) & 0xff,
                        *(uint *)(iVar10 + 0x1bc) & 0xff,*(undefined1 *)(param_1 + 0x1b0),
                        *(undefined1 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1a4),uVar7,
                        local_3c,1,*(undefined4 *)(param_1 + 0x1a0));
    piVar1 = DAT_000cd958;
    if (iVar10 == 0) {
      uVar7 = 1;
      if (local_3c[0] != DAT_000cd958 + 3) {
        piVar1 = local_3c[0] + -3;
        iVar10 = *piVar1;
        if ((iVar10 == -1) || ((piVar1 != DAT_000cd958 && (*piVar1 = iVar10 + -1, iVar10 == 0)))) {
          FUN_0010fa20(local_3c[0] + -3,local_3c[0][-2] + 8,0);
        }
      }
      break;
    }
    *(undefined1 *)(param_1 + 0x47f) = 1;
    uVar7 = 0;
    if (local_3c[0] != piVar1 + 3) {
      piVar3 = local_3c[0] + -3;
      iVar10 = *piVar3;
      if ((iVar10 == -1) || ((piVar3 != piVar1 && (*piVar3 = iVar10 + -1, iVar10 == 0)))) {
        FUN_0010fa20(local_3c[0] + -3,local_3c[0][-2] + 8,0);
      }
    }
    uVar6 = uVar6 + 1;
    if (0x1f < uVar6) break;
  }
                    /* WARNING: Could not recover jumptable at 0x000cd950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),local_30,uVar7);
  return;
}

