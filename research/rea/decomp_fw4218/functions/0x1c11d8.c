// rea decompile_all
// name: FUN_001c11d8
// address: 0x1c11d8
// body: available
// range: 0x1c11d8-0x1c130d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_001c11d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  uVar2 = FUN_001c110c(param_2);
  puVar3 = (undefined4 *)FUN_001c17a8(param_1,uVar2,0,param_3);
  *puVar3 = DAT_001c1310;
  if (puVar3[5] == DAT_001c1314) goto LAB_001c130a;
  *(undefined1 *)(puVar3 + 6) = 1;
  FUN_00173b62(&uStack_20,param_2,2);
  uVar5 = 0;
  uVar6 = 0xff;
  do {
    iVar4 = FUN_001c0e44(puVar3,0x10,uVar5 & 0xff);
    if (iVar4 != 0) goto LAB_001c1236;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xff);
  goto LAB_001c1242;
LAB_001c12b0:
  while ((uVar5 < uVar6 && (iVar4 = FUN_001c0e44(puVar3,8,uVar6 & 0xff), iVar4 == 0))) {
    uVar6 = uVar6 - 1;
  }
  goto LAB_001c12bc;
LAB_001c1236:
  while ((uVar5 < uVar6 && (iVar4 = FUN_001c0e44(puVar3,0x10,uVar6 & 0xff), iVar4 == 0))) {
    uVar6 = uVar6 - 1;
  }
LAB_001c1242:
  puVar3[8] = uVar6;
  puVar3[7] = uVar5;
  puVar7 = (undefined1 *)puVar3[0xb];
  for (; uVar5 <= uVar6; uVar5 = uVar5 + 1) {
    if ((uVar5 - 0x61 < 0x1a) && (iVar4 = FUN_001c0e44(puVar3,0x10,uVar5 & 0xff), iVar4 != 0)) {
      local_18 = uVar5 - 0x20;
      iVar4 = FUN_001c0e44(puVar3,8,local_18 & 0xff);
      if (iVar4 == 0) goto LAB_001c127c;
      uVar1 = (undefined1)local_18;
    }
    else {
LAB_001c127c:
      uVar1 = (undefined1)uVar5;
    }
    *puVar7 = uVar1;
    puVar7 = puVar7 + 1;
  }
  uVar5 = 0;
  uVar6 = 0xff;
  do {
    iVar4 = FUN_001c0e44(puVar3,8,uVar5 & 0xff);
    if (iVar4 != 0) goto LAB_001c12b0;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xff);
LAB_001c12bc:
  puVar3[10] = uVar6;
  puVar3[9] = uVar5;
  puVar7 = (undefined1 *)puVar3[0xc];
  for (; uVar5 <= uVar6; uVar5 = uVar5 + 1) {
    if ((uVar5 - 0x41 < 0x1a) && (iVar4 = FUN_001c0e44(puVar3,8,uVar5 & 0xff), iVar4 != 0)) {
      local_18 = uVar5 + 0x20;
      iVar4 = FUN_001c0e44(puVar3,0x10,local_18 & 0xff);
      if (iVar4 == 0) goto LAB_001c12f8;
      uVar1 = (undefined1)local_18;
    }
    else {
LAB_001c12f8:
      uVar1 = (undefined1)uVar5;
    }
    *puVar7 = uVar1;
    puVar7 = puVar7 + 1;
  }
  FUN_00173b9a(&uStack_20);
LAB_001c130a:
  return CONCAT44(uStack_20,puVar3);
}

