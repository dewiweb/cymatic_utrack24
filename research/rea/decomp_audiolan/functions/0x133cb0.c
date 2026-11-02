// rea decompile_all
// name: FUN_00133cb0
// address: 0x133cb0
// body: available
// range: 0x133cb0-0x133d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00133cb0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  bVar4 = *(short *)((int)param_1 + 6) != 0;
  if (bVar4) {
    local_40 = param_6;
    uStack_3c = param_5;
  }
  uVar3 = 0;
  if (bVar4) {
    do {
      iVar2 = *(int *)(*param_1 + uVar3 * 4);
      iVar1 = FUN_0010f598(iVar2 + 100,param_2);
      if (iVar1 == 0) {
        FUN_0010f650(iVar2 + 0x74,param_3);
        *(undefined4 *)(iVar2 + 0x80) = param_4;
        *(undefined4 *)(iVar2 + 0x88) = uStack_3c;
        *(undefined4 *)(iVar2 + 0x84) = local_40;
        *(undefined4 *)(iVar2 + 0x90) = param_9;
        *(undefined4 *)(iVar2 + 0x94) = param_8;
        *(undefined4 *)(iVar2 + 0x8c) = param_7;
        *(undefined4 *)(iVar2 + 0x9c) = param_11;
        *(undefined4 *)(iVar2 + 0x98) = param_10;
        FUN_0010e498(iVar2 + 0xac,param_12);
        FUN_0010e498(iVar2 + 0xb4,param_13);
        FUN_000ea348(iVar2 + 0xa0,param_14);
        *(undefined1 *)(iVar2 + 200) = 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)((int)param_1 + 6));
    return;
  }
  return;
}

