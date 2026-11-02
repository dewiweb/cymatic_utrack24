// rea decompile_all
// name: FUN_00147b24
// address: 0x147b24
// body: available
// range: 0x147b24-0x147c67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00147b24(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined2 *puVar4;
  uint uVar5;
  
  *param_1 = DAT_00147c68;
  piVar3 = DAT_00147c70;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 4);
  *param_1 = DAT_00147c6c;
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((int)param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((int)param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  iVar1 = *(int *)(param_2 + 0x14);
  if (*(int *)(iVar1 + -0xc) == -1) {
    uVar5 = *(uint *)(iVar1 + -4);
    if (0xfffffff1 < uVar5) {
      FUN_00173800(8,DAT_00147c74,DAT_00147c74,uVar5,0xfffffff1);
    }
    if (uVar5 != 0) {
      piVar3 = (int *)FUN_00173860((uVar5 + 8) * 2,0);
      if (piVar3 != (int *)0x0) {
        *piVar3 = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
      }
      piVar3[2] = uVar5;
      *piVar3 = 0;
      piVar3[1] = uVar5;
      puVar4 = (undefined2 *)((int)piVar3 + uVar5 * 2 + 0xc);
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    param_1[5] = piVar3 + 3;
    FUN_000039e0(piVar3 + 3,*(undefined4 *)(param_2 + 0x14),uVar5 << 1);
  }
  else {
    param_1[5] = iVar1;
    piVar2 = (int *)(iVar1 + -0xc);
    if (piVar2 != piVar3) {
      *piVar2 = *piVar2 + 1;
    }
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((int)param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  return param_1;
}

