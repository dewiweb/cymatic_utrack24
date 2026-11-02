// rea decompile_all
// name: FUN_0017930c
// address: 0x17930c
// body: available
// range: 0x17930c-0x1795db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0017930c(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  
  puVar1 = (undefined4 *)FUN_000b43f8(param_1);
  *puVar1 = DAT_001795dc;
  iVar2 = FUN_00091838(puVar1 + 1,s_HWComSPI_001795e0);
  iVar2 = FUN_00091838(iVar2 + 0x24,s_HWComI2C_001795ec);
  iVar3 = FUN_001c6b14(0x100,DAT_001795f8);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00179820(iVar3,s_HWCom_Unmute_Timer_00179600,DAT_001795fc,DAT_001795fc,0x400,
                         DAT_001795fc,DAT_001795fc);
  }
  iVar2 = FUN_00245070(iVar2 + 0x24,uVar4);
  iVar2 = FUN_00177700(iVar2 + 4);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(undefined1 *)(iVar2 + 8) = 0;
  *(undefined1 *)(iVar2 + 9) = 0;
  *(undefined1 *)(iVar2 + 10) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
  iVar2 = FUN_000b8790(iVar2 + 0x18,iVar2 + -0x50);
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  uVar4 = FUN_00115384(auStack_24,0,1,6,0x1c,0x30,0);
  iVar2 = FUN_001a3308(iVar2 + 0x4c,iVar2 + -0x68,0x160,uVar4);
  FUN_001153bc(auStack_24);
  uVar4 = FUN_00115384(auStack_34,1,1,6,0x1c,0x30,0);
  iVar2 = FUN_001a3308(iVar2 + 0x98,iVar2 + -0xb4,0x160,uVar4);
  FUN_001153bc(auStack_34);
  uVar4 = FUN_00115384(auStack_44,2,1,6,0x1c,0x30,0);
  iVar2 = FUN_001a3308(iVar2 + 0x98,iVar2 + -0x14c,0x160,uVar4);
  FUN_001153bc(auStack_44);
  iVar2 = FUN_0005b1b4(iVar2 + 0x98);
  iVar2 = FUN_001a4150(iVar2 + 0x50,iVar2 + -0x27c,DAT_00179614);
  iVar2 = FUN_00173734(iVar2 + 0x48,iVar2 + -0x2cc,DAT_00179618);
  iVar2 = FUN_00171608(iVar2 + 0x2c,iVar2 + -0x314,DAT_0017961c);
  iVar2 = FUN_001a66dc(iVar2 + 0x20,iVar2 + -0x340,0x164);
  *(undefined4 *)(iVar2 + 0x14) = 2;
  *(undefined1 *)(iVar2 + 0x18) = 1;
  uVar4 = FUN_00013224(s__dev_spi0_00179620,0);
  *(undefined4 *)(iVar2 + -0x2fc) = uVar4;
  if (*(int *)(iVar2 + -0x2fc) < 0) {
    FUN_00002898(s_ERROR__HWCom__Can_t_initialize_S_0017962c);
  }
  iVar3 = FUN_001db900(s_SVWHERROR__HWCom__HWVS_not_found_0017965c._0_4_,iVar2 + -0x30c);
  if (iVar3 != 0) {
    FUN_00002898(s_SVWHERROR__HWCom__HWVS_not_found_0017965c + 4);
    *(undefined4 *)(iVar2 + -0x30c) = 2;
  }
  *(undefined4 *)(iVar2 + 0x1c) = 8;
  return iVar2 + -0x360;
}

