// rea decompile_all
// name: FUN_00057bfc
// address: 0x57bfc
// body: available
// range: 0x57bfc-0x57e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00057bfc(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_50 [20];
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [8];
  
  FUN_001a2920(auStack_28,param_1 + 0xb);
  if ((char)param_1[0x70] == '\0') {
    FUN_000649dc(auStack_3c,param_2);
    FUN_00064a34(auStack_50);
    (**(code **)(*param_1 + 0x58))(param_1,auStack_50);
    FUN_0006492c(auStack_3c,auStack_50);
    FUN_00064a58(auStack_50);
    iVar2 = FUN_001b2390(auStack_3c);
    for (uVar5 = iVar2 >> 3; iVar2 = FUN_001b23c8(auStack_3c), (int)uVar5 <= iVar2 + -1 >> 3;
        uVar5 = uVar5 + 1) {
      uVar1 = FUN_001b23b0(auStack_3c);
      FUN_000b4dd8(param_1 + 1,uVar1);
      FUN_000b4d40(param_1 + 1,uVar5 & 0xff);
      iVar2 = FUN_001b23bc(auStack_3c);
      iVar3 = FUN_001b23b0(auStack_3c);
      iVar2 = iVar2 - iVar3;
      if (iVar2 < 0) {
        FUN_00002898(s_ERROR__LCDDisplay__updateRect__I_00057e14,iVar2);
      }
      uVar4 = FUN_001b23b0(auStack_3c);
      uVar4 = FUN_001b5e7c(param_1 + 4,uVar4,uVar5);
      iVar2 = FUN_000b4e88(param_1 + 1,uVar4,iVar2);
      if (iVar2 == 0) {
        FUN_00002898(s_ERROR__LCDDisplay__updateRect__C_00057e48);
      }
    }
    FUN_00064a58(auStack_3c);
    uVar4 = FUN_001a2938(auStack_28);
  }
  else {
    iVar2 = FUN_001b23b0(param_1 + 0x71);
    iVar3 = FUN_001b23b0(param_2);
    if (iVar3 < iVar2) {
      uVar4 = FUN_001b23b0(param_2);
      FUN_000649c4(param_1 + 0x71,uVar4);
    }
    iVar2 = FUN_001b2390(param_1 + 0x71);
    iVar3 = FUN_001b2390(param_2);
    if (iVar3 < iVar2) {
      uVar4 = FUN_001b2390(param_2);
      FUN_000649bc(param_1 + 0x71,uVar4);
    }
    iVar2 = FUN_001b23bc(param_1 + 0x71);
    iVar3 = FUN_001b23bc(param_2);
    if (iVar2 < iVar3) {
      uVar4 = FUN_001b23bc(param_2);
      FUN_000649cc(param_1 + 0x71,uVar4);
    }
    iVar2 = FUN_001b23c8(param_1 + 0x71);
    iVar3 = FUN_001b23c8(param_2);
    if (iVar2 < iVar3) {
      uVar4 = FUN_001b23c8(param_2);
      FUN_000649d4(param_1 + 0x71,uVar4);
    }
    uVar4 = FUN_001a2938(auStack_28);
  }
  return uVar4;
}

