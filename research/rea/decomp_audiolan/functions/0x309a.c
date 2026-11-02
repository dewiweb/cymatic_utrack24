// rea decompile_all
// name: FUN_0000309a
// address: 0x309a
// body: available
// range: 0x309a-0x317b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0000309a(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int local_30;
  
  puVar6 = (undefined1 *)0x0;
  uVar1 = param_3[1];
  iVar5 = 0;
  local_30 = param_3[2];
  iVar2 = (*(code *)param_3[6])(param_2);
  if (param_4 == 0 && param_5 == 0) {
    while (iVar4 = (*(code *)param_3[8])(iVar2), iVar4 != 0) {
      iVar5 = iVar5 + 1;
      iVar2 = (*(code *)param_3[6])(param_2);
    }
  }
  if (iVar2 == -1) {
    iVar5 = -1;
  }
  else {
    if ((uVar1 & 1) == 0) {
      puVar3 = (undefined4 *)*param_3;
      *param_3 = puVar3 + 1;
      puVar6 = (undefined1 *)*puVar3;
    }
    while ((0 < local_30 && (iVar2 != -1))) {
      if (param_4 == 0) {
        if ((param_5 == 0) && (iVar4 = (*(code *)param_3[8])(iVar2), iVar4 != 0)) break;
      }
      else if ((*(uint *)(((int)(((uint)(iVar2 >> 0x1f) >> 0x1b) + iVar2) >> 5) * 4 + param_4) &
               1 << (iVar2 % 0x20 & 0xffU)) == 0) break;
      if ((uVar1 & 1) == 0) {
        *puVar6 = (char)iVar2;
        puVar6 = puVar6 + 1;
      }
      local_30 = local_30 + -1;
      iVar5 = iVar5 + 1;
      iVar2 = (*(code *)param_3[6])(param_2);
    }
    (*(code *)param_3[7])(param_2);
    if ((uVar1 & 1) == 0 && param_5 == 0) {
      *puVar6 = 0;
    }
    if (((int)param_3[2] <= local_30) || ((param_5 != 0 && (local_30 != 0)))) {
      iVar5 = -2;
    }
  }
  return iVar5;
}

