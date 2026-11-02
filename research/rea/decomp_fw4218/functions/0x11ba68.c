// rea decompile_all
// name: FUN_0011ba68
// address: 0x11ba68
// body: available
// range: 0x11ba68-0x11bba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0011ba68(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  piVar3 = (int *)FUN_000032fc(*param_2,0);
  piVar4 = (int *)FUN_000032fc(param_2[1],0);
  uVar5 = FUN_000032fc(param_2[2],0);
  FUN_00002898(s_start___d_end___d_block_size___d_0011bba4,piVar3,piVar4,uVar5);
  iVar2 = DAT_0011bbc8;
  iVar6 = (int)piVar4 - (int)piVar3;
  if (0 < iVar6 >> 2) {
    piVar8 = piVar3 + -1;
    if (iVar6 * 0x20000000 < 0) {
      *piVar3 = DAT_0011bbc8;
      piVar8 = piVar3;
    }
    for (iVar6 = iVar6 >> 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      piVar8[1] = iVar2;
      piVar8 = piVar8 + 2;
      *piVar8 = iVar2;
    }
  }
  iVar6 = DAT_0011bbcc;
  if (0 < (int)uVar5 >> 2) {
    piVar8 = piVar3 + -1;
    if ((int)((uVar5 & 0xfffffffc) * 0x20000000) < 0) {
      *piVar3 = DAT_0011bbcc;
      piVar8 = piVar3;
    }
    for (iVar7 = (int)uVar5 >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
      piVar8[1] = iVar6;
      piVar8 = piVar8 + 2;
      *piVar8 = iVar6;
    }
  }
  piVar8 = (int *)0x0;
  iVar6 = 0;
  bVar1 = false;
  for (; piVar3 < piVar4; piVar3 = piVar3 + 1) {
    if (*piVar3 == iVar2) {
      bVar1 = true;
      if (piVar8 == (int *)0x0) {
        piVar8 = piVar3;
      }
      iVar6 = iVar6 + 1;
    }
    else if (bVar1) {
      piVar3 = piVar4;
    }
  }
  FUN_00002898(s_blk_start___X_size___d_0011bbd0,piVar8,iVar6 << 2);
  return 0;
}

