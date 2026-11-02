// rea decompile_all
// name: FUN_000d0700
// address: 0xd0700
// body: available
// range: 0xd0700-0xd08d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000d0700(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  byte local_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_00178f04();
  iVar2 = FUN_001776cc();
  if (iVar2 == 0) {
    uVar3 = FUN_0011eda0();
    FUN_0011ff88(uVar3,s_System_date___time_000d08e4,s_not_set__000d08d8);
    uVar3 = FUN_0011eda0();
    FUN_000a1000(uVar3,0x1c);
    FUN_000932c4(uVar1,0x40000001);
    FUN_001d0130(DAT_000d08f8);
  }
  else {
    uVar1 = FUN_00178f04();
    FUN_00176e14(uVar1,local_28,local_2c,local_30);
    uVar1 = FUN_00178f04();
    FUN_00176e40(uVar1,local_34,local_38,local_3c);
    piVar4 = (int *)FUN_000cbaf0();
    (**(code **)(*piVar4 + 0x10))
              (piVar4,local_28[0] + 2000,local_2c[0],local_30[0],local_34[0],local_38[0],local_3c[0]
              );
  }
  FUN_000bdabc(param_1 + 0x14,auStack_20,auStack_24);
  piVar4 = (int *)FUN_000cbaf0();
  uVar5 = (**(code **)(*piVar4 + 0x20))(piVar4);
  if (uVar5 < 0x8000) {
    uVar1 = FUN_0011eda0();
    FUN_001205a0(uVar1,s_Cluster_Size_Too_Small_000d08fc);
    uVar1 = FUN_0011eda0();
    FUN_0011fe74(uVar1,s_Format_USB_Drive__000d0918,s_not_set__000d08d8 + 8,0,&DAT_000d0914,0);
    uVar1 = FUN_0011eda0();
    FUN_000a1000(uVar1,0x1b);
    uVar1 = 1;
    *(undefined1 *)(param_1 + 0x98) = 1;
  }
  else {
    if (uVar5 == 0x8000) {
      uVar1 = FUN_0011eda0();
      FUN_001205a0(uVar1,s_Cluster_Size_Small__000d092c);
      uVar1 = FUN_0011eda0();
      FUN_0011ff88(uVar1,s_Please_reformat_Drive_000d0958,s_for_optimal_perfomance_000d0940);
      uVar1 = FUN_0011eda0();
      FUN_000a1000(uVar1,0x1c);
      FUN_001d0130(4000);
    }
    uVar1 = FUN_001a48f0(param_1,0xe,0);
  }
  return uVar1;
}

