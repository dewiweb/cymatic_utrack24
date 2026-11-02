// rea decompile_all
// name: FUN_000b7e50
// address: 0xb7e50
// body: available
// range: 0xb7e50-0xb7f2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b7e50(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  
  iVar1 = param_1;
  if (param_3 != 0xff) {
    iVar1 = *(int *)(param_1 + 400);
  }
  if ((param_3 == 0xff || iVar1 == param_3) &&
     (iVar1 = FUN_0015750c(param_1 + 0x198,param_2), iVar1 != 0)) {
    return 0;
  }
  uStack_28 = *(undefined1 *)(param_1 + 0x184);
  uStack_27 = *(undefined1 *)(param_1 + 0x185);
  uStack_26 = *(undefined1 *)(param_1 + 0x186);
  uStack_25 = *(undefined1 *)(param_1 + 0x187);
  uStack_24 = *(undefined1 *)(param_1 + 0x188);
  uStack_23 = *(undefined1 *)(param_1 + 0x189);
  uStack_22 = *(undefined1 *)(param_1 + 0x18a);
  uStack_21 = *(undefined1 *)(param_1 + 0x18b);
  uStack_20 = *(undefined1 *)(param_1 + 0x18c);
  uStack_1f = *(undefined1 *)(param_1 + 0x18d);
  uStack_1e = *(undefined1 *)(param_1 + 0x18e);
  uStack_1c = *(undefined4 *)(param_1 + 400);
  uStack_18 = *(undefined1 *)(param_1 + 0x194);
  if (param_3 != 0xff) {
    FUN_000872a8(&uStack_28,param_3);
  }
  uVar2 = FUN_000b76b0(param_1,&uStack_28,param_2,0);
  return uVar2;
}

