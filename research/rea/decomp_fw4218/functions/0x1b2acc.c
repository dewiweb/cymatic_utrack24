// rea decompile_all
// name: FUN_001b2acc
// address: 0x1b2acc
// body: available
// range: 0x1b2acc-0x1b2bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001b2acc(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_50;
  int local_4c;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined1 local_30 [4];
  int local_2c;
  undefined1 local_28 [4];
  undefined4 local_24;
  
  if (param_2 != 0) {
    if (((*(int *)(param_1 + 0xe4) == 0) && (param_3 == -1)) &&
       (iVar1 = FUN_001cfb1c(), param_1 + 4 == iVar1)) {
      uVar2 = FUN_001cfb1c();
      iVar1 = FUN_001cfb1c();
      FUN_001d7430(0,*(undefined4 *)(iVar1 + 8),uVar2);
      FUN_001d0130(100);
      uVar2 = DAT_001b2bf4;
      local_4c = 0;
      local_50 = DAT_001b2bf4;
      local_28[0] = 2;
      local_24 = DAT_001b2bf8;
      local_30[0] = 2;
      local_2c = *(int *)(param_1 + 0xcc);
      if (*(int *)(param_1 + 0xcc) == 0) {
        local_2c = DAT_001b2bfc;
      }
      local_38[0] = 2;
      local_34 = DAT_001b2c00;
      local_3c = *(undefined4 *)(param_1 + 0x38);
      local_40[0] = 2;
      local_48[0] = 2;
      local_44 = DAT_001b2c04;
      FUN_00063aee(&local_50,local_48,local_40,local_38,local_30,local_28);
      iVar1 = local_4c;
      if (local_4c == 0) {
        iVar1 = DAT_001b2bfc;
      }
      FUN_0003fe6c(iVar1);
      local_50 = uVar2;
      FUN_001eecc8(local_4c);
    }
    iVar1 = thunk_EXT_FUN_004005e0(param_1 + 0xd0,param_2,param_3);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

