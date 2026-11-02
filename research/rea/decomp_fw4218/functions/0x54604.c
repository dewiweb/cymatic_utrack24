// rea decompile_all
// name: FUN_00054604
// address: 0x54604
// body: available
// range: 0x54604-0x54777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00054604(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [8];
  undefined4 local_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  
  uVar3 = DAT_0005477c;
  uVar2 = DAT_00054778;
  if (param_2 == 0) {
    local_40 = DAT_00054778;
    iVar1 = FUN_00232964(auStack_3c,param_3,auStack_1c);
    iVar1 = FUN_00232964(iVar1 + 4,param_4,auStack_18);
    *(undefined1 *)(iVar1 + 4) = 0x43;
    *(undefined4 *)(iVar1 + -8) = DAT_00054784;
    uVar3 = FUN_0005478c(param_1,(undefined4 *)(iVar1 + -8),0);
    local_40 = uVar2;
    iVar1 = FUN_002329f0(auStack_38);
    FUN_002329f0(iVar1 + -4);
    return uVar3;
  }
  if (param_2 == 1) {
    local_30 = DAT_00054778;
    iVar1 = FUN_00232964(auStack_2c,param_3,auStack_1c);
    iVar1 = FUN_00232964(iVar1 + 4,param_4,auStack_18);
    *(undefined1 *)(iVar1 + 4) = 0x41;
    *(undefined4 *)(iVar1 + -8) = DAT_00054788;
    uVar3 = FUN_0005478c(param_1,(undefined4 *)(iVar1 + -8),0);
    local_30 = uVar2;
    iVar1 = FUN_002329f0(auStack_28);
    FUN_002329f0(iVar1 + -4);
    return uVar3;
  }
  if (param_2 == 2) {
    iVar1 = FUN_00232964(auStack_4c,param_3,auStack_1c);
    iVar1 = FUN_00232964(iVar1 + 4,uVar3,auStack_18);
    *(undefined1 *)(iVar1 + 4) = 0x52;
    *(undefined4 *)(iVar1 + -8) = DAT_00054780;
    uVar2 = FUN_0005478c(param_1,(undefined4 *)(iVar1 + -8),0);
    iVar1 = FUN_002329f0(auStack_48);
    FUN_002329f0(iVar1 + -4);
    return uVar2;
  }
  return 0;
}

