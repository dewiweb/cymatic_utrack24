// rea decompile_all
// name: FUN_0015b388
// address: 0x15b388
// body: available
// range: 0x15b388-0x15b513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0015b388(int param_1,uint *param_2)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  FUN_00155054();
  puVar3 = (undefined1 *)(*param_2 + 3 & 0xfffffffc);
  *param_2 = (uint)puVar3;
  *puVar3 = *(undefined1 *)(param_1 + 0x70);
  uVar4 = *param_2;
  *param_2 = uVar4 + 1;
  *(undefined1 *)(uVar4 + 1) = *(undefined1 *)(param_1 + 0x71);
  uVar4 = *param_2;
  *param_2 = uVar4 + 1;
  FUN_000039e0(uVar4 + 1,param_1 + 0x72,6);
  *param_2 = *param_2 + 9 & 0xfffffffc;
  FUN_00171f98(param_2,param_1 + 0x44);
  FUN_00171f98(param_2,param_1 + 0x50);
  *(undefined4 *)*param_2 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = *param_2;
  *param_2 = uVar4 + 4;
  *(undefined4 *)(uVar4 + 4) = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *param_2;
  *param_2 = uVar4 + 4;
  *(undefined4 *)(uVar4 + 4) = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *param_2;
  *param_2 = uVar4 + 4;
  *(undefined4 *)(uVar4 + 4) = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *param_2;
  *param_2 = uVar4 + 4;
  *(undefined4 *)(uVar4 + 4) = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *param_2;
  *param_2 = uVar4 + 4;
  *(undefined4 *)(uVar4 + 4) = *(undefined4 *)(param_1 + 0x38);
  uVar4 = *param_2;
  *param_2 = uVar4 + 4;
  *(undefined4 *)(uVar4 + 4) = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = *param_2;
  *param_2 = uVar4 + 4;
  *(undefined4 *)(uVar4 + 4) = *(undefined4 *)(param_1 + 0x40);
  uVar4 = *param_2;
  *param_2 = uVar4 + 4;
  *(undefined2 *)(uVar4 + 4) = *(undefined2 *)(param_1 + 0x62);
  uVar4 = *param_2;
  *param_2 = uVar4 + 2;
  uVar1 = *(ushort *)(param_1 + 0x62);
  FUN_000039e0(uVar4 + 2,*(undefined4 *)(param_1 + 0x5c),(uint)uVar1);
  puVar2 = (undefined2 *)(*param_2 + (uint)uVar1 + 1 & 0xfffffffe);
  *param_2 = (uint)puVar2;
  *puVar2 = *(undefined2 *)(param_1 + 0x6a);
  uVar4 = *param_2;
  *param_2 = uVar4 + 2;
  uVar1 = *(ushort *)(param_1 + 0x6a);
  FUN_000039e0(uVar4 + 2,*(undefined4 *)(param_1 + 100),(uint)uVar1);
  *param_2 = *param_2 + (uint)uVar1;
  return;
}

