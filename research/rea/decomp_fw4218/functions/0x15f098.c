// rea decompile_all
// name: FUN_0015f098
// address: 0x15f098
// body: available
// range: 0x15f098-0x15f343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0015f098(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined2 local_be;
  undefined1 auStack_bc [60];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined1 auStack_64 [64];
  
  local_d4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_cc = 0;
  local_c6 = 0;
  local_c4 = 0;
  local_be = 0;
  iVar1 = FUN_001727f0(auStack_bc);
  *(undefined1 *)(iVar1 + 0x35) = 1;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  FUN_0015111c(iVar1 + -0x1c);
  iVar1 = FUN_001be1a4(param_1);
  uVar5 = 0;
  iVar2 = FUN_001d06b8();
  uVar6 = 0;
  if (*(char *)(param_1 + 0x7b) == '\0') {
    if (*(char *)(param_1 + 0x78) == '\0') {
      if (iVar1 != 0) {
        if (*(char *)(param_1 + 0x7a) == '\0') {
          uVar6 = 1;
          uVar5 = param_2;
        }
        else {
          uVar6 = 3;
          uVar5 = param_2;
        }
      }
    }
    else {
      uVar3 = iVar2 - *(int *)(param_1 + 0x70);
      bVar7 = uVar3 == DAT_0015f344;
      if (DAT_0015f344 <= uVar3) {
        bVar7 = *(int *)(param_1 + 0x24) == 0;
      }
      if ((bVar7) && (*(int *)(param_1 + 0x30) == 0)) {
        *(undefined1 *)(param_1 + 0x78) = 0;
      }
    }
  }
  else {
    uVar6 = 1;
    uVar3 = *(int *)(param_1 + 0x74) + 1;
    *(uint *)(param_1 + 0x74) = uVar3;
    uVar5 = param_2;
    if (1 < uVar3) {
      *(undefined1 *)(param_1 + 0x7b) = 0;
    }
  }
  iVar4 = FUN_001d06b8();
  uVar3 = iVar4 * 1000 + *(uint *)(param_1 + 0x7c);
  FUN_0014d564(&local_d8,uVar6,param_1,*(int *)(param_1 + 0x6c),uVar3 + *(uint *)(param_1 + 0x68),
               (uint)CARRY4(iVar4 * 1000,*(uint *)(param_1 + 0x7c)) + *(int *)(param_1 + 0x6c) +
               (uint)CARRY4(uVar3,*(uint *)(param_1 + 0x68)),uVar5);
  uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))(*(int **)(param_1 + 0x18),&local_d8);
  if (iVar1 == 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x7b);
  }
  if (iVar1 == 0 && uVar3 == 0) {
    FUN_0015fc18(param_1);
  }
  else {
    local_7c = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_74 = 0;
    local_6e = 0;
    local_6c = 0;
    local_66 = 0;
    iVar4 = FUN_001727f0(auStack_64);
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x24) = 0;
    *(undefined1 *)(iVar4 + 0x35) = 1;
    FUN_0015111c(iVar4 + -0x1c);
    iVar4 = FUN_001d06b8();
    uVar3 = iVar4 * 1000 + *(uint *)(param_1 + 0x7c);
    FUN_00150984(&local_80,1,*(undefined1 *)(param_1 + 0x7a),0,uVar3 + *(uint *)(param_1 + 0x68),
                 (uint)CARRY4(iVar4 * 1000,*(uint *)(param_1 + 0x7c)) + *(int *)(param_1 + 0x6c) +
                 (uint)CARRY4(uVar3,*(uint *)(param_1 + 0x68)),0,0,0);
    *(undefined1 *)(param_1 + 0x7a) = 0;
    (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(*(int **)(param_1 + 0x18),&local_80);
    FUN_0014cdc0(param_1 + 0x5c,param_1);
    FUN_0015111c(&local_80);
    FUN_0014ca10(&local_6c);
    FUN_0014ca10(&local_74);
    local_7c = 0;
    local_80 = 0;
    local_78 = 0;
    FUN_0015fc18(param_1);
    if (iVar1 != 0) goto LAB_0015f2f0;
  }
  iVar1 = FUN_001be1a4(param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x78) = 1;
    *(int *)(param_1 + 0x70) = iVar2;
    *(undefined1 *)(param_1 + 0x79) = 0;
  }
LAB_0015f2f0:
  if ((*(char *)(param_1 + 0xb0) == '\x02') &&
     (DAT_0015f348 < (uint)(iVar2 - *(int *)(param_1 + 0xa8)))) {
    FUN_0015fd4c(param_1,0);
  }
  FUN_0015111c(&local_d8);
  FUN_0014ca10(&local_c4);
  FUN_0014ca10(&local_cc);
  return;
}

