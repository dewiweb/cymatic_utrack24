// rea decompile_all
// name: FUN_0012c374
// address: 0x12c374
// body: available
// range: 0x12c374-0x12c3eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012c374(undefined4 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  uVar5 = DAT_0012c3ec;
  if (param_3 == 0) {
    uVar5 = DAT_0012c3f0;
  }
  uVar1 = *(undefined2 *)(param_2 + 0xf2);
  piVar2 = (int *)FUN_00115c50(param_2);
  (**(code **)(*piVar2 + 0xd4))(auStack_38,piVar2);
  uVar3 = FUN_0010f674(auStack_28,auStack_38,uVar1);
  if (param_3 == 0) {
    pcVar4 = s_Unreachable_Destination_0012c41c;
  }
  else {
    pcVar4 = s____Unreachable_Recording_Destina_0012c3f5 + 3;
  }
  FUN_0012c434(param_1,uVar3,uVar5,0x2000,pcVar4,_DAT_0012c3f4);
  return;
}

