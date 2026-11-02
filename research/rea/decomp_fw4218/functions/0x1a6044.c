// rea decompile_all
// name: FUN_001a6044
// address: 0x1a6044
// body: available
// range: 0x1a6044-0x1a615f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a6044(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = DAT_001a6164;
  iVar5 = DAT_001a6160;
  if (*(int *)(DAT_001a6160 + 0x14) != 0) {
    return *(int *)(DAT_001a6160 + 0x14);
  }
  FUN_001f00bc();
  if (*(int *)(iVar5 + 0x14) == 0) {
    iVar2 = FUN_001f01c4(0x17c,1);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_001a6170(iVar2,0xac000000);
    }
    *(undefined4 *)(iVar5 + 0x14) = uVar3;
    if (*(int *)(iVar5 + 0x14) == 0) {
      FUN_001f06d4(uVar1);
      return 0;
    }
    iVar6 = *(int *)(iVar5 + 0x14);
    iVar4 = FUN_001f01c4(0x24,1);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = FUN_0005dae4();
    }
    *(int *)(iVar6 + 0x20) = iVar2;
    if (iVar2 != 0) {
      FUN_0005d094(iVar2,0,*(undefined4 *)(iVar6 + 4),0x3000,1);
      FUN_0005d094(*(undefined4 *)(iVar6 + 0x20),1,*(int *)(iVar6 + 4) + 0x8000,0x1000,0);
      iVar4 = FUN_001f01c4(0x2c,1);
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = FUN_00089398(iVar4,iVar6 + 0x24);
      }
      *(int *)(iVar6 + 0x120) = iVar2;
      if (iVar2 != 0) {
        FUN_001a5dbc(iVar6,0);
      }
    }
  }
  iVar5 = *(int *)(iVar5 + 0x14);
  FUN_001f06d4(uVar1);
  return iVar5;
}

