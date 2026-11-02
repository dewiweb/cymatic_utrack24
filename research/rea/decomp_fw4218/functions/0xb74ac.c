// rea decompile_all
// name: FUN_000b74ac
// address: 0xb74ac
// body: available
// range: 0xb74ac-0xb75db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b74ac(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00225ca8(param_1 + 5);
    FUN_001aaf30(auStack_24,uVar2);
    FUN_000d7ae4(auStack_28,0,0,0,0);
    FUN_000d7acc(auStack_28,0);
    FUN_00064a34(auStack_3c);
    piVar3 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar3 + 0x58))(piVar3,auStack_3c);
    FUN_000649bc(auStack_3c,0x13);
    iVar1 = FUN_001b2390(auStack_3c);
    FUN_000649d4(auStack_3c,iVar1 + 0xb);
    FUN_000649cc(auStack_3c,0x99);
    piVar3 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar3 + 0x28))(piVar3,auStack_3c,0,0,auStack_24,auStack_28,0,0,0,0xffffffff);
    FUN_00064a58(auStack_3c);
    FUN_000d7afc(auStack_28);
    uVar2 = FUN_001aafac(auStack_24);
  }
  return uVar2;
}

