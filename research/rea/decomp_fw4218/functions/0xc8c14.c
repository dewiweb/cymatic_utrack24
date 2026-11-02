// rea decompile_all
// name: FUN_000c8c14
// address: 0xc8c14
// body: available
// range: 0xc8c14-0xc8d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_000c8c14(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [28];
  undefined1 auStack_28 [4];
  
  FUN_001289e8(param_2,0);
  iVar1 = FUN_000466b0(param_3,&local_4c);
  if (iVar1 == 0) {
    FUN_00002898(_DAT_000c8d98,param_3);
    local_48 = 0;
  }
  else {
    iVar1 = FUN_0004febc(local_4c,s___PlayoutDelay_000c8d9a + 2,&local_50);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__DSPProcess_Custom__readUS_000c8dac,s___PlayoutDelay_000c8d9a + 2);
    }
    iVar2 = FUN_0004febc(local_4c,s_NoOfElementsInQueue_000c8de4,&local_54);
    if (iVar2 == 0) {
      FUN_00002898(s_ERROR__DSPProcess_Custom__readUS_000c8dac,s_NoOfElementsInQueue_000c8de4);
    }
    FUN_0023299c(auStack_58,auStack_28);
    iVar3 = FUN_00048bd4(local_4c,&DAT_000c8df8,auStack_58);
    if (iVar3 == 0) {
      FUN_00002898(s_ERROR__DSPProcess_Custom__readUS_000c8dac,&DAT_000c8df8);
    }
    FUN_00046b8c(local_4c);
    if (iVar3 != 0 && (iVar2 != 0 && iVar1 != 0)) {
      iVar1 = (**(code **)(*param_1 + 0x124))(param_1);
      uVar4 = FUN_00147078(auStack_44,param_4,param_5,*(int *)(iVar1 + 0x18) + -2,
                           *(int *)(iVar1 + 0x18),local_50,local_54,auStack_58);
      FUN_001471b8(param_2,uVar4);
      FUN_00147148(auStack_44);
      local_48 = FUN_001bac90(param_2);
      FUN_002329f0(auStack_58);
    }
    else {
      FUN_002329f0(auStack_58);
      local_48 = 0;
    }
  }
  return local_48;
}

