// rea decompile_all
// name: FUN_00178820
// address: 0x178820
// body: available
// range: 0x178820-0x1788d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00178820(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  char local_134 [12];
  undefined1 local_128 [72];
  undefined1 auStack_e0 [204];
  
  if (*param_1 < 1) {
    return 0xfffffff6;
  }
  if (param_2 != 0) {
    if ((*(int *)(param_2 + 0x4c) != 0) &&
       ((param_4 != 0 || (param_4 = *(int *)(*(int *)(param_2 + 0x4c) + 4), param_4 != 0)))) {
      local_128[0] = 0;
      local_134[0] = '\0';
      if (((code *)param_1[0x17] == entry) ||
         ((*(code *)param_1[0x17])(param_1,local_128,0x41,local_134,10), local_134[0] == '\0')) {
        FUN_000027f4(local_134,10,DAT_001788d8);
      }
      if (param_1[0x32] == 0) {
        uVar1 = FUN_001a2c34();
        FUN_000027f4(auStack_e0,200,DAT_001788e0,param_1 + 0x1e,param_4,local_134,uVar1);
      }
      else {
        uVar1 = FUN_001a2c34();
        FUN_000027f4(auStack_e0,200,DAT_001788dc,param_1 + 0x1e,param_4,local_134,uVar1);
      }
      FUN_001a6788(param_2,auStack_e0);
      return 0;
    }
    return 0xfffffffb;
  }
  return 0xfffffffe;
}

