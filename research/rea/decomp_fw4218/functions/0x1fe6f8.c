// rea decompile_all
// name: FUN_001fe6f8
// address: 0x1fe6f8
// body: available
// range: 0x1fe6f8-0x1fe77d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001fe6f8(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar3 = 0;
  if ((*(int *)(param_1 + 0x1ff0) != 0) &&
     (iVar1 = FUN_001eb818(param_1 + DAT_001fe780), iVar1 != 0)) {
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    puVar2 = (undefined1 *)((int)&local_1c + 2);
    if (param_2 != 0) {
      local_1c = (uint)CONCAT21(*DAT_001fe784,*(undefined1 *)(param_2 + 0x28)) << 8;
      local_18 = *(undefined4 *)(param_2 + 0x2a);
      local_14 = CONCAT13((char)*(undefined4 *)(param_2 + 0x30),
                          CONCAT12((char)((uint)*(undefined4 *)(param_2 + 0x30) >> 8),
                                   CONCAT11((char)((uint)*(undefined4 *)(param_2 + 0x30) >> 0x10),
                                            (char)((uint)*(undefined4 *)(param_2 + 0x30) >> 0x18))))
      ;
      puVar2 = &stack0xfffffff0;
    }
    uVar3 = FUN_001e58f0(param_1,&local_1c,puVar2,0,0,param_1 + DAT_001fe78c,*DAT_001fe788);
  }
  return uVar3;
}

