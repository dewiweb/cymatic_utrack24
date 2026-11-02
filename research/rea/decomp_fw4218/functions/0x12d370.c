// rea decompile_all
// name: FUN_0012d370
// address: 0x12d370
// body: available
// range: 0x12d370-0x12d4eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0012d370(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_64 [24];
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [8];
  
  uVar1 = FUN_00201f28(auStack_24,0);
  FUN_001aaefc(auStack_34,uVar1);
  FUN_00201f54(auStack_24);
  uVar1 = FUN_00225ca8(param_1 + 0x18);
  FUN_001ab1a2(auStack_34,uVar1);
  FUN_000d7ae4(auStack_38,0,0,0,0);
  FUN_000d7acc(auStack_38,2);
  FUN_000d7ad4(auStack_38,5);
  FUN_00064a34(auStack_4c);
  piVar2 = (int *)FUN_0022bc90(param_1 + 4);
  (**(code **)(*piVar2 + 0x58))(piVar2,auStack_4c);
  FUN_000649bc(auStack_4c,0xf);
  iVar3 = FUN_001b2390(auStack_4c);
  FUN_000649d4(auStack_4c,iVar3 + 0x14);
  FUN_000fad30(auStack_64);
  FUN_000facf4(auStack_64,0xfa);
  FUN_000facec(auStack_64,0xfa);
  FUN_000facfc(auStack_64,0x1e);
  piVar2 = (int *)FUN_0022bc90(param_1 + 4);
  (**(code **)(*piVar2 + 0x28))
            (piVar2,auStack_4c,0,0,auStack_34,auStack_38,auStack_64,param_1 + 0x14,3,0xffffffff);
  FUN_000fad60(auStack_64);
  FUN_00064a58(auStack_4c);
  FUN_000d7afc(auStack_38);
  FUN_001aafac(auStack_34);
  return;
}

