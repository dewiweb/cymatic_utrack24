// rea decompile_all
// name: FUN_000765a8
// address: 0x765a8
// body: available
// range: 0x765a8-0x76737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000765a8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = DAT_00076738;
  if (param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      iVar1 = FUN_00003960(*(undefined4 *)(param_2 + param_3 * 4),&DAT_0007673c);
      if (iVar1 == 0) {
        uVar2 = 4;
      }
      iVar1 = FUN_00003960(*(undefined4 *)(param_2 + param_3 * 4),&DAT_00076744);
      if (iVar1 == 0) {
        uVar2 = 0x40;
      }
      iVar1 = FUN_00003960(*(undefined4 *)(param_2 + param_3 * 4),&DAT_0007674c);
      if (iVar1 == 0) {
        uVar2 = 0x10;
      }
      iVar1 = FUN_00003960(*(undefined4 *)(param_2 + param_3 * 4),&DAT_00076754);
      if (iVar1 == 0) {
        uVar2 = 0x100;
      }
      iVar1 = FUN_00003960(*(undefined4 *)(param_2 + param_3 * 4),&DAT_00076758);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      iVar1 = FUN_00003960(*(undefined4 *)(param_2 + param_3 * 4),s_heapc_00076760);
      if (iVar1 == 0) {
        uVar2 = 0x400;
      }
      iVar1 = FUN_00003960(*(undefined4 *)(param_2 + param_3 * 4),&DAT_00076768);
      if (iVar1 == 0) {
        uVar3 = uVar3 | 1;
      }
      iVar1 = FUN_00003960(*(undefined4 *)(param_2 + param_3 * 4),&DAT_00076770);
      if (iVar1 == 0) {
        uVar3 = uVar3 | 2;
      }
      iVar1 = FUN_00003960(*(undefined4 *)(param_2 + param_3 * 4),s_reset_00076778);
      if (iVar1 == 0) {
        uVar3 = uVar3 | 4;
      }
      iVar1 = FUN_00003960(*(undefined4 *)(param_2 + param_3 * 4),&LAB_00076780);
      if (iVar1 == 0) {
        uVar3 = uVar3 | 8;
      }
    } while (param_3 != 0);
    if (uVar3 != 0) goto LAB_000766a0;
  }
  uVar3 = 8;
LAB_000766a0:
  if ((uVar2 & 2) != 0) {
    thunk_FUN_00181dd4(1,uVar3,0);
  }
  if ((uVar2 & 0x100) != 0) {
    thunk_FUN_00181dd4(8,uVar3,0);
  }
  if ((uVar2 & 4) != 0) {
    thunk_FUN_00181dd4(2,uVar3,0);
  }
  if ((uVar2 & 0x10) != 0) {
    thunk_FUN_00181dd4(4,uVar3,0);
  }
  if ((uVar2 & 0x40) != 0) {
    thunk_FUN_00181dd4(6,uVar3,0);
  }
  if ((uVar2 & 0x400) != 0) {
    thunk_FUN_00181dd4(10,uVar3,0);
  }
  return 0;
}

