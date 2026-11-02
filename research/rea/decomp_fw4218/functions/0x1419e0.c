// rea decompile_all
// name: FUN_001419e0
// address: 0x1419e0
// body: available
// range: 0x1419e0-0x141b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001419e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x94) = param_2;
  iVar1 = *(int *)(param_1 + 0x94);
  if (iVar1 == 0x14) {
    uVar2 = FUN_0011eda0(0x14);
    uVar2 = FUN_0011ff88(uVar2,s_Recording_Error__00141b68,s_Clock_not_in_sync_00141b98);
  }
  else if (iVar1 < 0x15) {
    if (iVar1 == 7) {
      uVar2 = FUN_0011eda0(7);
      uVar2 = FUN_0011ff88(uVar2,s_Recording_Error__00141b68,s_Directory_creation_failed_00141b7c);
    }
    else if (iVar1 == 9) {
      uVar2 = FUN_0011eda0(9);
      uVar2 = FUN_0011ff88(uVar2,s_Starting_PRE_RECORDING_00141bc4,s_Failed_00141bbc);
    }
    else {
      if (iVar1 != 0xb) {
        return iVar1;
      }
      uVar2 = FUN_0011eda0(0xb);
      uVar2 = FUN_0011ff88(uVar2,s_Recording_Error__00141b68,s_No_disk_space_00141bdc);
    }
  }
  else if (iVar1 == 0x15) {
    uVar2 = FUN_0011eda0(0x15);
    uVar2 = FUN_0011ff88(uVar2,s_Recording_Error__00141b68,s_Encoders_not_ready_00141b54);
  }
  else if (iVar1 == 0x16) {
    uVar2 = FUN_0011eda0(0x16);
    uVar2 = FUN_0011ff88(uVar2,s_Recording_Error__00141b68,s_Setup_timed_out_00141bac);
  }
  else {
    if (iVar1 != 0x17) {
      return iVar1;
    }
    uVar2 = FUN_0011eda0(0x17);
    uVar2 = FUN_0011ff88(uVar2,s_Recording_Error__00141b68,s_Max_take_number_reached_00141bec);
  }
  uVar2 = FUN_0011eda0(uVar2);
  FUN_000a1000(uVar2,0x1c);
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  FUN_000932c4(uVar2,*(undefined4 *)(param_1 + 0x94));
  FUN_001d0130(DAT_00141c04);
  iVar1 = FUN_001a48f0(param_1,0x29,0);
  return iVar1;
}

