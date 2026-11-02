// rea decompile_all
// name: FUN_000033f4
// address: 0x33f4
// body: available
// range: 0x33f4-0x3443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000033f4(int param_1,undefined1 *param_2,uint param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_1c = 0;
  uVar3 = 0;
  local_20 = param_2;
  uStack_18 = param_4;
  do {
    do {
      if ((param_1 != 0) && (uVar2 = uVar3, param_3 <= uVar3)) goto LAB_0000343e;
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar2 = FUN_00004ebc(&local_20,uVar1,local_1c);
      if (uVar2 == 0xffffffff) goto LAB_0000343e;
    } while (uVar2 == 0xfffffffe);
    if (param_1 != 0) {
      *(short *)(param_1 + uVar3 * 2) = (short)local_20;
    }
    uVar2 = uVar3;
    uVar3 = uVar3 + 1;
  } while ((short)local_20 != 0);
LAB_0000343e:
  return CONCAT44(local_20,uVar2);
}

