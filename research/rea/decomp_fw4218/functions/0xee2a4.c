// rea decompile_all
// name: FUN_000ee2a4
// address: 0xee2a4
// body: available
// range: 0xee2a4-0xee34d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000ee2a4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *local_30;
  int local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c [2];
  int *piVar2;
  
  piVar7 = (int *)(param_1 + 0x17c);
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_28 = (undefined4 *)0x0;
  local_1c[0] = *(int *)(param_1 + 0x180) - *piVar7 >> 2;
  local_1c[1] = 1;
  piVar2 = local_1c;
  if (local_1c[0] == 0) {
    piVar2 = local_1c + 1;
  }
  iVar1 = *piVar2;
  local_30 = (undefined4 *)FUN_00173860(iVar1 * 4,0);
  puVar3 = *(undefined4 **)(param_1 + 0x180);
  puVar4 = local_30;
  for (puVar6 = (undefined4 *)*piVar7; puVar6 != puVar3; puVar6 = puVar6 + 1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *puVar6;
    }
    puVar4 = puVar4 + 1;
  }
  local_2c = (*(int *)(param_1 + 0x180) - *piVar7 & 0xfffffffcU) + (int)local_30;
  local_28 = local_30 + iVar1;
  local_24 = param_2;
  FUN_00241b58(&local_30,&local_24);
  FUN_001fe1e4(&local_20);
  puVar6 = (undefined4 *)*piVar7;
  *piVar7 = (int)local_30;
  uVar5 = *(undefined4 *)(param_1 + 0x180);
  *(int *)(param_1 + 0x180) = local_2c;
  iVar1 = *(int *)(param_1 + 0x184);
  *(undefined4 **)(param_1 + 0x184) = local_28;
  local_30 = puVar6;
  local_2c = uVar5;
  local_28 = (undefined4 *)iVar1;
  FUN_001fe1f8(local_20);
  FUN_00173a54(local_30,(int)local_28 - (int)local_30 >> 2,0);
  return 0;
}

