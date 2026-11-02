// rea decompile_all
// name: FUN_00160ee4
// address: 0x160ee4
// body: available
// range: 0x160ee4-0x160f9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00160ee4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  iVar2 = FUN_00003960(param_1,&DAT_00160fa0);
  if ((iVar2 != 0) && (iVar2 = FUN_00003960(param_1,s_POSIX_00160fa4), iVar2 != 0)) {
    iVar2 = FUN_0016d76c(0x200);
    FUN_0010fb3a(&uStack_20,param_1,2);
    iVar7 = 0;
    piVar3 = (int *)FUN_00002428();
    do {
      bVar1 = *(byte *)(*piVar3 + iVar7);
      uVar4 = (uint)bVar1;
      uVar6 = (ushort)((int)(uVar4 << 0x1f) < 0);
      if ((bVar1 & 0x3e) != 0) {
        uVar6 = uVar6 | 2;
      }
      if ((bVar1 & 0x40) != 0) {
        uVar6 = uVar6 | 4;
      }
      if ((bVar1 & 0x10) != 0) {
        uVar6 = uVar6 | 8;
      }
      if ((bVar1 & 8) != 0) {
        uVar6 = uVar6 | 0x10;
      }
      if ((bVar1 & 0x98) != 0) {
        uVar6 = uVar6 | 0x20;
      }
      if (uVar4 == 0x20) {
        uVar6 = uVar6 | 0x40;
      }
      if ((bVar1 & 2) != 0) {
        uVar6 = uVar6 | 0x80;
      }
      if (((uVar4 << 2 ^ uVar4) & 0x80) != 0) {
        uVar6 = uVar6 | 0x100;
      }
      iVar5 = iVar7 * 2;
      iVar7 = iVar7 + 1;
      *(ushort *)(iVar2 + iVar5) = uVar6;
    } while (iVar7 != 0x100);
    FUN_0010fb72(&uStack_20);
    return CONCAT44(uStack_20,iVar2);
  }
  return CONCAT44(uStack_20,DAT_00160fac);
}

