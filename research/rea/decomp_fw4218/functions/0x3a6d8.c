// rea decompile_all
// name: FUN_0003a6d8
// address: 0x3a6d8
// body: available
// range: 0x3a6d8-0x3a90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003a6d8(undefined1 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  char local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 *local_30;
  undefined1 auStack_28 [12];
  undefined1 *puStack_1c;
  int local_18;
  
  puStack_1c = param_1;
  local_18 = param_2;
  iVar1 = FUN_0002f6c8(param_1 + 0x284);
  if (iVar1 == 0) {
    FUN_0002f9d4(s_Could_not_initialize_Foreign_Mas_0003a910);
  }
  *(undefined2 *)(param_1 + 0x208) = 0;
  *(undefined2 *)(param_1 + 0x20a) = 0;
  *param_1 = 1;
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 0x270) = iVar1 + 0x28;
  *(int *)(param_1 + 0x274) = iVar1 + 0x40;
  *(int *)(param_1 + 0x27c) = iVar1 + 0x60;
  *(int *)(param_1 + 0x278) = iVar1 + 0x56;
  puVar3 = param_1 + 0x250;
  *(undefined1 **)(param_1 + 0x280) = puVar3;
  FUN_0002cf5c(param_1 + 0x28c,param_1);
  FUN_00039fc2(puVar3,*(undefined2 *)(param_1 + 2));
  param_1[0x3b4] = 1;
  *(undefined2 *)(param_1 + 0x3b6) = 0xffff;
  param_1[0x3b8] = 0;
  local_30 = param_1 + 0x3c0;
  param_1[0x3ba] = 1;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  FUN_0002bbf0(*(undefined2 *)(param_1 + 2),1,0,0);
  param_1[0x3e0] = 8;
  if (local_18 == 0) {
    FUN_0003b646(auStack_50,puVar3,0x20);
    FUN_0002b69c(*(undefined2 *)(param_1 + 2),auStack_50);
    uVar2 = extraout_r1;
    if ((local_38 == '\0') &&
       (uVar4 = FUN_000366e0(DAT_0003a93c), uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20),
       (int)uVar4 != 0)) {
      FUN_0002f9bc(DAT_0003a93c);
      FUN_0002f9fc(3,DAT_0003a940,*(undefined2 *)(param_1 + 2));
      uVar2 = extraout_r1_00;
    }
    param_1[0x268] = local_38;
    param_1[0x269] = local_37;
    param_1[0x26a] = local_36;
    param_1[0x26b] = local_35;
    param_1[0x26c] = local_34;
    param_1[0x26d] = local_33;
    param_1[0x26e] = local_32;
    param_1[0x26f] = local_31;
    FUN_0002bbf0(*(undefined2 *)(param_1 + 2),uVar2,*(undefined4 *)(local_30 + 0x18),
                 *(undefined4 *)(local_30 + 0x1c));
  }
  uVar2 = FUN_001e11e8((int)(char)param_1[0x26c]);
  FUN_0003c79c(param_1 + 0x2e0,uVar2,0);
  uVar2 = FUN_001e11e8((int)(char)param_1[0x268]);
  FUN_0003c79c(param_1 + 0x2f8,uVar2,0);
  uVar2 = FUN_0003a000(puVar3);
  FUN_0003c79c(param_1 + 0x310,uVar2,0);
  iVar1 = FUN_001e11e8(4);
  FUN_0003c79c(param_1 + 0x370,iVar1 << 2,0);
  uVar2 = FUN_001e11e8((int)(char)param_1[0x268]);
  FUN_0003c79c(param_1 + 0x328,uVar2,0);
  uVar2 = FUN_0003a02a(puVar3);
  FUN_0003c79c(param_1 + 0x340,uVar2,1);
  uVar2 = FUN_0003a052(puVar3);
  FUN_0003c79c(param_1 + 0x358,uVar2,1);
  uVar2 = FUN_001e11e8(0);
  FUN_0003c79c(param_1 + 0x388,uVar2,0);
  param_1[0x388] = 1;
  FUN_0002d408(param_1 + 0x3a0,param_1,param_1 + 0x290);
  FUN_00039968(auStack_28,1);
  FUN_0003acbe(param_1,auStack_28);
  FUN_0003661e(param_1 + 0x218);
  FUN_0003661e(param_1 + 0x234);
  FUN_0003b64e(param_1 + 0x20c,0x30,10);
  param_1[0x3b9] = 0;
  FUN_0003c79c(param_1 + 0x3bc,DAT_0003a944,1);
  uVar2 = _DAT_0003a948;
  iVar1 = FUN_000366e0(_DAT_0003a948);
  if (iVar1 != 0) {
    FUN_0002f9bc(uVar2);
    FUN_0002f9fc(6,s__PORT__PTP_Port__d_initialized_0003a94b + 1,*(undefined2 *)(param_1 + 2));
  }
  return;
}

