// rea decompile_all
// name: FUN_0010d488
// address: 0x10d488
// body: available
// range: 0x10d488-0x10d657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010d488(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 auStack_8c [8];
  undefined1 auStack_84 [68];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  bVar1 = false;
  bVar2 = false;
  uVar6 = 0;
  uVar5 = 0;
  pcVar4 = (char *)0x0;
  FUN_0010e7e0(auStack_40);
  thunk_FUN_000ea2a4(auStack_30,param_1 + 0xfa);
  FUN_0015d79c(auStack_38,auStack_30);
  uVar3 = FUN_0015e6f4(auStack_38);
  FUN_0010e240(auStack_40,uVar3);
  FUN_0010e7f4(auStack_38);
  FUN_000ea314(auStack_30);
  FUN_0010e518(auStack_40,&DAT_0010d658);
  FUN_0015e148(auStack_38,param_1 + 0xfa);
  uVar3 = FUN_0015e6f4(auStack_38);
  FUN_0010e518(auStack_40,uVar3);
  FUN_0010e7f4(auStack_38);
  FUN_0010e518(auStack_40,&DAT_0010d65c);
  FUN_000eea30(&local_98);
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  else if (param_2 == 2) {
    bVar2 = true;
    uVar5 = 0x1000;
    pcVar4 = s_Invalid_CRC_0010d69c;
    uVar6 = DAT_0010d698;
  }
  else if (param_2 == 4) {
    bVar1 = true;
    bVar2 = true;
    uVar5 = 0x1000;
    pcVar4 = s_Receive_Queue_Almost_Full_0010d67c;
    uVar6 = DAT_0010d678;
  }
  else if (param_2 == 8) {
    bVar1 = true;
    bVar2 = true;
    uVar5 = 0x1000;
    pcVar4 = s_Receive_Queue_Full_0010d664;
    uVar6 = DAT_0010d660;
  }
  if (bVar2 || bVar1) {
    uVar3 = FUN_0015e89c(auStack_40);
    FUN_000eaed0(&local_98,0,DAT_0010d6a8,0,uVar6,uVar5,pcVar4,uVar3);
  }
  if (bVar2) {
    (**(code **)(*param_1 + 0x28))(param_1,&local_98);
  }
  if (bVar1) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_98);
  }
  FUN_000ee880(&local_98);
  FUN_000e9f98(auStack_84);
  FUN_000e9f98(auStack_8c);
  local_94 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_0010e7f4(auStack_40);
  return;
}

