// rea decompile_all
// name: FUN_000c1cbc
// address: 0xc1cbc
// body: available
// range: 0xc1cbc-0xc1d2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c1cbc(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_28 [8];
  int *local_20;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  uint local_c;
  
  uStack_18 = param_1;
  iStack_14 = param_2;
  uStack_10 = param_3;
  local_c = param_4;
  pcVar2 = (char *)FUN_0008b800(auStack_28);
  *(undefined4 *)pcVar2 = s_l0__AudioHWService_000c1d30._0_4_;
  uVar3 = FUN_0008cf78();
  iVar4 = FUN_0008ce54(uVar3,s_l0__AudioHWService_000c1d30 + 4,auStack_28);
  if (iVar4 != 0) {
    iVar4 = (**(code **)(*local_20 + 0x70))(local_20,*(undefined4 *)(*(int *)(param_2 + 4) + 0x58));
    if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x4c), iVar4 != 0)) {
      cVar1 = *(char *)(iVar4 + 0x34);
      if ((cVar1 == '\x01') ||
         ((cVar1 != '\x02' &&
          (((cVar1 != '\x03' && (cVar1 == '\x04')) ||
           ((uint)*(byte *)(iVar4 + 0x35) != (local_c & 0xff))))))) {
        *(undefined1 *)(iVar4 + 0x35) = (undefined1)local_c;
        (**(code **)(*(int *)(iVar4 + 0x18) + 8))();
      }
    }
    FUN_0008b818(auStack_28);
    return 1;
  }
  FUN_0008b818(auStack_28);
  return 0;
}

