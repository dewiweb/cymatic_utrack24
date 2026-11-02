// rea decompile_all
// name: FUN_0015bf38
// address: 0x15bf38
// body: available
// range: 0x15bf38-0x15c05b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0015bfd4) */
/* WARNING: Removing unreachable block (ram,0x0015bfa8) */
/* WARNING: Removing unreachable block (ram,0x0015bfb4) */
/* WARNING: Removing unreachable block (ram,0x0015bfe0) */

undefined4 FUN_0015bf38(int param_1,int *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  
  if (*(char *)(param_1 + 4) == -0x80) {
    cVar3 = *(char *)(param_1 + 0xc);
    if (cVar3 == '\x02') {
      iVar4 = 0;
    }
    else if (cVar3 == '\x03') {
      iVar4 = 1;
    }
    else if (cVar3 == '\x04') {
      iVar4 = 2;
    }
    else {
      iVar4 = 0xff;
    }
    *param_2 = iVar4;
  }
  else {
    if (*(char *)(param_1 + 4) != -0x70) {
      *param_2 = 0xff;
      return 0;
    }
    pbVar5 = *(byte **)(param_1 + 8);
    bVar1 = *pbVar5;
    if (bVar1 == 2) {
LAB_0015c010:
      *param_2 = 0xff;
      return 0;
    }
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        iVar4 = FUN_00047560(**(undefined1 **)(pbVar5 + 4),*(undefined1 *)(param_1 + 0xc),
                             *(undefined1 *)(*(int *)(pbVar5 + 4) + 1));
        *param_2 = iVar4;
      }
      else if (bVar1 == 1) goto LAB_0015c010;
    }
    else if (bVar1 == 0x40) {
      uVar2 = **(undefined1 **)(pbVar5 + 4);
      iVar4 = FUN_0015d4b8(*(undefined4 *)(pbVar5 + 4),0);
      iVar4 = FUN_00047560(*(undefined1 *)(iVar4 + 0x18),*(undefined1 *)(param_1 + 0xc),uVar2);
      *param_2 = iVar4;
    }
    else if (bVar1 == 0xff) goto LAB_0015c010;
    iVar4 = *param_2;
  }
  if (iVar4 == 0xff) {
    return 0;
  }
  return 1;
}

