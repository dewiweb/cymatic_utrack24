// rea decompile_all
// name: FUN_0009dac8
// address: 0x9dac8
// body: available
// range: 0x9dac8-0x9dbdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0009dac8(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_14 [4];
  
  iVar2 = FUN_000b4474(param_1);
  piVar3 = (int *)FUN_00071d70(iVar2 + 4,s_Rotary_Control_0009dbe0,0,1,0x14,DAT_0009dbdc,
                               DAT_0009dbdc,DAT_0009dbdc,DAT_0009dbdc,DAT_0009dbdc,DAT_0009dbdc);
  iVar2 = _DAT_0009dbf0;
  piVar3[-1] = _DAT_0009dbf0;
  *piVar3 = iVar2 + 0x34;
  uVar4 = FUN_00230470(auStack_14);
  iVar2 = FUN_00236d08(piVar3 + 0x45,uVar4);
  iVar2 = FUN_00091838(iVar2 + 0x18,s___UIRotaryControl_0009dbf2 + 2);
  bVar1 = false;
  while (!bVar1) {
    *(undefined4 *)(iVar2 + 0x24) = 0;
    if (*DAT_0009dc04 != 'c') {
      iVar5 = FUN_001c6b14(0x2c,DAT_0009dc08);
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_001a84e0(iVar5,*(undefined2 *)(DAT_0009dc04 + 2));
      }
      *(undefined4 *)(iVar2 + 0x24) = uVar4;
    }
    bVar1 = true;
  }
  FUN_0006f678(iVar2 + -300);
  return iVar2 + -0x130;
}

