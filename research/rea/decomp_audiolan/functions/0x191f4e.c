// rea decompile_all
// name: FUN_00191f4e
// address: 0x191f4e
// body: available
// range: 0x191f4e-0x191fd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00191f4e(ushort *param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int local_14;
  
  uVar4 = 0;
  iVar8 = (int)param_1 << 0x1f;
  local_14 = 0;
  if ((iVar8 < 0) && (0 < param_2)) {
    uVar3 = *param_1;
    param_1 = (ushort *)((int)param_1 + 1);
    param_2 = param_2 + -1;
    local_14 = (uint)(byte)uVar3 << 8;
  }
  uVar2 = -(-param_2 / 2);
  if (-param_2 / 2 != 0 && -1 < (int)uVar2) {
    puVar6 = param_1 + -1;
    if ((uVar2 & 1) != 0) {
      uVar4 = (uint)*param_1;
      puVar6 = param_1;
    }
    iVar7 = 0;
    for (iVar5 = (int)uVar2 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 2;
      uVar4 = *puVar1 + uVar4;
      iVar7 = (uint)*puVar6 + iVar7;
    }
    uVar4 = uVar4 + iVar7;
    param_1 = (ushort *)((param_2 - (param_2 >> 0x1f) & 0xfffffffeU) + (int)param_1);
    param_2 = param_2 % 2;
  }
  if (0 < param_2) {
    local_14 = CONCAT31(local_14._1_3_,(byte)*param_1);
  }
  uVar4 = (uVar4 + local_14 >> 0x10) + (uVar4 + local_14 & 0xffff);
  uVar4 = (uVar4 >> 0x10) + (uVar4 & 0xffff);
  if (iVar8 < 0) {
    uVar4 = (uVar4 & 0xff) << 8 | (uVar4 & 0xffff) >> 8;
  }
  return uVar4 & 0xffff;
}

