// rea decompile_all
// name: FUN_00050d28
// address: 0x50d28
// body: available
// range: 0x50d28-0x50eab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00050d28(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar3 = DAT_00050eb0;
  puVar1 = DAT_00050eac;
  uVar6 = *DAT_00050eac;
  *DAT_00050eac = DAT_00050eb0;
  puVar5 = puVar1 + -1;
  uVar7 = *puVar5;
  *puVar5 = uVar3;
  for (uVar4 = 4; (int)uVar4 < 7; uVar4 = uVar4 + 1) {
    iVar2 = FUN_00050ebc(param_1,uVar4 & 0xff,uVar4);
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar4 = 8;
  while( true ) {
    if (10 < (int)uVar4) {
      FUN_00051ac0(param_1,0,8);
      FUN_0017b9f8(0x14);
      uVar3 = FUN_00051990(param_1,0,4,s_AV0_2_00050eb4,1);
      FUN_00051ac0(param_1,7,8);
      FUN_0017b9f8(0x14);
      uVar3 = FUN_00051990(param_1,7,4,s_AV0_2_00050eb4,uVar3);
      FUN_00051ac0(param_1,5,8);
      FUN_0017b9f8(0x14);
      uVar3 = FUN_00051990(param_1,5,4,s_AV0_2_00050eb4,uVar3);
      FUN_00051ac0(param_1,2,8);
      FUN_0017b9f8(0x14);
      uVar3 = FUN_00051990(param_1,2,4,s_AV0_2_00050eb4,uVar3);
      *puVar5 = uVar7;
      *puVar1 = uVar6;
      return uVar3;
    }
    iVar2 = FUN_00050fd8(param_1,uVar4 & 0xff,uVar4);
    if (iVar2 == 0) break;
    uVar4 = uVar4 + 1;
  }
  return 0;
}

