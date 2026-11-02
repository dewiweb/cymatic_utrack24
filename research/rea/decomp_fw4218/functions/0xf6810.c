// rea decompile_all
// name: FUN_000f6810
// address: 0xf6810
// body: available
// range: 0xf6810-0xf6907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000f6810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  uVar2 = FUN_000f8ee0();
  iVar3 = FUN_000f67c0(uVar2,DAT_000f6908);
  if (iVar3 == 0) {
    for (uVar7 = 0; uVar4 = FUN_001bd0b0(DAT_000f6908), uVar7 < uVar4; uVar7 = uVar7 + 1) {
      iVar3 = FUN_001448fc(DAT_000f6908);
      *(undefined4 *)(iVar3 + uVar7 * 4) = 0;
    }
  }
  FUN_00178f04();
  uVar7 = FUN_00177acc();
  puVar1 = DAT_000f690c;
  *DAT_000f690c = *DAT_000f690c & 0xfffffff1 | (uVar7 & 7) << 1;
  FUN_0005b438(param_1,DAT_000f6908,*puVar1);
  iVar3 = FUN_000f8ee0();
  local_24 = FUN_002343e8(iVar3 + 0x408);
  local_28 = param_1;
  while( true ) {
    local_20 = FUN_002343c0(iVar3 + 0x408);
    local_1c = local_20;
    iVar6 = FUN_002248ac(&local_24,&local_1c);
    if (iVar6 == 0) break;
    puVar5 = (undefined4 *)FUN_0022c294(&local_24);
    (*(code *)*puVar5)(param_1,DAT_000f6908);
    local_28 = FUN_0020987c(&local_24,0);
  }
  return CONCAT44(local_24,local_28);
}

