// rea decompile_all
// name: FUN_001e8170
// address: 0x1e8170
// body: available
// range: 0x1e8170-0x1e820f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e8170(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_001e5738();
  iVar2 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x2c) != iVar2) {
    FUN_0002a1c6(0,_DAT_001e8210,param_2,*(int *)(param_1 + 0x2c),iVar2);
    param_4 = iVar2;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (*(int *)(param_1 + 0xdc) != 0) {
      iVar2 = FUN_001e58da();
      FUN_0002a1c6(0,s_x___s__mDNS_Lock__m_>timenow_alr_001e8211 + 3,param_2,
                   *(undefined4 *)(param_1 + 0xdc),iVar2 + *(int *)(param_1 + 0xd8));
    }
    iVar2 = FUN_001e58da();
    iVar2 = iVar2 + *(int *)(param_1 + 0xd8);
    *(int *)(param_1 + 0xdc) = iVar2;
  }
  else {
    if (*(int *)(param_1 + 0xdc) != 0) goto LAB_001e81e2;
    FUN_0002a1c6(0,s__s__mDNS_Lock__m_>mDNS_busy_is___001e8244,param_2,*(int *)(param_1 + 0x2c),
                 param_4);
    iVar2 = FUN_001e58da();
    iVar2 = iVar2 + *(int *)(param_1 + 0xd8);
    *(int *)(param_1 + 0xdc) = iVar2;
  }
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xdc) = 1;
  }
LAB_001e81e2:
  uVar1 = DAT_001e8280;
  iVar2 = *(int *)(param_1 + 0xdc);
  iVar3 = *(int *)(param_1 + 0xe0) - iVar2;
  if (0 < iVar3) {
    iVar2 = iVar3 + *(int *)(param_1 + 0xd8);
    *(int *)(param_1 + 0xd8) = iVar2;
    FUN_0002a1c6(0,uVar1,param_2,iVar3,iVar2);
    iVar2 = *(int *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xdc) = iVar2;
  }
  *(int *)(param_1 + 0xe0) = iVar2;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  return;
}

