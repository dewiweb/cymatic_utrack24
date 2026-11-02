// rea decompile_all
// name: FUN_00001154
// address: 0x1154
// body: available
// range: 0x1040-0x110f inclusive
// range: 0x1154-0x124f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00001154(undefined4 param_1,uint *param_2,int *param_3,undefined4 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  iVar5 = 0;
  for (uVar6 = *param_2; 4 < uVar6; uVar6 = uVar6 >> 1) {
    iVar5 = iVar5 + 1;
  }
  *param_3 = iVar5;
  if (param_2[2] != 0) {
    FUN_0000135c(param_1,param_2 + 2,param_3 + 1);
    FUN_000012a4(param_1,param_2 + 2,param_3 + 1);
    param_4 = extraout_r3_00;
  }
  if (param_2[0xf] != 0) {
    FUN_0000135c(param_1,param_2 + 0xf,param_3 + 7);
    FUN_000012a4(param_1,param_2 + 0xf,param_3 + 7);
    param_4 = extraout_r3_01;
  }
  if (param_2[0x1c] != 0) {
    FUN_0000135c(param_1,param_2 + 0x1c,param_3 + 0xd);
    FUN_000012a4(param_1,param_2 + 0x1c,param_3 + 0xd);
    param_4 = extraout_r3_02;
  }
  if (param_2[0x29] != 0) {
    FUN_0000135c(param_1,param_2 + 0x29,param_3 + 0x13);
    FUN_000012a4(param_1,param_2 + 0x29,param_3 + 0x13);
    param_4 = extraout_r3_03;
  }
  if (param_2[0x36] != 0) {
    iVar5 = FUN_00000430(param_2[0x3e],param_1,param_3 + 0x19,param_4,unaff_r4,unaff_r5,unaff_r6,
                         unaff_lr);
    uVar6 = iVar5 + 1;
    if (uVar6 < 2) {
      uVar6 = 2;
    }
    else if (3 < uVar6) {
      uVar6 = 3;
    }
    *(char *)((int)param_3 + 0x66) = (char)uVar6 + -2;
    iVar5 = FUN_00000430(param_2[0x3f],param_1);
    uVar6 = iVar5 + 1;
    if (uVar6 < 3) {
      uVar6 = 3;
    }
    else if (10 < uVar6) {
      uVar6 = 10;
    }
    *(char *)((int)param_3 + 0x67) = (char)uVar6 + -3;
    cVar3 = '\0';
    for (uVar6 = 2; uVar6 < param_2[0x37]; uVar6 = uVar6 << 1) {
      cVar3 = cVar3 + '\x01';
    }
    *(char *)(param_3 + 0x1a) = cVar3;
    uVar2 = param_2[0x39];
    if (uVar2 == 0x100) {
      uVar4 = 0;
    }
    else if (uVar2 == 0x200) {
      uVar4 = 1;
    }
    else if (uVar2 == 0x400) {
      uVar4 = 2;
    }
    else {
      uVar4 = 3;
    }
    *(undefined1 *)((int)param_3 + 0x69) = uVar4;
    uVar1 = FUN_00000430(param_2[0x3d] * DAT_00001110,param_1,uVar6,extraout_r3,unaff_r4,unaff_r5,
                         unaff_r6,unaff_lr);
    *(undefined2 *)(param_3 + 0x19) = uVar1;
    return;
  }
  return;
}

