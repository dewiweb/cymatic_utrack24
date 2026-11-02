// rea decompile_all
// name: FUN_0005ee04
// address: 0x5ee04
// body: available
// range: 0x5ee04-0x5ef33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0005ee04(int param_1,undefined1 param_2,uint param_3,undefined1 *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_28;
  
  local_28 = (uint)param_4 & 0xffff0000;
  FUN_001a0700(param_1 + 0xc);
  *(undefined1 *)((local_28 & 0xffff) + param_1 + 0x30) = param_2;
  uVar1 = (local_28 & 0xffff) + 1 & 0xfffeffff;
  *(undefined1 *)(param_1 + uVar1 + 0x30) = 0;
  local_28 = CONCAT22(local_28._2_2_,(short)uVar1 + 3);
  FUN_000778e8(param_3,param_1 + 0x30,&local_28);
  if (param_3 != 0) {
    iVar2 = 0;
    uVar1 = param_3;
    do {
      uVar1 = uVar1 - 1;
      iVar3 = (local_28 & 0xffff) + iVar2;
      iVar2 = iVar2 + 1;
      *(undefined1 *)(iVar3 + param_1 + 0x30) = *param_4;
      param_4 = param_4 + 1;
    } while (uVar1 != 0);
    local_28 = CONCAT22(local_28._2_2_,(short)local_28 + (short)param_3);
  }
  if ((param_5 != 0) && (uVar1 = 0, param_3 != 0)) {
    do {
      FUN_0007791c(*(undefined4 *)(param_5 + uVar1 * 4),param_1 + 0x30,&local_28);
      uVar1 = uVar1 + 1 & 0xfffeffff;
    } while (uVar1 < param_3);
  }
  uVar1 = local_28 & 0xffff;
  local_28 = CONCAT22(local_28._2_2_,2);
  FUN_000778e8(uVar1 - 4 & 0xffff,param_1 + 0x30,&local_28);
  FUN_0005ad9c(param_1,param_1 + 0x30,uVar1);
  FUN_001a0d18(param_1 + 0xc);
  return;
}

