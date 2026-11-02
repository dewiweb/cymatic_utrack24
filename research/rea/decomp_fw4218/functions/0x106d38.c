// rea decompile_all
// name: FUN_00106d38
// address: 0x106d38
// body: available
// range: 0x106d38-0x106eb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00106d38(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)((int)param_1 + 0xed) != '\0') {
    FUN_000f4e84();
    uVar1 = FUN_000f4fc0();
    uVar2 = FUN_0011eda0();
    FUN_0011ff88(uVar2,s_Song_is_being_deleted_00106ec4,s_Please_Wait_00106eb8);
    uVar2 = FUN_0011eda0();
    FUN_000a1000(uVar2,0x1c);
    iVar3 = FUN_0023b208(param_1[0x3f],param_1[0x32]);
    if (*(char *)(iVar3 + 4) == '\x04') {
      uVar2 = FUN_0023b208(param_1[0x3f],param_1[0x32]);
      iVar3 = FUN_000bc800(param_1 + 6,uVar2);
    }
    else {
      uVar2 = FUN_0023b208(param_1[0x3f],param_1[0x32]);
      iVar3 = FUN_000bd954(param_1 + 6,uVar2);
    }
    if (iVar3 == 0) {
      uVar2 = FUN_0011eda0();
      FUN_0011ff88(uVar2,s_Song_Deletion_Failed__00106efc,&DAT_00106edc);
    }
    else {
      iVar3 = FUN_0023adb0(param_1[0x3f]);
      FUN_0023adfc(param_1[0x3f],iVar3 + param_1[0x32] * 8);
      uVar4 = FUN_0022e20c(param_1[0x3f]);
      if (uVar4 <= (uint)param_1[0x32]) {
        iVar3 = FUN_0022e20c(param_1[0x3f]);
        param_1[0x32] = iVar3 + -1;
        if (param_1[0x32] < 0) {
          param_1[0x32] = 0;
        }
      }
      uVar2 = FUN_0011eda0();
      FUN_0011ff88(uVar2,s_Song_Deleted_Successfully_00106ee0,&DAT_00106edc);
    }
    uVar2 = FUN_0011eda0();
    FUN_000a1000(uVar2,0x1c);
    FUN_00094f64(uVar1,1);
    FUN_000bdd08(param_1 + 6);
    FUN_001d0130(2000);
    FUN_000950d8(uVar1);
  }
  *(undefined1 *)(param_1 + 0x3b) = 0;
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}

