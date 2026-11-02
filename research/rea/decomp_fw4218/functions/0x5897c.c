// rea decompile_all
// name: FUN_0005897c
// address: 0x5897c
// body: available
// range: 0x5897c-0x58ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0005897c(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [8];
  
  FUN_001a2920(auStack_2c,param_1 + 0x2c);
  FUN_000649dc(auStack_40,param_2);
  FUN_0006492c(auStack_40,param_1 + 0x1ac);
  iVar2 = FUN_001b23b0(param_2);
  iVar3 = FUN_001b23b0(auStack_40);
  if (iVar2 < iVar3) {
    iVar2 = FUN_001b23b0(auStack_40);
    iVar3 = FUN_001b23b0(param_2);
    param_3 = param_3 - (iVar2 - iVar3);
  }
  iVar2 = FUN_001b2390(param_2);
  iVar3 = FUN_001b2390(auStack_40);
  if (iVar2 < iVar3) {
    iVar2 = FUN_001b2390(auStack_40);
    iVar3 = FUN_001b2390(param_2);
    param_4 = param_4 - (iVar2 - iVar3);
  }
  iVar2 = FUN_001c0b3c(param_5);
  for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    sVar1 = FUN_001c08d4(param_5,iVar3);
    if (sVar1 != 0) {
      iVar4 = FUN_00058688(param_1,auStack_40,param_3,param_4,sVar1,param_6,param_7,param_8);
      if (iVar4 < 0) break;
      param_3 = param_3 + iVar4;
    }
  }
  FUN_00057bfc(param_1,auStack_40);
  FUN_00064a58(auStack_40);
  FUN_001a2938(auStack_2c);
  return;
}

