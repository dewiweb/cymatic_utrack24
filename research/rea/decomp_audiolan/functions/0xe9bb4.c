// rea decompile_all
// name: FUN_000e9bb4
// address: 0xe9bb4
// body: available
// range: 0xe9bb4-0xe9bc3 inclusive
// range: 0xfbc88-0xfbd9b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000e9bb4(int param_1,undefined1 param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int extraout_r3;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  
  *(undefined1 *)(param_1 + 0x17) = param_2;
  uVar8 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (((*(char *)(param_1 + 0x16) != '\0') && ((char)param_3[0xe] == '\0')) ||
     (*(int *)(param_1 + 8) != 0)) {
    return 1;
  }
  FUN_001a0700(param_3 + 3);
  uVar3 = FUN_0017bfc0();
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  puVar2 = DAT_000fbd9c;
  uVar5 = param_3[1];
  iVar7 = extraout_r3;
  while (uVar5 != 0) {
    uVar9 = *puVar2;
    uVar6 = uVar5;
    while( true ) {
      uVar4 = *(uint *)(uVar6 + 8);
      if (uVar9 >= uVar4 && uVar9 != uVar4) {
        iVar7 = 1;
      }
      if (uVar9 < uVar4) {
        iVar7 = 0;
      }
      if (uVar9 == uVar4) break;
      uVar4 = *(uint *)(uVar6 + iVar7 * 4 + 0x18);
      if (uVar4 == 0) goto LAB_000fbd48;
      if (iVar7 != 0) {
        uVar6 = (uint)*(byte *)(uVar6 + 0x20);
      }
      uVar1 = uVar6 & 0x80;
      uVar6 = uVar4;
      if (iVar7 != 0 && uVar1 != 0) goto LAB_000fbd48;
    }
    if (uVar6 == 0) break;
    *puVar2 = uVar9 + 1;
    if (uVar9 + 1 == 0) {
      *puVar2 = 1;
    }
  }
LAB_000fbd48:
  *(uint *)(param_1 + 8) = *puVar2;
  iVar7 = FUN_001bfc1c(param_3,param_1);
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    *(uint **)(param_1 + 4) = param_3;
    uVar8 = 1;
    if (param_3[0xd] < *param_3) {
      param_3[0xd] = *param_3;
    }
    *puVar2 = *puVar2 + 1;
  }
  FUN_001a0d18(param_3 + 3);
  return uVar8;
}

