// rea decompile_all
// name: FUN_00051b10
// address: 0x51b10
// body: available
// range: 0x51b10-0x51bf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00051b10(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = DAT_00051bf8;
  FUN_001a0700(DAT_00051bf8);
  puVar6 = *(undefined4 **)(param_1 + 0x14);
  for (puVar2 = (undefined4 *)*puVar6; (puVar2 != puVar6 && (puVar2[2] != param_2));
      puVar2 = (undefined4 *)*puVar2) {
  }
  if (puVar2 != puVar6) {
    FUN_001a0d18(uVar1);
    return 0;
  }
  piVar7 = (int *)(param_1 + 4);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 == (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 0x10)) {
      uVar9 = 1;
      if (*piVar7 != 0) {
        uVar8 = *(uint *)(*piVar7 + 4);
        uVar3 = (uVar8 >> 1) + uVar8 + (uVar8 >> 3);
        uVar9 = uVar8 + 1;
        if (uVar8 + 1 <= uVar3) {
          uVar9 = uVar3;
        }
      }
      piVar4 = (int *)FUN_0010f82c(0xc,0);
      iVar5 = FUN_0010f82c(uVar9 * 0xc,0);
      piVar4[2] = iVar5;
      *piVar4 = *piVar7;
      piVar4[1] = uVar9;
      *piVar7 = (int)piVar4;
      iVar5 = piVar4[2];
      *(int *)(param_1 + 0xc) = iVar5;
      *(uint *)(param_1 + 0x10) = iVar5 + uVar9 * 0xc;
    }
    puVar2 = *(undefined4 **)(param_1 + 0xc);
    *(undefined4 **)(param_1 + 0xc) = puVar2 + 3;
  }
  else {
    *(undefined4 *)(param_1 + 8) = *puVar2;
  }
  if (puVar2 + 2 != (int *)0x0) {
    puVar2[2] = param_2;
  }
  *puVar2 = puVar6;
  puVar2[1] = puVar6[1];
  *(undefined4 **)puVar6[1] = puVar2;
  puVar6[1] = puVar2;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  FUN_001a0d18(uVar1);
  return 1;
}

