// rea decompile_all
// name: FUN_00045ca8
// address: 0x45ca8
// body: available
// range: 0x45ca8-0x45dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00045ca8(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  
  puVar2 = DAT_00045dc4;
  if (DAT_00045dc4[0xc] == 0) goto LAB_00045d28;
  if ((*DAT_00045dc4 & 2) == 0) {
LAB_00045d08:
    FUN_001cfa80(puVar2 + 0xc);
  }
  else {
    FUN_001f00bc(DAT_00045dc4 + 2);
    *puVar2 = *puVar2 & 0xfffffffd;
    FUN_001f06d4(puVar2 + 2);
    FUN_001e1528(puVar2[0x3c]);
    FUN_001cfbd8(puVar2 + 0xc,500);
    if (puVar2[0xc] != 0) goto LAB_00045d08;
  }
  if (puVar2[0xb] != 0) {
    FUN_001eecc8();
    puVar2[0xb] = 0;
  }
  puVar2[0xc] = 0;
LAB_00045d28:
  FUN_001f00bc(puVar2 + 2);
  piVar1 = (int *)puVar2[0x3a];
  while (piVar1 != (int *)0x0) {
    piVar4 = (int *)piVar1[1];
    FUN_0001e38c(*piVar1,0);
    iVar3 = *piVar1;
    FUN_00024354(iVar3);
    piVar1 = piVar4;
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x10) != 0) {
        FUN_001eecc8();
        *(undefined4 *)(iVar3 + 0x10) = 0;
      }
      if (*(int *)(iVar3 + 0x14) != 0) {
        FUN_001cfa80(iVar3 + 0x14);
      }
      FUN_001f01ac(iVar3 + 0xcc);
      FUN_001eecc8(iVar3);
    }
  }
  puVar2[0x3b] = 0;
  FUN_001f06d4(puVar2 + 2);
  FUN_001f01ac(puVar2 + 2);
  FUN_00003c58(DAT_00045dc4,0x1dc);
  puVar2[0x3c] = 0xffffffff;
  return;
}

