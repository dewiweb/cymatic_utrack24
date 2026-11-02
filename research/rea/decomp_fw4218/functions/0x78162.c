// rea decompile_all
// name: FUN_00078162
// address: 0x78162
// body: available
// range: 0x78162-0x781e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00078162(int param_1,int *param_2,uint param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined1 local_38 [4];
  undefined1 auStack_34 [8];
  int local_2c;
  undefined1 *local_28;
  int iStack_20;
  int *local_1c;
  uint uStack_18;
  
  pbVar1 = *(byte **)(param_1 + 0x38);
  while( true ) {
    if (*(byte **)(param_1 + 0x3c) == pbVar1) {
      iStack_20 = param_1;
      local_1c = param_2;
      uStack_18 = param_3;
      FUN_00077c84(local_38);
      local_28 = auStack_34;
      local_2c = *local_1c;
      if (*(int *)(local_2c + -0xc) == -1) {
        uVar2 = *(undefined4 *)(local_2c + -4);
        local_2c = FUN_00231e54(&local_2c,uVar2,uVar2);
        local_2c = local_2c + 0xc;
        FUN_001c10ac(local_2c,*local_1c,uVar2);
      }
      else {
        FUN_00208ac0(local_2c + -0xc);
      }
      FUN_0023223c(local_28 + 4,&local_2c);
      FUN_00231ebc(&local_2c);
      local_38[0] = (undefined1)param_3;
      FUN_0023ea2e(param_1 + 0x38,local_38);
      FUN_00077c9c(local_38);
      return 1;
    }
    if (*pbVar1 == param_3) break;
    pbVar1 = pbVar1 + 0xc;
  }
  return 0;
}

