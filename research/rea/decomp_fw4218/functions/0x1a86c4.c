// rea decompile_all
// name: FUN_001a86c4
// address: 0x1a86c4
// body: available
// range: 0x1a86c4-0x1a87eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a86c4(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  
  piVar1 = DAT_001a87f4;
  piVar4 = DAT_001a87ec;
  if (*DAT_001a87ec == DAT_001a87ec[1]) {
    FUN_00002898(DAT_001a87f0);
  }
  else {
    if (*DAT_001a87f4 == param_1) {
      return 1;
    }
    if (((int *)DAT_001a87f4[1] != (int *)0x0) &&
       (iVar2 = (**(code **)(*(int *)DAT_001a87f4[1] + 0x20))(), iVar2 == 0)) {
      uVar5 = (**(code **)(*(int *)piVar1[1] + 0xc))();
      FUN_00002898(DAT_001a87fc,uVar5);
      return 0;
    }
    iVar2 = DAT_001a87f8;
    for (piVar3 = (int *)*piVar4; (int *)piVar4[1] != piVar3; piVar3 = piVar3 + 2) {
      if (*piVar3 == param_1) {
        piVar4 = (int *)piVar3[1];
        *(int *)(DAT_001a87f8 + 4) = *piVar3;
        *(int **)(iVar2 + 8) = piVar4;
        iVar2 = (**(code **)(*piVar4 + 0x18))();
        if (iVar2 == 0) {
          uVar5 = (**(code **)(*(int *)piVar1[1] + 0xc))();
          FUN_00002898(DAT_001a8800,uVar5);
          return 0;
        }
        iVar2 = (**(code **)(*(int *)piVar1[1] + 0x1c))();
        if (iVar2 == 0) {
          uVar5 = (**(code **)(*(int *)piVar1[1] + 0xc))();
          FUN_00002898(DAT_001a8804,uVar5);
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}

