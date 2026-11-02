// rea decompile_all
// name: FUN_000510fc
// address: 0x510fc
// body: available
// range: 0x510fc-0x5146f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000510fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined3 local_1f;
  
  _local_20 = CONCAT31((int3)((uint)param_4 >> 8),0x70);
  local_24 = CONCAT31((int3)((uint)param_3 >> 8),0x71);
  iVar3 = FUN_000514e8(param_1);
  uVar2 = DAT_000514ac;
  puVar1 = DAT_000514a8;
  local_28 = param_2;
  if (iVar3 == 0) {
    FUN_000028a4(s_ERROR__executeI2CRegTest__initia_00051470);
    uVar4 = 0;
  }
  else {
    *DAT_000514a8 = DAT_000514ac;
    puVar1[1] = uVar2;
    FUN_000863b4(*(undefined4 *)(param_1 + 0x18));
    FUN_000863b4(*(undefined4 *)(param_1 + 0x1c));
    _local_20 = CONCAT11(0xc0,local_20);
    FUN_000c941c();
    (*DAT_000514b0)(&local_20,2);
    FUN_0017b9f8(10);
    iVar3 = FUN_00050c94(param_1,(undefined1)local_1f);
    uVar4 = (uint)(iVar3 != 0);
    FUN_000c941c();
    (*_DAT_000514b4)(&local_24,2);
    if ((local_24 & 0xc000) != 0) {
      local_28 = 0;
      FUN_000028a4(s__ERROR__ERROR__bits_7_6___d_d_in_000514b7 + 1,local_24._1_1_ >> 7,
                   (local_24._1_1_ & 0x40) >> 6,0);
    }
    FUN_000863e0(*(undefined4 *)(param_1 + 0x18));
    FUN_000863b4(*(undefined4 *)(param_1 + 0x1c));
    _local_20 = CONCAT11(0xd5,local_20);
    FUN_000c941c();
    (*DAT_000514b0)(&local_20,2);
    FUN_0017b9f8(10);
    iVar3 = FUN_00050c94(param_1,(undefined1)local_1f);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    FUN_000c941c();
    (*_DAT_000514b4)(&local_24,2);
    if ((local_24._1_1_ & 0xc0) != 0x40) {
      local_28 = 1;
      FUN_000028a4(s__ERROR__ERROR__bits_7_6___d_d_in_000514b7 + 1,local_24._1_1_ >> 7,
                   (local_24._1_1_ & 0x40) >> 6,0);
    }
    FUN_000863b4(*(undefined4 *)(param_1 + 0x18));
    FUN_000863e0(*(undefined4 *)(param_1 + 0x1c));
    _local_20 = CONCAT11(0xca,local_20);
    FUN_000c941c();
    (*DAT_000514b0)(&local_20,2);
    FUN_0017b9f8(10);
    iVar3 = FUN_00050c94(param_1,(undefined1)local_1f);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    FUN_000c941c();
    (*_DAT_000514b4)(&local_24,2);
    if ((local_24._1_1_ & 0xc0) != 0x80) {
      local_28 = 0;
      FUN_000028a4(s__ERROR__ERROR__bits_7_6___d_d_in_000514b7 + 1,local_24._1_1_ >> 7,
                   (local_24._1_1_ & 0x40) >> 6,1);
    }
    FUN_000863e0(*(undefined4 *)(param_1 + 0x18));
    FUN_000863e0(*(undefined4 *)(param_1 + 0x1c));
    _local_20 = CONCAT11(0xd3,local_20);
    FUN_000c941c();
    (*DAT_000514b0)(&local_20,2);
    FUN_0017b9f8(10);
    iVar3 = FUN_00050c94(param_1,(undefined1)local_1f);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    FUN_000c941c();
    (*_DAT_000514b4)(&local_24,2);
    if ((local_24._1_1_ & 0xc0) != 0xc0) {
      local_28 = 1;
      FUN_000028a4(s__ERROR__ERROR__bits_7_6___d_d_in_000514b7 + 1,local_24._1_1_ >> 7,
                   (local_24._1_1_ & 0x40) >> 6,1);
    }
    FUN_000863b4(*(undefined4 *)(param_1 + 0x18));
    FUN_000863b4(*(undefined4 *)(param_1 + 0x1c));
    _local_20 = CONCAT11(0xcc,local_20);
    FUN_000c941c();
    (*DAT_000514b0)(&local_20,2);
    FUN_0017b9f8(10);
    iVar3 = FUN_00050c94(param_1,(undefined1)local_1f);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    FUN_000c941c();
    (*_DAT_000514b4)(&local_24,2);
    if ((local_24 & 0xc000) != 0) {
      local_28 = 0;
      FUN_000028a4(s__ERROR__ERROR__bits_7_6___d_d_in_000514b7 + 1,local_24._1_1_ >> 7,
                   (local_24._1_1_ & 0x40) >> 6,0);
    }
  }
  return CONCAT44(local_28,uVar4);
}

