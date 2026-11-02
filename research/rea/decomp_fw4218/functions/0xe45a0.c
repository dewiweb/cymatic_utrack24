// rea decompile_all
// name: FUN_000e45a0
// address: 0xe45a0
// body: available
// range: 0xe45a0-0xe469b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000e45a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  iVar2 = FUN_001b5b0c(uVar1);
  if (iVar2 == 3) {
    FUN_00094f64(uVar1,1);
    uVar3 = FUN_00230e4c(&uStack_28);
    uVar3 = FUN_00231ef4(&uStack_24,u__MultiTrack_000e469c,uVar3);
    FUN_000bc6c0(param_1 + 0x14,uVar3);
    FUN_00232190(&uStack_24);
    FUN_000952cc(uVar1);
    FUN_0023adc8();
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    FUN_00095224(uVar1,0x100);
    FUN_000950d8(uVar1);
    FUN_00002898(s_TRACE__USB_WAS_FORMATTED____000e46b4);
    FUN_0023219c(DAT_000e46d4,s_TRACE__USB_WAS_FORMATTED____000e46b4 + 0x1c);
    FUN_0023219c(DAT_000e46d8,s_TRACE__USB_WAS_FORMATTED____000e46b4 + 0x1c);
    FUN_00093bf4(uVar1,DAT_000e46d4);
    FUN_0009350c(uVar1,DAT_000e46d8);
    iVar2 = DAT_000e46d4;
    *(undefined4 *)(DAT_000e46d4 + 0x80) = 0;
    iVar2 = FUN_00094d30(uVar1,*(undefined4 *)(iVar2 + 0x80));
  }
  return iVar2;
}

