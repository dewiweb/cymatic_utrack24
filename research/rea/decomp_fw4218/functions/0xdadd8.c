// rea decompile_all
// name: FUN_000dadd8
// address: 0xdadd8
// body: available
// range: 0xdadd8-0xdaef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000dadd8(int param_1,undefined4 param_2,undefined1 *param_3,uint param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 unaff_r11;
  uint local_28;
  
  if (1 < *(uint *)(param_1 + 0x28)) {
    *param_3 = 0xff;
    return 0;
  }
  uVar6 = 0;
  if (param_4 != 0) {
    unaff_r11 = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  local_28 = param_4;
  if (param_4 == 0) {
LAB_000daedc:
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + param_4;
    return param_4;
  }
LAB_000dae1c:
  iVar4 = *(int *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  do {
    iVar1 = FUN_001cf70c(iVar4 + 0xc,uVar5);
    if (iVar1 != 0) goto LAB_000dae7c;
    FUN_001fe1e4(&local_28);
    if (*(char *)(iVar4 + 0x3c) != '\0') {
      *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(iVar4 + 0x38);
      *(undefined1 *)(iVar4 + 0x3c) = unaff_r11;
      *(undefined1 *)(iVar4 + 0x3d) = 1;
LAB_000dae70:
      *(undefined1 *)(iVar4 + 0x3d) = unaff_r11;
      FUN_001fe1f8(local_28);
LAB_000dae7c:
      *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
      *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar6;
      return uVar6;
    }
    if (*(char *)(iVar4 + 0x3d) != '\0') goto LAB_000dae70;
    puVar2 = *(undefined1 **)(iVar4 + 0x34);
    if (*(undefined1 **)(iVar4 + 0x38) != puVar2) break;
    FUN_001fe1f8(local_28);
  } while( true );
  puVar3 = puVar2 + 1;
  param_3[uVar6] = *puVar2;
  if (*(undefined1 **)(iVar4 + 0x30) <= puVar3) {
    puVar3 = *(undefined1 **)(iVar4 + 0x2c);
  }
  *(undefined1 **)(iVar4 + 0x34) = puVar3;
  FUN_001fe1f8(local_28);
  uVar6 = uVar6 + 1;
  if (param_4 <= uVar6) goto LAB_000daedc;
  goto LAB_000dae1c;
}

