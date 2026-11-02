// rea decompile_all
// name: FUN_000803c4
// address: 0x803c4
// body: available
// range: 0x803c4-0x80543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000803c4(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  piVar2 = (int *)FUN_0006cecc();
  iVar8 = DAT_00080544 + 0x68;
  *piVar2 = DAT_00080544;
  piVar2[1] = iVar8;
  puVar3 = (undefined4 *)FUN_000b1210(piVar2 + 7);
  uVar4 = DAT_0008054c;
  *puVar3 = DAT_00080548;
  uVar1 = DAT_00080554;
  puVar3[3] = DAT_00080550;
  iVar8 = FUN_0006e188(puVar3 + 0x13,puVar3 + -6,uVar1,uVar4,uVar4,uVar4,uVar4,uVar4);
  *(undefined4 *)(iVar8 + -0x60) = 0;
  *(undefined4 *)(iVar8 + -0x5c) = 0;
  *(undefined4 *)(iVar8 + -0x58) = 0;
  *(undefined4 *)(iVar8 + -0x54) = 0;
  iVar9 = iVar8 + -0x68;
  *(undefined4 *)(iVar8 + -0x50) = 0;
  uVar4 = FUN_000b4964();
  iVar5 = FUN_000b4840(uVar4,DAT_00080558,iVar8 + -0x4c);
  if (iVar5 == 0) {
    return iVar9;
  }
  uVar10 = 0;
  do {
    uVar7 = (**(code **)(**(int **)(iVar8 + -0x44) + 0x4c))();
    if (uVar7 <= uVar10) {
      *(undefined4 *)(iVar8 + -0x3c) = 0;
      *(undefined4 *)(iVar8 + -0x38) = 0;
      *(undefined4 *)(iVar8 + -0x34) = 0;
      *(undefined4 *)(iVar8 + -0x30) = 0;
      *(undefined4 *)(iVar8 + -0x2c) = 0;
      *(undefined4 *)(iVar8 + -0x28) = 0;
      *(undefined4 *)(iVar8 + -0x24) = 0;
      *(undefined4 *)(iVar8 + -0x20) = 0;
      *(undefined4 *)(iVar8 + -0x1c) = 0;
      *(undefined4 *)(iVar8 + -0x18) = 0;
      FUN_001c6c78(iVar8 + -0x14);
      FUN_0006df20(iVar8,0,0,100,100);
      FUN_000b4c14(iVar9);
      return iVar9;
    }
    piVar2 = (int *)(**(code **)(**(int **)(iVar8 + -0x44) + 0x54))(*(int **)(iVar8 + -0x44),uVar10)
    ;
    if (piVar2 != (int *)0x0) {
      iVar11 = *piVar2;
      iVar6 = FUN_001f01c4(0x44,1);
      iVar5 = 0;
      if (iVar6 != 0) {
        iVar5 = FUN_0017d034(iVar6,iVar9,iVar11);
      }
      iVar6 = iVar9 + iVar11 * 4;
      *(int *)(iVar6 + 8) = iVar5;
      if (iVar5 == 0) {
        return iVar9;
      }
      iVar5 = FUN_0017bf90();
      if (iVar5 != 0) {
        return iVar9;
      }
      uVar4 = FUN_0012b194();
      FUN_0012a7a4(uVar4,*(undefined4 *)(iVar6 + 8));
    }
    uVar10 = uVar10 + 1;
  } while( true );
}

