// rea decompile_all
// name: FUN_00185f94
// address: 0x185f94
// body: available
// range: 0x185f94-0x186013 inclusive
// range: 0x19bc50-0x19bca3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00185f94(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *extraout_r2;
  undefined1 *puVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  
  uVar1 = (**(code **)(*param_2 + 0xa4))(param_2);
  piVar4 = (int *)param_1[0x13];
  puVar6 = extraout_r2;
  if (piVar4 != (int *)0x0) {
    puVar6 = &DAT_ffff0100 + uVar1;
  }
  if ((piVar4 != (int *)0x0 && puVar6 != (undefined1 *)0xff) && (uVar1 != 0)) {
    uVar1 = uVar1 - 1 & 0xffff;
  }
  if ((piVar4 != (int *)0x0) && (uVar2 = (**(code **)(*piVar4 + 0x48))(piVar4), uVar2 <= uVar1)) {
    return;
  }
  iVar3 = param_1[0x12];
  iVar5 = *(int *)(*param_1 + -0x14);
  uVar1 = 0;
  while( true ) {
    if (*(ushort *)(iVar3 + 0x5c) <= uVar1) {
      return;
    }
    piVar4 = *(int **)(*(int *)(iVar3 + 0x58) + uVar1 * 4);
    if (piVar4 == (int *)0x0) break;
    (**(code **)(*piVar4 + 0xc))
              (piVar4,iVar5 + (int)param_1,param_2,*(code **)(*piVar4 + 0xc),unaff_r4,unaff_r5,
               unaff_r6);
    uVar1 = uVar1 + 1 & 0xfffeffff;
  }
  return;
}

