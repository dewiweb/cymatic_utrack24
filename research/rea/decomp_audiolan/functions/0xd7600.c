// rea decompile_all
// name: FUN_000d7600
// address: 0xd7600
// body: available
// range: 0xd7600-0xd77a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000d7600(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  uint uStack_20;
  
  *(undefined1 *)(param_1 + 9) = 0;
  iVar1 = FUN_00041c14(DAT_000d77a4,&uStack_34);
  if (iVar1 == 0) {
    return true;
  }
  bVar2 = true;
  iVar1 = FUN_00043278(uStack_34,DAT_000d77a8,param_1 + 9);
  if (iVar1 == 0) {
    FUN_000028a4(DAT_000d77a8 + 8);
    bVar2 = false;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  else if (*(char *)(param_1 + 9) != '\0') {
    iVar1 = FUN_00042a00(uStack_34,DAT_000d77ac,param_1 + 4);
    if (iVar1 == 0) {
      FUN_000028a4(DAT_000d77ac + -0x34);
    }
    bVar2 = iVar1 != 0;
    if (*(int *)(*(int *)(param_1 + 4) + -4) == 0) {
      iVar1 = FUN_0019e4a8(DAT_000d77b0);
      if (iVar1 == 0) {
        FUN_000028a4(DAT_000d77b8);
        bVar2 = false;
        *(undefined1 *)(param_1 + 9) = 0;
      }
      else {
        FUN_000028d8(auStack_30,DAT_000d77b4,*(undefined1 *)(iVar1 + 0x36),
                     *(undefined1 *)(iVar1 + 0x37));
        FUN_001da458(param_1 + 4,*(undefined4 *)(iVar1 + 0x2c));
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + -4);
        FUN_000034d0(auStack_30);
        FUN_001da110(param_1 + 4,uVar3,0,auStack_30);
        iVar1 = FUN_00042a98(uStack_34,DAT_000d77ac,*(undefined4 *)(param_1 + 4));
        if (iVar1 == 0) {
          FUN_000028a4(DAT_000d77ac + 0x20);
          bVar2 = false;
        }
      }
    }
    iVar1 = FUN_00048ef8(uStack_34,DAT_000d77bc,&uStack_20);
    if ((iVar1 == 0) || (1 < uStack_20)) {
      FUN_000028a4(DAT_000d77bc + -0xc4);
      bVar2 = false;
      *(undefined1 *)(param_1 + 8) = 0;
    }
    else {
      *(char *)(param_1 + 8) = (char)uStack_20;
    }
  }
  FUN_00041dd4(uStack_34);
  return bVar2;
}

