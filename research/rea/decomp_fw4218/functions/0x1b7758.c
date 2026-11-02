// rea decompile_all
// name: FUN_001b7758
// address: 0x1b7758
// body: available
// range: 0x1b7758-0x1b7903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001b7758(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_58;
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [4];
  
  FUN_000d7ae4(auStack_28,0,0,0,0);
  FUN_000d7acc(auStack_28,0);
  FUN_000d7ac4(auStack_28,param_4);
  FUN_000fad30(auStack_40);
  FUN_000facf4(auStack_40,0xfa);
  FUN_000facec(auStack_40,0xfa);
  FUN_000facfc(auStack_40,0x1e);
  if (param_4 != 0) {
    FUN_000d7ad4(auStack_28,5);
  }
  (**(code **)(*param_1 + 0x28))(auStack_54,param_1);
  iVar1 = FUN_001b2390(auStack_54);
  FUN_000649bc(auStack_54,param_3 * 0xf + iVar1);
  iVar1 = FUN_001b2390(auStack_54);
  FUN_000649d4(auStack_54,iVar1 + 0xf);
  iVar1 = FUN_001b23b0(auStack_54);
  FUN_000649c4(auStack_54,iVar1 + 0xe);
  local_58 = 0;
  piVar2 = (int *)FUN_0022bc90(param_1 + 1);
  (**(code **)(*piVar2 + 0x28))
            (piVar2,auStack_54,0,0,param_2,auStack_28,auStack_40,&local_58,1,0xffffffff);
  piVar2 = (int *)FUN_0022bc90(param_1 + 1);
  uVar3 = FUN_001b2390(auStack_54);
  (**(code **)(*piVar2 + 0x34))(piVar2,0,uVar3,param_5,param_4,0xffffffff);
  FUN_00064a58(auStack_54);
  FUN_000fad60(auStack_40);
  FUN_000d7afc(auStack_28);
  return;
}

