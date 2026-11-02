// rea decompile_all
// name: FUN_0012be04
// address: 0x12be04
// body: available
// range: 0x12be04-0x12bf07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0012be04(int *param_1,int *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  FUN_0010e728(auStack_40,s_The_task_0012bf08);
  uVar1 = FUN_0015e008(param_2);
  FUN_0010e518(auStack_40,uVar1);
  FUN_0010e518(auStack_40,s__TID__0012bf14);
  uVar1 = FUN_0015e010(param_2);
  FUN_0010e1a0(auStack_40,uVar1);
  FUN_0010e518(auStack_40,s___is_running_for_0012bf1c);
  FUN_0010e6f4(auStack_40,(uint)((ulonglong)param_3 * (ulonglong)DAT_0012bf30 >> 0x26),
               (int)((ulonglong)param_3 * (ulonglong)DAT_0012bf30));
  FUN_0010e518(auStack_40,s_seconds__0012bf34);
  (**(code **)(*param_2 + 0x18))(auStack_38,param_2);
  FUN_0010e5e0(auStack_40,auStack_38);
  FUN_0010e7f4(auStack_38);
  uVar2 = FUN_0015e89c(auStack_40);
  uVar1 = DAT_0012bf40;
  FUN_00116ec0(auStack_30,*param_1 + 0x1e0);
  uVar3 = FUN_0010f674(auStack_20,auStack_30,0);
  FUN_0012c434(param_1,uVar3,uVar1,0x2000,s_Task_issue_0012bf44,uVar2);
  FUN_0010e7f4(auStack_40);
  return;
}

