// rea decompile_all
// name: FUN_0005a5ac
// address: 0x5a5ac
// body: available
// range: 0x5a5ac-0x5a737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0005a5ac(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar3 = DAT_0005a73c;
  puVar1 = DAT_0005a738;
  uVar6 = *DAT_0005a738;
  *DAT_0005a738 = DAT_0005a73c;
  puVar5 = puVar1 + -1;
  uVar7 = *puVar5;
  *puVar5 = uVar3;
  for (uVar4 = 4; (int)uVar4 < 8; uVar4 = uVar4 + 1) {
    iVar2 = FUN_0005ab34(param_1,uVar4 & 0xff,uVar4);
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar4 = 8;
  while( true ) {
    if (0xb < (int)uVar4) {
      FUN_0009665c(*(undefined4 *)(param_1 + 0x24));
      FUN_0005b0dc(param_1,0,8);
      FUN_001d0130(0x14);
      uVar3 = FUN_0005afac(param_1,0,4,s_AV0_2_0005a740,1);
      FUN_0005b0dc(param_1,0xf,8);
      FUN_001d0130(0x14);
      uVar3 = FUN_0005afac(param_1,0xf,4,s_AV0_2_0005a740,uVar3);
      FUN_0005b0dc(param_1,5,8);
      FUN_001d0130(0x14);
      uVar3 = FUN_0005afac(param_1,5,4,s_AV0_2_0005a740,uVar3);
      FUN_0005b0dc(param_1,10,8);
      FUN_001d0130(0x14);
      uVar3 = FUN_0005afac(param_1,10,4,s_AV0_2_0005a740,uVar3);
      *puVar5 = uVar7;
      *puVar1 = uVar6;
      return uVar3;
    }
    iVar2 = FUN_0005adc0(param_1,uVar4 & 0xff,uVar4);
    if (iVar2 == 0) break;
    uVar4 = uVar4 + 1;
  }
  return 0;
}

