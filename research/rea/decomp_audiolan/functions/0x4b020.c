// rea decompile_all
// name: FUN_0004b020
// address: 0x4b020
// body: available
// range: 0x4b020-0x4b153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0004b020(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar5 = 0;
  if (param_3 < 1) {
LAB_0004b134:
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + param_3;
    thunk_EXT_FUN_0040010c(param_1 + 0x44);
    return param_3;
  }
LAB_0004b040:
  FUN_001b714c(&local_24);
  uVar4 = *(uint *)(param_1 + 0x34);
  uVar6 = *(uint *)(param_1 + 0x38);
  FUN_001b7160(local_24);
  if (uVar6 < uVar4) {
    uVar6 = *(int *)(param_1 + 8) - (uVar4 - uVar6);
  }
  else {
    uVar6 = uVar6 - uVar4;
  }
  if (uVar6 < 2) {
    thunk_EXT_FUN_0040010c(param_1 + 0x44);
  }
  do {
    iVar1 = FUN_0017afd4(param_1 + 0xc,0xffffffff);
    if (iVar1 != 0) goto LAB_0004b0d4;
    FUN_001b714c(&local_28);
    if (*(char *)(param_1 + 0x3c) != '\0') {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
      *(undefined1 *)(param_1 + 0x3c) = 0;
      *(undefined1 *)(param_1 + 0x3d) = 1;
LAB_0004b0c8:
      *(undefined1 *)(param_1 + 0x3d) = 0;
      FUN_001b7160(local_28);
LAB_0004b0d4:
      thunk_EXT_FUN_0040010c(param_1 + 0x44);
      return 0;
    }
    if (*(char *)(param_1 + 0x3d) != '\0') goto LAB_0004b0c8;
    puVar2 = *(undefined1 **)(param_1 + 0x34);
    if (*(undefined1 **)(param_1 + 0x38) != puVar2) break;
    FUN_001b7160(local_28);
  } while( true );
  puVar3 = puVar2 + 1;
  *param_2 = *puVar2;
  if (*(undefined1 **)(param_1 + 0x30) <= puVar3) {
    puVar3 = *(undefined1 **)(param_1 + 0x2c);
  }
  *(undefined1 **)(param_1 + 0x34) = puVar3;
  FUN_001b7160(local_28);
  iVar5 = iVar5 + 1;
  param_2 = param_2 + 1;
  if (param_3 <= iVar5) goto LAB_0004b134;
  goto LAB_0004b040;
}

