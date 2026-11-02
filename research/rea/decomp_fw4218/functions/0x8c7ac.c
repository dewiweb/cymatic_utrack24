// rea decompile_all
// name: FUN_0008c7ac
// address: 0x8c7ac
// body: available
// range: 0x8c7ac-0x8c97f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0008c7ac(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar9 = 0;
  uVar1 = FUN_0022e4a0(param_1 + 0x50);
  uVar1 = uVar1 & 0xffff;
  if (uVar1 == 0) {
    *(undefined1 *)(param_1 + 0x1d) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    FUN_00111390(param_1 + 0x20);
    FUN_0008c3ac(param_1);
  }
  else {
    for (uVar8 = 0; uVar8 < uVar1; uVar8 = uVar8 + 1) {
      FUN_001726d4(&local_30,param_1 + 0x5c);
      FUN_0023cff0(param_1 + 0x50,uVar8);
      local_2c = FUN_001b9eb8();
      piVar7 = (int *)((int)*(int **)(param_1 + 0x68) +
                      *(int *)(**(int **)(param_1 + 0x68) + -0x1ec));
      uVar6 = FUN_001beccc(DAT_0008c980);
      uVar2 = FUN_0023cff0(param_1 + 0x50,uVar8);
      uVar3 = FUN_001b9edc();
      iVar5 = (**(code **)(*piVar7 + 0x1a4))
                        (piVar7,&local_30,DAT_0008c98c,DAT_0008c988,3,uVar3,uVar1,uVar6,DAT_0008c984
                         ,uVar2);
      if (iVar5 != 0) {
        uVar9 = 0xffffffff;
        break;
      }
    }
    *(undefined1 *)(param_1 + 0x1d) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x60);
    *(undefined1 *)(param_1 + 0x74) = 0;
    local_30 = FUN_002341f4(param_1 + 0x84);
    while( true ) {
      local_2c = FUN_002341cc(param_1 + 0x84);
      local_28 = local_2c;
      iVar5 = FUN_0022484c(&local_30,&local_28);
      if (iVar5 == 0) break;
      puVar4 = (undefined4 *)FUN_0022c26c(&local_30);
      (**(code **)(*(int *)*puVar4 + 0x14))((int *)*puVar4,param_1 + 0x50);
      FUN_0020930c(&local_30);
    }
    FUN_0008c3ac(param_1);
  }
  piVar7 = (int *)((int)*(int **)(param_1 + 0x68) + *(int *)(**(int **)(param_1 + 0x68) + -0x1ec));
  uVar6 = FUN_001beccc(DAT_0008c980);
  (**(code **)(*piVar7 + 0x1a8))(piVar7,DAT_0008c98c,DAT_0008c988,1,0,0,uVar6,DAT_0008c984);
  return uVar9;
}

