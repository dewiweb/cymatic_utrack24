// rea decompile_all
// name: FUN_00006ecc
// address: 0x6ecc
// body: available
// range: 0x6ecc-0x7037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00006ecc(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  piVar1 = (int *)FUN_00071d70(param_1 + 4,s_DataStreamManager_0000703c,0,4,0xf,DAT_00007038,
                               DAT_00007038,DAT_00007038,2000,DAT_00007038,DAT_00007038);
  iVar6 = DAT_00007050 + 0x54;
  piVar1[-1] = DAT_00007050;
  *piVar1 = iVar6;
  piVar1[0x46] = 0;
  FUN_001f0168(piVar1 + 0x45,s_DataStreamManager_0000703c);
  puVar2 = (undefined4 *)FUN_000b1210(piVar1 + 0x4e);
  *puVar2 = DAT_00007054;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2 = (undefined4 *)FUN_000b1210(puVar2 + 5);
  uVar5 = _DAT_00007058;
  piVar1 = puVar2 + 3;
  *puVar2 = _DAT_00007058;
  *piVar1 = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  *(char *)((int)puVar2 + 0x25) = (char)uVar5;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  piVar3 = (int *)FUN_00173860(0xc,0);
  iVar6 = FUN_00173860(0x44,0);
  piVar3[2] = iVar6;
  *piVar3 = *piVar1;
  piVar3[1] = 1;
  *piVar1 = (int)piVar3;
  puVar4 = (undefined1 *)piVar3[2];
  puVar2[5] = puVar4;
  puVar2[6] = puVar4 + 0x44;
  puVar2[5] = puVar4 + 0x44;
  *(undefined4 *)(puVar4 + 8) = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  *puVar4 = 0;
  puVar2[7] = puVar4;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined4 *)(puVar2[7] + 8) = puVar2[7];
  *(undefined4 *)(puVar2[7] + 0xc) = puVar2[7];
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined1 *)(puVar2 + 0xd) = 0;
  uVar5 = FUN_000b4964();
  FUN_000b4840(uVar5,s___AudioHWService_0000705a + 2,puVar2);
  FUN_0006f678(puVar2 + -0x53);
  FUN_001df87c(puVar2 + -0x1f);
  uVar5 = FUN_000b4964();
  FUN_000b472c(uVar5,puVar2 + -0x54);
  return puVar2 + -0x54;
}

