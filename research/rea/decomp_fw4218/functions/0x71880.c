// rea decompile_all
// name: FUN_00071880
// address: 0x71880
// body: available
// range: 0x71880-0x71b6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00071880(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined1 auStack_a4 [8];
  undefined1 auStack_9c [20];
  undefined1 auStack_88 [20];
  undefined1 auStack_74 [20];
  undefined1 auStack_60 [20];
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [8];
  
  uVar1 = FUN_00201f28(auStack_24,0);
  FUN_001aaefc(auStack_34,uVar1);
  FUN_00201f54(auStack_24);
  FUN_000d7ae4(auStack_38,0,0,0,0);
  FUN_000d7acc(auStack_38,1);
  (**(code **)(*param_1 + 0x1c))(auStack_4c,param_1);
  iVar2 = FUN_001b2390(auStack_4c);
  FUN_000649bc(auStack_4c,param_1[6] * 0xf + iVar2);
  iVar2 = FUN_001b2390(auStack_4c);
  FUN_000649d4(auStack_4c,iVar2 + 0xf);
  iVar2 = FUN_001b23b0(auStack_4c);
  FUN_000649c4(auStack_4c,iVar2 + 0x5a);
  piVar3 = (int *)FUN_0022bc90(param_1 + 1);
  (**(code **)(*piVar3 + 0x38))(piVar3,auStack_4c,1,1,1);
  FUN_001c70d8(auStack_9c,DAT_00071b70,0x14,4);
  for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
    FUN_00064a5c(auStack_9c + iVar2 * 0x14,auStack_4c);
  }
  iVar2 = FUN_001b23b0(auStack_9c);
  FUN_000649c4(auStack_9c,iVar2 + 2);
  iVar2 = FUN_001b23b0(auStack_9c);
  FUN_000649cc(auStack_9c,iVar2 + 0x1d);
  uVar1 = FUN_001b23bc(auStack_9c);
  FUN_000649c4(auStack_88,uVar1);
  iVar2 = FUN_001b23b0(auStack_88);
  FUN_000649cc(auStack_88,iVar2 + 0x1d);
  uVar1 = FUN_001b23bc(auStack_88);
  FUN_000649c4(auStack_74,uVar1);
  iVar2 = FUN_001b23b0(auStack_74);
  FUN_000649cc(auStack_74,iVar2 + 0x1d);
  uVar1 = FUN_001b23bc(auStack_74);
  FUN_000649c4(auStack_60,uVar1);
  iVar2 = FUN_001b23b0(auStack_60);
  FUN_000649cc(auStack_60,iVar2 + 0x1d);
  for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
    if (iVar2 == 3) {
      puVar4 = &DAT_00071b74;
    }
    else {
      puVar4 = &DAT_00071b78;
    }
    FUN_000028cc(auStack_a4,s__03d_s_00071b7c,*(undefined1 *)((int)param_1 + iVar2 + 0x14),puVar4);
    FUN_001ab124(auStack_34,auStack_a4);
    FUN_000d7ac4(auStack_38,param_1[7] == iVar2);
    piVar3 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar3 + 0x28))
              (piVar3,auStack_9c + iVar2 * 0x14,0,0,auStack_34,auStack_38,0,0,1,0xffffffff);
  }
  FUN_00004074(auStack_9c,DAT_00071b84,0x14,4);
  FUN_00064a58(auStack_4c);
  FUN_000d7afc(auStack_38);
  FUN_001aafac(auStack_34);
  return;
}

