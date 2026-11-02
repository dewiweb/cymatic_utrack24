// rea decompile_all
// name: FUN_0010f2e0
// address: 0x10f2e0
// body: available
// range: 0x10f2e0-0x10f3db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0010f2e0(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_94 [128];
  
  if ((param_2 == 0x4f) && ((char)param_1[0x36] != '\0')) {
    uVar1 = FUN_0011eda0();
    FUN_0011ff88(uVar1,s_Sync_Group_Formed_0010f3f0,s_Device_is_Master_0010f3dc);
    uVar1 = FUN_0011eda0();
    FUN_000a1000(uVar1,0x1c);
    FUN_001d0130(2000);
    *(undefined1 *)(param_1 + 0x36) = 0;
    (**(code **)(*param_1 + 0x50))(param_1);
    uVar1 = 1;
  }
  else if ((param_2 == 0x3e) && ((char)param_1[0x36] != '\0')) {
    param_1[0x37] = param_1[0x37] + 1;
    FUN_000028cc(auStack_94,s__d_Slaves_added_0010f404,param_1[0x37]);
    uVar1 = FUN_0011eda0();
    FUN_0011fe74(uVar1,auStack_94,&LAB_0010f41c,*(undefined1 *)((int)param_1 + 0xd9),
                 s_Cancel_0010f414,0);
    uVar1 = FUN_0011eda0();
    FUN_000a1000(uVar1,0x1b);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

