// rea decompile_all
// name: FUN_0008d024
// address: 0x8d024
// body: available
// range: 0x8d024-0x8d07f inclusive
// range: 0x8d0d4-0x8d21f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0008d0e8) */
/* WARNING: Removing unreachable block (ram,0x0008d0fc) */
/* WARNING: Removing unreachable block (ram,0x0008d104) */
/* WARNING: Removing unreachable block (ram,0x0008d10c) */
/* WARNING: Removing unreachable block (ram,0x0008d114) */
/* WARNING: Removing unreachable block (ram,0x0008d120) */

void FUN_0008d024(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  param_1[3] = param_1[3] + 1;
  piVar3 = *(int **)(*param_1 + 0x124);
  if (*(int **)(*param_1 + 0x128) != piVar3) {
    do {
      switch((*(uint *)(*(int *)(*(int *)*piVar3 + 0x18) + 8) & 0x3ff) >> 6) {
      case 0:
      case 1:
      case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 3:
      case 4:
      case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)((int *)*piVar3 + 3) = 0;
      if (*(char *)(*piVar3 + 0xd) == '\0') {
        iVar2 = *(int *)(*piVar3 + 8);
        cVar1 = *(char *)(iVar2 + 0xcc);
        if ((cVar1 == '\x01') ||
           ((cVar1 != '\x02' &&
            (((cVar1 != '\x03' && (cVar1 == '\x04')) || (*(int *)(iVar2 + 0xd0) != 0xff)))))) {
          *(undefined4 *)(iVar2 + 0xd0) = 0xff;
          (**(code **)(*(int *)(iVar2 + 0xb0) + 8))();
        }
        iVar2 = *(int *)(*piVar3 + 8);
        cVar1 = *(char *)(iVar2 + 0x8c);
        if ((cVar1 == '\x01') ||
           ((cVar1 != '\x02' &&
            (((cVar1 != '\x03' && (cVar1 == '\x04')) || (*(char *)(iVar2 + 0x8d) != '\0')))))) {
          *(undefined1 *)(iVar2 + 0x8d) = 0;
          (**(code **)(*(int *)(iVar2 + 0x70) + 8))();
        }
      }
      piVar3 = piVar3 + 1;
    } while (*(int **)(*param_1 + 0x128) != piVar3);
  }
  if (*(int *)(*param_1 + 0x128) - *(int *)(*param_1 + 0x124) >> 2 == 0) {
    *(undefined1 *)(param_1 + 2) = 0;
    return;
  }
  (**(code **)(*(int *)param_1[1] + 0x24))((int *)param_1[1],0,0,100,0);
  return;
}

