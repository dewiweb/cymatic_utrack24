// rea decompile_all
// name: FUN_0013ef90
// address: 0x13ef90
// body: available
// range: 0x13ef90-0x13f1b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0013ef90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_001b9a74(param_1 + 0x34);
  iVar2 = FUN_001b9a5c(param_1 + 0x34);
  if (iVar2 < iVar1) {
    iVar1 = FUN_001b8a7c(param_1 + 0x30);
    if ((iVar1 == 1) || (iVar1 = FUN_001b8a7c(param_1 + 0x30), iVar1 == 2)) {
      return 0;
    }
    uVar3 = FUN_001b9a5c(param_1 + 0x34);
    uVar4 = FUN_001b9a74(param_1 + 0x34);
    FUN_000facf4(param_1 + 0x34,uVar4);
    FUN_000facfc(param_1 + 0x34,uVar3);
  }
  iVar1 = FUN_001b8a44(param_1 + 0x30);
  if (iVar1 == 0) {
    uVar3 = FUN_001b8a94(param_1 + 0x30);
    FUN_0005897c(*DAT_0013f1b4,param_1 + 4,*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x50),
                 *(undefined4 *)(param_1 + 0x1c),param_1 + 0x20,uVar3,0xffffffff,0xffffffff);
  }
  else {
    uVar3 = FUN_001b8a94(param_1 + 0x30);
    FUN_0005897c(*DAT_0013f1b4,param_1 + 4,*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x50),
                 *(undefined4 *)(param_1 + 0x1c),param_1 + 0x20,uVar3,0xffffffff,0xffffffff);
  }
  iVar1 = FUN_001b9a50(param_1 + 0x34);
  *(int *)(param_1 + 0x50) = iVar1 + *(int *)(param_1 + 0x50);
  iVar1 = FUN_001b8a7c(param_1 + 0x30);
  if ((iVar1 == 1) || (iVar1 = FUN_001b8a7c(param_1 + 0x30), iVar1 == 2)) {
    if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x50)) {
      iVar1 = FUN_001b9a50(param_1 + 0x34);
      if (iVar1 == *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c)) {
        uVar3 = FUN_001b9a74(param_1 + 0x34);
        uVar4 = FUN_001b9a5c(param_1 + 0x34);
        FUN_000facfc(param_1 + 0x34,uVar4);
        FUN_000facf4(param_1 + 0x34,uVar3);
      }
      else {
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x4c);
      }
    }
  }
  else {
    iVar1 = FUN_001b237c(param_1 + 4);
    if (iVar1 + *(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x50)) {
      iVar1 = FUN_001b237c(param_1 + 4);
      iVar5 = *(int *)(param_1 + 0x50);
      iVar6 = *(int *)(param_1 + 0x4c);
      iVar2 = FUN_001b9a50(param_1 + 0x34);
      if ((iVar5 - iVar6) - iVar1 == iVar2) {
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      else {
        iVar1 = FUN_001b237c(param_1 + 4);
        *(int *)(param_1 + 0x50) = iVar1 + *(int *)(param_1 + 0x4c);
      }
    }
  }
  return 1;
}

