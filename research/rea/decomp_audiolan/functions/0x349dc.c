// rea decompile_all
// name: FUN_000349dc
// address: 0x349dc
// body: available
// range: 0x349dc-0x34aad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000349dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_18;
  
  uVar3 = 0;
  if (param_1 != 0) {
    local_18 = param_4;
    FUN_00030aa4(param_1 + 0x218);
    FUN_00030aa4(param_1 + 0x234);
    FUN_000358a2(param_1 + 0x20c,0x30,10);
    *(undefined2 *)(param_1 + 0x208) = 0;
    *(undefined2 *)(param_1 + 0x20a) = 0;
    do {
      FUN_00036ae0(uVar3 * 0x18 + param_1 + 0x2e0);
      uVar3 = uVar3 + 1 & 0xffff;
    } while (uVar3 < 8);
    FUN_00036ae0(param_1 + 0x3bc);
    FUN_000273cc(param_1 + 0x28c);
    FUN_00034424(param_1 + 0x250);
    FUN_00027888(param_1 + 0x3a0);
    iVar4 = param_1 + 0x284;
    FUN_00029be4(iVar4,&local_18);
    while (iVar2 = FUN_00029ce6(iVar4,local_18), iVar2 == 0) {
      iVar2 = FUN_00029c28(iVar4,local_18);
      if (iVar2 != 0) {
        FUN_000272d2();
      }
      FUN_00029d38(iVar4,&local_18);
    }
    FUN_00029a4c(iVar4);
    uVar1 = DAT_00034ab0;
    iVar4 = FUN_00030b90(DAT_00034ab0);
    if (iVar4 != 0) {
      FUN_00029e6c(uVar1);
      FUN_00029eac(6,DAT_00034ab4,*(undefined2 *)(param_1 + 2));
    }
  }
  return;
}

