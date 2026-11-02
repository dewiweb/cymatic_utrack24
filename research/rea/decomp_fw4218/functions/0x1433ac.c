// rea decompile_all
// name: FUN_001433ac
// address: 0x1433ac
// body: available
// range: 0x1433ac-0x143445 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_001433ac(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  
  puVar1 = (undefined4 *)
           FUN_00071d70(param_1,s_PTP_Notification_0014344c,0,1,0x14,DAT_00143448,DAT_00143448,
                        DAT_00143448,DAT_00143448,DAT_00143448,DAT_00143448);
  *puVar1 = _DAT_00143460;
  puVar1[0x46] = 0;
  FUN_001f0168(puVar1 + 0x45,s___PTP2_Notification_00143462 + 2);
  piVar5 = puVar1 + 0x4e;
  *piVar5 = 0;
  puVar1[0x52] = 0;
  puVar1[0x53] = 0;
  *(undefined1 *)(puVar1 + 0x54) = 0;
  *(char *)((int)puVar1 + 0x151) = (char)piVar5;
  puVar1[0x51] = 0;
  puVar1[0x50] = 0;
  puVar1[0x4f] = 0;
  piVar2 = (int *)FUN_00173860(0xc,0);
  iVar3 = FUN_00173860(0x14,0);
  piVar2[2] = iVar3;
  iVar3 = *piVar5;
  piVar2[1] = 1;
  *piVar2 = iVar3;
  *piVar5 = (int)piVar2;
  iVar3 = piVar2[2];
  puVar1[0x50] = iVar3;
  puVar1[0x51] = iVar3 + 0x14;
  puVar4 = (undefined1 *)puVar1[0x50];
  puVar1[0x50] = puVar4 + 0x14;
  *(undefined4 *)(puVar4 + 8) = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  *puVar4 = 0;
  puVar1[0x52] = puVar4;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined4 *)(puVar1[0x52] + 8) = puVar1[0x52];
  *(undefined4 *)(puVar1[0x52] + 0xc) = puVar1[0x52];
  FUN_0006f678(puVar1);
  return puVar1;
}

