// rea decompile_all
// name: FUN_000fbacc
// address: 0xfbacc
// body: available
// range: 0xfbacc-0xfbca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000fbacc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [20];
  
  iVar1 = param_2 - *(int *)(param_1 + 0x20);
  if (0xf < iVar1) {
    FUN_001b8b34(auStack_38,param_1);
    FUN_001b8b34(auStack_4c,param_1);
    iVar1 = FUN_001b2390(auStack_38);
    FUN_000649d4(auStack_38,iVar1 + 1);
    FUN_000649c4(auStack_38,*(int *)(param_1 + 0x20) + 0xb);
    FUN_000649cc(auStack_38,param_2 + -4);
    piVar2 = (int *)FUN_0022bc90(param_1 + 4);
    (**(code **)(*piVar2 + 0x38))(piVar2,auStack_38,1,0,1);
    piVar2 = (int *)FUN_0022bc90(param_1 + 4);
    iVar1 = FUN_001b2390(auStack_38);
    uVar3 = FUN_001b23bc(auStack_38);
    (**(code **)(*piVar2 + 0x34))(piVar2,uVar3,iVar1 + -2,0x5d,0,0xffffffff);
    iVar1 = FUN_001b2390(auStack_4c);
    FUN_000649bc(auStack_4c,iVar1 + 4);
    iVar1 = FUN_001b2390(auStack_4c);
    FUN_000649d4(auStack_4c,iVar1 + 1);
    FUN_000649c4(auStack_4c,*(int *)(param_1 + 0x20) + 10);
    FUN_000649cc(auStack_4c,param_2 + -4);
    piVar2 = (int *)FUN_0022bc90(param_1 + 4);
    (**(code **)(*piVar2 + 0x38))(piVar2,auStack_4c,1,0,1);
    piVar2 = (int *)FUN_0022bc90(param_1 + 4);
    iVar1 = FUN_001b2390(auStack_4c);
    iVar4 = FUN_001b23b0(auStack_4c);
    (**(code **)(*piVar2 + 0x34))(piVar2,iVar4 + -2,iVar1 + -2,0x5e,0,0xffffffff);
    FUN_00064a58(auStack_4c);
    iVar1 = FUN_00064a58(auStack_38);
  }
  return iVar1;
}

