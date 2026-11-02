// rea decompile_all
// name: FUN_000bed1c
// address: 0xbed1c
// body: available
// range: 0xbed1c-0xbeebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000bed1c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_18;
  int local_14 [2];
  
  iVar1 = FUN_00047cf4(*(undefined4 *)(param_1 + 0x114),&DAT_000beec0,&local_18);
  if (iVar1 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__PTP_000beed8);
    return false;
  }
  iVar1 = FUN_00048ef8(local_18,s_DomainNumber_000beec8,param_1 + 0x218);
  if (iVar1 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bef10,s_DomainNumber_000beec8);
  }
  iVar2 = FUN_00048ef8(local_18,s_Priority1_000bef44,param_1 + 0x21c);
  if (iVar2 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bef10,s_Priority1_000bef44);
  }
  iVar3 = FUN_00048ef8(local_18,s_Priority2_000bef50,param_1 + 0x220);
  if (iVar3 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bef10,s_Priority2_000bef50);
  }
  iVar4 = FUN_000433b8(local_18,s_LogAnnounceInterval_000bef5c,param_1 + 0x224);
  if (iVar4 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bef10,s_LogAnnounceInterval_000bef5c);
  }
  iVar5 = FUN_000433b8(local_18,s_LogSyncInterval_000bef70,param_1 + 0x228);
  if (iVar5 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bef10,s_LogSyncInterval_000bef70);
  }
  bVar6 = iVar5 != 0 && (iVar4 != 0 && (iVar3 != 0 && (iVar2 != 0 && iVar1 != 0)));
  iVar1 = FUN_00048ef8(local_18,&DAT_000bef80,local_14);
  if (iVar1 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bef10,&DAT_000bef80);
    bVar6 = false;
  }
  else if (local_14[0] - 1U < 0xff) {
    *(char *)(param_1 + 0x22c) = (char)local_14[0];
  }
  iVar1 = FUN_00043278(local_18,s_SlaveOnly_000bef84,param_1 + 0x22d);
  if (iVar1 == 0) {
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bef10,s_SlaveOnly_000bef84);
    bVar6 = false;
  }
  FUN_00041dd4(local_18);
  *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) & 0xff;
  *(uint *)(param_1 + 0x21c) = *(uint *)(param_1 + 0x21c) & 0xff;
  *(uint *)(param_1 + 0x220) = *(uint *)(param_1 + 0x220) & 0xff;
  return bVar6;
}

