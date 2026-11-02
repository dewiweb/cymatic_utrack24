// rea decompile_all
// name: FUN_001991ac
// address: 0x1991ac
// body: available
// range: 0x1991ac-0x19930d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001991ac(undefined4 param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 in_stack_fffffd30;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 auStack_2a0 [256];
  undefined1 auStack_1a0 [256];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  undefined4 local_20;
  undefined4 *puStack_1c;
  undefined1 *puStack_18;
  
  uVar10 = (undefined2)((uint)in_stack_fffffd30 >> 0x10);
  piVar4 = param_2 + 0x1c0;
  if (*(char *)(param_2 + 0x1c9) == '\0') {
    iVar5 = param_2[0x1c1] + 10;
  }
  else {
    iVar5 = 0;
  }
  puVar8 = (undefined4 *)param_2[3];
  local_20 = param_1;
  puStack_1c = param_2;
  puStack_18 = param_3;
  FUN_0002056c(*piVar4,auStack_60,auStack_1a0,auStack_2a0);
  if (param_3 == (undefined1 *)0x0) {
    FUN_000037d0(auStack_a0,auStack_60,0x40);
    FUN_0002355c(auStack_a0,1);
    param_3 = auStack_a0;
  }
  FUN_0003b48a(auStack_2a0,&DAT_00199310);
  iVar5 = FUN_00198448(local_20,param_2,param_3,auStack_1a0,auStack_2a0,iVar5,
                       CONCAT22(uVar10,*(undefined2 *)(param_2[0x1c1] + 8)),param_2[0x29a] + 4,
                       *(undefined2 *)(param_2 + 0x295),param_2[5],param_2[4],param_2[0xe6],*param_2
                       ,param_2[1],0);
  puVar13 = param_2 + 3;
  while ((iVar5 == 0 && (puVar8 != (undefined4 *)0x0))) {
    puVar9 = (undefined4 *)*puVar8;
    if (param_2[0xe6] == *DAT_00199318) {
      uVar7 = 3;
    }
    else {
      uVar7 = 0;
    }
    *puVar8 = 0;
    puVar12 = puVar8 + 2;
    uVar11 = local_20;
    FUN_001995b4(puVar12,puVar8[0xb],param_2[0xe6],*(undefined2 *)((int)puVar8 + 0xe),puVar8[5],2,
                 uVar7,DAT_0019931c,param_2);
    uVar6 = FUN_00020a0a(*piVar4,*piVar4 + 0x100);
    if (uVar6 < 0x101) {
      FUN_001952f0(puVar8 + 0x58,*piVar4,uVar6);
    }
    else {
      *(undefined1 *)(puVar8 + 0x58) = 0;
    }
    FUN_00197c88(uVar11,DAT_00199320);
    puVar3 = (undefined4 *)*puVar13;
    puVar2 = puVar13;
    while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar1;
    }
    puVar8[0xf] = param_2 + 0x1b8;
    iVar5 = FUN_00198890(uVar11,puVar12);
    if (iVar5 == 0) {
      *puVar2 = puVar8;
    }
    FUN_0019a790(uVar11,DAT_00199320);
    puVar8 = puVar9;
  }
  return;
}

