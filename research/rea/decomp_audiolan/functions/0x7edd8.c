// rea decompile_all
// name: FUN_0007edd8
// address: 0x7edd8
// body: available
// range: 0x7edd8-0x7eebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0007edd8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_0016deb0(param_2,DAT_0007eec4,DAT_0007eec0,0xffffffff);
  if (iVar1 == 0) {
    return 0xfffffffb;
  }
  if (param_5 == 0) {
    FUN_0009aad4(param_4,*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18) >> 2);
  }
  else {
    FUN_0009aaa2();
  }
  uVar3 = 0;
  if (*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18) >> 2 != 0) {
    do {
      iVar4 = *(int *)(*(int *)(iVar1 + 0x18) + uVar3 * 4);
      if (iVar4 == 0) {
        return 0xffffff2c;
      }
      if (param_5 == 0) {
        uVar2 = FUN_00154dc8(iVar4);
        FUN_0009aaa6(param_4,iVar4,uVar2);
      }
      else {
        uVar2 = FUN_00154dc8(iVar4);
        FUN_0009aa74(param_4,iVar4,uVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18) >> 2));
  }
  return 0;
}

