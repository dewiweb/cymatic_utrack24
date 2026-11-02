// rea decompile_all
// name: FUN_0016b648
// address: 0x16b648
// body: available
// range: 0x16b648-0x16b747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0016b648(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [5];
  undefined1 local_23;
  undefined1 auStack_18 [8];
  
  FUN_001f00bc(param_1 + 0x3b8);
  FUN_00171e90(auStack_18);
  iVar2 = FUN_00161b9c(param_1 + 0x6cc,param_2,param_3,auStack_18);
  if (iVar2 == 0) goto LAB_0016b718;
  iVar3 = FUN_001717c0(auStack_18,s_wireless_0016b748);
  if ((((iVar3 == 0) && (iVar3 = FUN_001717c0(auStack_18,&DAT_0016b754), iVar3 == 0)) &&
      (iVar3 = FUN_001717c0(auStack_18,s_bluetooth_0016b75c), iVar3 == 0)) &&
     (iVar3 = FUN_001717c0(auStack_18,s_802_11_0016b768), iVar3 == 0)) {
    cVar1 = *(char *)(param_1 + 0x71a);
    if (cVar1 == -0x60) {
      cVar1 = '@';
      goto LAB_0016b6e0;
    }
  }
  else {
    cVar1 = -0x60;
LAB_0016b6e0:
    *(char *)(param_1 + 0x71a) = cVar1;
  }
  *(char *)(param_3 + 5) = cVar1;
  FUN_0014cd58(auStack_28);
  FUN_0014cdc0(auStack_28,param_3);
  local_23 = *(undefined1 *)(param_1 + 0x71a);
  FUN_0015f414(param_1 + 1000,auStack_28);
  FUN_0014cd8c(auStack_28);
LAB_0016b718:
  FUN_001f06d4(param_1 + 0x3b8);
  FUN_00171ea4(auStack_18);
  return iVar2;
}

