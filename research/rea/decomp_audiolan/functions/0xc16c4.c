// rea decompile_all
// name: FUN_000c16c4
// address: 0xc16c4
// body: available
// range: 0xc16c4-0xc1711 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000c16c4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar3;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  
  puVar1 = DAT_000c1714;
  piVar4 = (int *)*param_1;
  piVar7 = param_1;
  if ((int *)param_1[1] != piVar4) {
    do {
      iVar5 = *piVar4;
      uVar6 = param_2;
      piVar2 = (int *)FUN_000b369c(*puVar1,*(undefined4 *)(iVar5 + 4),1,param_4,param_2,piVar7);
      uVar3 = extraout_r3;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x30))(piVar2,uVar6);
        uVar3 = extraout_r3_00;
      }
      piVar2 = (int *)FUN_000b369c(*puVar1,*(undefined4 *)(iVar5 + 0xc),0,uVar3,uVar6,piVar7);
      param_4 = extraout_r3_01;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x30))(piVar2,uVar6);
        param_4 = extraout_r3_02;
      }
      piVar4 = piVar4 + 1;
    } while ((int *)param_1[1] != piVar4);
  }
  return;
}

