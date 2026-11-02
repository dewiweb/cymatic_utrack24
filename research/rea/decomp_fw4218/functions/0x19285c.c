// rea decompile_all
// name: FUN_0019285c
// address: 0x19285c
// body: available
// range: 0x19285c-0x1929ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0019285c(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  if (param_1[0x28] != 0) {
    if ((param_2 == 0) || (*(int *)(param_2 + 0x24) != DAT_001929ac)) {
      FUN_00182054(param_1[0x28],*(int *)(*param_1 + -0xc) + (int)param_1,0x80,DAT_001929b4,0,0,0,0,
                   0,0,0,0,0,0,DAT_001929b0);
    }
    else {
      FUN_0014cd1c(auStack_4c,param_2 + 0xe4);
      FUN_00171e20(auStack_38,param_2 + 0x40);
      uVar1 = FUN_001beccc(auStack_38);
      FUN_00171e20(auStack_40,param_2 + 0x38);
      uVar2 = FUN_001beccc(auStack_40);
      uVar3 = *(undefined4 *)(param_2 + 0xa0);
      uVar4 = *(undefined4 *)(param_2 + 0xbc);
      uVar5 = *(undefined4 *)(param_2 + 0xa4);
      uVar6 = *(undefined4 *)(param_2 + 0xa8);
      uVar7 = *(undefined4 *)(param_2 + 0xac);
      uVar8 = *(undefined4 *)(param_2 + 0xb0);
      uVar9 = *(undefined4 *)(param_2 + 0xb4);
      uVar10 = *(undefined4 *)(param_2 + 0xb8);
      FUN_001726d4(auStack_30,param_2 + 0x58);
      FUN_00182054(param_1[0x28],*(int *)(*param_1 + -0xc) + (int)param_1,0x81,auStack_30,uVar5,
                   uVar7,uVar9,uVar6,uVar8,uVar10,uVar4,uVar3,uVar2,uVar1,auStack_4c);
      FUN_00171ea4(auStack_40);
      FUN_00171ea4(auStack_38);
      FUN_0014cd8c(auStack_4c);
    }
  }
  param_1[0x28] = 0;
  return 1;
}

