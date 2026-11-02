// rea decompile_all
// name: FUN_000db0c8
// address: 0xdb0c8
// body: available
// range: 0xdb0c8-0xdb1ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000db0c8(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_38 [40];
  
  uVar7 = FUN_000b9aac();
  uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
  iVar2 = (int)uVar7;
  iVar5 = *(int *)(iVar2 + 0x208);
  if ((int)param_2 < 0) {
    param_2 = *(uint *)(iVar2 + 0x214);
  }
  iVar6 = iVar5;
  iVar1 = *(int *)(iVar5 + 4);
  while (iVar1 != 0) {
    uVar4 = *(uint *)(iVar1 + 0x10);
    if (uVar4 < param_2) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar6 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if ((iVar6 == iVar5) || (param_2 < *(uint *)(iVar6 + 0x10))) {
    iVar6 = iVar5;
  }
  if (iVar6 != iVar5) {
    FUN_000844d8(auStack_38,uVar4,iVar2 + 0x1f8);
    iVar2 = FUN_000839e4(auStack_38,*(undefined4 *)(iVar6 + 0x1c));
    if (iVar2 != 0) {
      uVar3 = thunk_FUN_0008b5d4();
      iVar2 = FUN_000b7b00(uVar3,auStack_38,param_3);
      FUN_00084514(auStack_38);
      return iVar2 != 2;
    }
    FUN_00084514(auStack_38);
  }
  FUN_000028a4(DAT_000db1ac,param_2);
  return false;
}

