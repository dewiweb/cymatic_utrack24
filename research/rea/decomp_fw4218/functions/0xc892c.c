// rea decompile_all
// name: FUN_000c892c
// address: 0xc892c
// body: available
// range: 0xc892c-0xc8a77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000c892c(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_2 + 0x14) = 9;
  *(undefined1 *)(param_2 + 0xc) = 1;
  *(undefined4 *)(param_2 + 0x10) = 8;
  iVar2 = FUN_001bab30(param_1 + 0x3d);
  uVar3 = DAT_000c8a84;
  uVar1 = DAT_000c8a78;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      iVar2 = (**(code **)(*param_1 + 0xf4))(param_1,param_2,100,DAT_000c8a80,DAT_000c8a7c);
      uVar3 = uVar1;
      if (iVar2 == 0) {
        return false;
      }
      goto LAB_000c8a4c;
    }
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        return false;
      }
      iVar2 = (**(code **)(*param_1 + 0xf4))(param_1,param_2,100,DAT_000c8a88,DAT_000c8a7c);
      if (iVar2 == 0) {
        return false;
      }
      goto LAB_000c8a4c;
    }
  }
  iVar2 = (**(code **)(*param_1 + 0xf4))(param_1,param_2,100,DAT_000c8a80,DAT_000c8a7c);
  uVar3 = uVar1;
  if (iVar2 == 0) {
    return false;
  }
LAB_000c8a4c:
  iVar2 = FUN_000c8f9c(param_1,param_2,uVar3);
  return iVar2 != 0;
}

