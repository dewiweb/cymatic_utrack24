// rea decompile_all
// name: FUN_0010041c
// address: 0x10041c
// body: available
// range: 0x10041c-0x1005bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0010041c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_18;
  int local_14 [2];
  
  iVar1 = FUN_0004eb44(*(undefined4 *)(param_1 + 0x114),&DAT_001005c0,&local_18);
  if (iVar1 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__PTP_001005d8);
    return false;
  }
  iVar1 = FUN_0004febc(local_18,s_DomainNumber_001005c8,param_1 + 0x218);
  if (iVar1 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00100610,s_DomainNumber_001005c8);
  }
  iVar2 = FUN_0004febc(local_18,s_Priority1_00100644,param_1 + 0x21c);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00100610,s_Priority1_00100644);
  }
  iVar3 = FUN_0004febc(local_18,s_Priority2_00100650,param_1 + 0x220);
  if (iVar3 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00100610,s_Priority2_00100650);
  }
  iVar4 = FUN_00049830(local_18,s_LogAnnounceInterval_0010065c,param_1 + 0x224);
  if (iVar4 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00100610,s_LogAnnounceInterval_0010065c);
  }
  iVar5 = FUN_00049830(local_18,s_LogSyncInterval_00100670,param_1 + 0x228);
  if (iVar5 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00100610,s_LogSyncInterval_00100670);
  }
  bVar6 = iVar5 != 0 && (iVar4 != 0 && (iVar3 != 0 && (iVar2 != 0 && iVar1 != 0)));
  iVar1 = FUN_0004febc(local_18,&DAT_00100680,local_14);
  if (iVar1 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00100610,&DAT_00100680);
    bVar6 = false;
  }
  else if (local_14[0] - 1U < 0xff) {
    *(char *)(param_1 + 0x22c) = (char)local_14[0];
  }
  iVar1 = FUN_00049674(local_18,s_SlaveOnly_00100684,param_1 + 0x22d);
  if (iVar1 == 0) {
    FUN_00002898(s_ERROR__RavennaConfiguration__Cou_00100610,s_SlaveOnly_00100684);
    bVar6 = false;
  }
  FUN_00046b8c(local_18);
  *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) & 0xff;
  *(uint *)(param_1 + 0x21c) = *(uint *)(param_1 + 0x21c) & 0xff;
  *(uint *)(param_1 + 0x220) = *(uint *)(param_1 + 0x220) & 0xff;
  return bVar6;
}

