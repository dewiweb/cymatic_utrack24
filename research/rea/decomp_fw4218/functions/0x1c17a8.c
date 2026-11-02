// rea decompile_all
// name: FUN_001c17a8
// address: 0x1c17a8
// body: available
// range: 0x1c17a8-0x1c18d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_001c17a8(undefined4 *param_1,int param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  
  param_1[1] = 0x20;
  param_1[3] = param_4;
  uVar1 = DAT_001c18d4;
  param_1[2] = 0;
  *param_1 = uVar1;
  param_1[5] = param_2;
  *(undefined1 *)(param_1 + 6) = param_3;
  if (param_2 == 0) {
    param_1[5] = DAT_001c18d8;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  uVar5 = 0;
  uVar6 = 0xff;
  do {
    iVar3 = FUN_001c0e44(param_1,0x10,uVar5 & 0xff);
    if (iVar3 != 0) goto LAB_001c17f0;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xff);
LAB_001c17fc:
  param_1[8] = uVar6;
  param_1[7] = uVar5;
  puVar4 = (undefined1 *)FUN_001c6a8c((uVar6 - uVar5) + 1);
  param_1[0xb] = puVar4;
  for (; uVar5 <= uVar6; uVar5 = uVar5 + 1) {
    if ((uVar5 - 0x61 < 0x1a) && (iVar3 = FUN_001c0e44(param_1,0x10,uVar5 & 0xff), iVar3 != 0)) {
      iVar3 = FUN_001c0e44(param_1,8,uVar5 - 0x20 & 0xff);
      if (iVar3 == 0) goto LAB_001c1840;
      uVar2 = (undefined1)(uVar5 - 0x20);
    }
    else {
LAB_001c1840:
      uVar2 = (undefined1)uVar5;
    }
    *puVar4 = uVar2;
    puVar4 = puVar4 + 1;
  }
  uVar5 = 0;
  uVar6 = 0xff;
  do {
    iVar3 = FUN_001c0e44(param_1,8,uVar5 & 0xff);
    if (iVar3 != 0) goto LAB_001c1874;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xff);
LAB_001c1880:
  param_1[10] = uVar6;
  param_1[9] = uVar5;
  puVar4 = (undefined1 *)FUN_001c6a8c((uVar6 - uVar5) + 1);
  param_1[0xc] = puVar4;
  do {
    if (uVar6 < uVar5) {
      return param_1;
    }
    if ((uVar5 - 0x41 < 0x1a) && (iVar3 = FUN_001c0e44(param_1,8,uVar5 & 0xff), iVar3 != 0)) {
      iVar3 = FUN_001c0e44(param_1,0x10,uVar5 + 0x20 & 0xff);
      if (iVar3 == 0) goto LAB_001c18c4;
      uVar2 = (undefined1)(uVar5 + 0x20);
    }
    else {
LAB_001c18c4:
      uVar2 = (undefined1)uVar5;
    }
    *puVar4 = uVar2;
    puVar4 = puVar4 + 1;
    uVar5 = uVar5 + 1;
  } while( true );
LAB_001c17f0:
  while ((uVar5 < uVar6 && (iVar3 = FUN_001c0e44(param_1,0x10,uVar6 & 0xff), iVar3 == 0))) {
    uVar6 = uVar6 - 1;
  }
  goto LAB_001c17fc;
LAB_001c1874:
  while ((uVar5 < uVar6 && (iVar3 = FUN_001c0e44(param_1,8,uVar6 & 0xff), iVar3 == 0))) {
    uVar6 = uVar6 - 1;
  }
  goto LAB_001c1880;
}

