// rea decompile_all
// name: FUN_00019ed4
// address: 0x19ed4
// body: available
// range: 0x19ed4-0x1a0af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00019ed4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_20;
  
  if ((*(char *)(param_1 + 0xcc) != -1) && ((*(byte *)(*(int *)(param_1 + 0x4c8) + 0x12) & 1) == 0))
  {
    *(int *)(*(int *)(param_1 + 0x4c8) + (uint)*(byte *)(param_1 + 0xcc) * 4 + 0x20) =
         *(int *)(param_1 + 0x610) * 8 + *(int *)(param_1 + 0x6a8) * 4;
    local_20 = param_4;
    FUN_001fe1e4(&local_20);
    *(byte *)(*(int *)(param_1 + 0x4c8) + 0x12) = *(byte *)(*(int *)(param_1 + 0x4c8) + 0x12) | 1;
    FUN_001fe1f8(local_20);
  }
  if (param_2 == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x608);
  iVar3 = *DAT_0001a36c;
  *(int *)(param_1 + 0x608) = iVar3;
  uVar2 = DAT_0001a374;
  piVar1 = DAT_0001a370;
  iVar3 = (iVar3 - iVar4) * 0x40;
  if (*(int *)(param_1 + 0x60c) != 0) {
    *(int *)(param_1 + 0x60c) = *(int *)(param_1 + 0x60c) + -1;
    *(undefined4 *)(param_1 + 0x618) = uVar2;
    *(undefined4 *)(param_1 + 0x61c) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    *piVar1 = 0;
    piVar1[1] = 0;
    return;
  }
  iVar4 = param_1 + *(int *)(param_1 + 0x6a4) * 4;
  iVar6 = *(int *)(iVar4 + 0x620);
  *(int *)(param_1 + 0x6a4) = *(int *)(param_1 + 0x6a4) + 1;
  *(int *)(param_1 + 0x6a0) = *(int *)(param_1 + 0x6a0) - iVar6;
  *(int *)(iVar4 + 0x620) = iVar3;
  uVar7 = iVar3 + *(int *)(param_1 + 0x6a0);
  *(uint *)(param_1 + 0x6a0) = uVar7;
  uVar7 = uVar7 >> 5;
  if (0x1f < *(uint *)(param_1 + 0x6a4)) {
    *(undefined4 *)(param_1 + 0x6a4) = 0;
  }
  *(uint *)(param_1 + 0x610) = uVar7;
  iVar3 = piVar1[1] - *piVar1;
  uVar5 = (uint)(0xc < iVar3);
  piVar1[2] = iVar3;
  if (iVar3 < 0xd) {
    if (iVar3 < -0xc) {
      uVar5 = 0xffffffff;
    }
    else if (*(int *)(param_1 + 0x6a8) == 1) {
      if (0 < iVar3) goto LAB_0001a074;
    }
    else if ((*(int *)(param_1 + 0x6a8) != -1) || (iVar3 < 0)) goto LAB_0001a074;
  }
  *(uint *)(param_1 + 0x6a8) = uVar5;
LAB_0001a074:
  uVar5 = *(uint *)(param_1 + 0x618);
  if (uVar7 < *(uint *)(param_1 + 0x618)) {
    uVar5 = uVar7;
  }
  if (uVar7 < *(uint *)(param_1 + 0x61c)) {
    uVar7 = *(uint *)(param_1 + 0x61c);
  }
  *(uint *)(param_1 + 0x618) = uVar5;
  *(uint *)(param_1 + 0x61c) = uVar7;
  if (piVar1[4] < iVar3) {
    piVar1[4] = iVar3;
  }
  if (iVar3 < piVar1[3]) {
    piVar1[3] = iVar3;
  }
  return;
}

