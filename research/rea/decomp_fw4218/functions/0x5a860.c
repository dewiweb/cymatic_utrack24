// rea decompile_all
// name: FUN_0005a860
// address: 0x5a860
// body: available
// range: 0x5a860-0x5aabf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0005a860(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_2c;
  
  puVar1 = DAT_0005aac0;
  local_2c = 1;
  uVar8 = *DAT_0005aac0;
  *DAT_0005aac0 = 0x201;
  puVar6 = puVar1 + -3;
  uVar9 = *puVar6;
  *puVar6 = 0x204;
  puVar7 = (undefined4 *)((uint)puVar6 | 8);
  uVar10 = *puVar7;
  *puVar7 = 7;
  for (iVar5 = 0xc; iVar5 < 0xe; iVar5 = iVar5 + 1) {
    iVar4 = FUN_0005ab34(param_1,iVar5 - 0xcU & 0xff,iVar5);
    if (iVar4 == 0) {
      return 0;
    }
  }
  iVar5 = 0xe;
  while( true ) {
    if (0xf < iVar5) {
      FUN_00096760(param_1[2]);
      FUN_00096760(param_1[3]);
      FUN_001d0130(5);
      uVar2 = FUN_000967b8(*param_1);
      uVar3 = FUN_000967b8(param_1[1]);
      iVar5 = FUN_000967b8(*param_1);
      if ((iVar5 != 0) || (iVar5 = FUN_000967b8(param_1[1]), iVar5 != 0)) {
        FUN_00002898(s_SPI_Test__0_0____d__d_0005aac4,uVar2,uVar3);
        local_2c = 0;
      }
      FUN_0009678c(param_1[2]);
      FUN_001d0130(5);
      uVar2 = FUN_000967b8(*param_1);
      uVar3 = FUN_000967b8(param_1[1]);
      iVar5 = FUN_000967b8(*param_1);
      if ((iVar5 != 1) || (iVar5 = FUN_000967b8(param_1[1]), iVar5 != 0)) {
        FUN_00002898(s_SPI_Test__1_0____d__d_0005aae0,uVar2,uVar3);
        local_2c = 0;
      }
      FUN_00096760(param_1[2]);
      FUN_0009678c(param_1[3]);
      FUN_001d0130(5);
      uVar2 = FUN_000967b8(*param_1);
      uVar3 = FUN_000967b8(param_1[1]);
      iVar5 = FUN_000967b8(*param_1);
      if ((iVar5 != 0) || (iVar5 = FUN_000967b8(param_1[1]), iVar5 != 1)) {
        FUN_00002898(s_SPI_Test__0_1____d__d_0005aafc,uVar2,uVar3);
        local_2c = 0;
      }
      FUN_0009678c(param_1[2]);
      FUN_0009678c(param_1[3]);
      FUN_001d0130(5);
      uVar2 = FUN_000967b8(*param_1);
      uVar3 = FUN_000967b8(param_1[1]);
      iVar5 = FUN_000967b8(*param_1);
      if ((iVar5 != 1) || (iVar5 = FUN_000967b8(param_1[1]), iVar5 != 1)) {
        FUN_00002898(s_SPI_Test__1_1____d__d_0005ab18,uVar2,uVar3);
        local_2c = 0;
      }
      *puVar6 = uVar9;
      *puVar7 = uVar10;
      *puVar1 = uVar8;
      return local_2c;
    }
    iVar4 = FUN_0005adc0(param_1,iVar5 - 0xcU & 0xff,iVar5);
    if (iVar4 == 0) break;
    iVar5 = iVar5 + 1;
  }
  return 0;
}

