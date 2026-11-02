// rea decompile_all
// name: FUN_0008b578
// address: 0x8b578
// body: available
// range: 0x8b578-0x8b83f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0008b578(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  undefined4 local_4c;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [4];
  
  uVar1 = FUN_001b4f14(param_1);
  uVar2 = FUN_001b4ef0(param_1);
  if (*(char *)(param_1 + 0x82) == '\0') {
    uVar3 = 0x4e;
  }
  else {
    uVar3 = 0x59;
  }
  FUN_00002898(DAT_0008b840,*(undefined1 *)(param_1 + 0x1d),*(undefined1 *)(param_1 + 0x1c),uVar2,
               uVar1,uVar3);
  for (uVar9 = 0; uVar4 = FUN_0022f058(param_2), uVar9 < uVar4; uVar9 = uVar9 + 1) {
    puVar6 = (undefined4 *)FUN_00244fe4(param_2,uVar9);
    FUN_00002898(&DAT_0008b844,*puVar6);
  }
  FUN_00002898(&DAT_0008b848);
  iVar5 = FUN_0022f058(param_2);
  if (iVar5 == 0) {
    iVar5 = -5;
  }
  else if (*(char *)(param_1 + 0x82) == '\0') {
    iVar5 = -1;
  }
  else {
    iVar5 = -2;
    FUN_00172844(auStack_28,*(undefined4 *)(param_1 + 0x6c));
    if (*(char *)(param_1 + 0x1d) == '\0') {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        iVar5 = 0;
        FUN_0023cc18(param_1 + 0x50);
        for (uVar9 = 0; uVar4 = FUN_0022f058(param_2), uVar9 < uVar4; uVar9 = uVar9 + 1) {
          puVar6 = (undefined4 *)FUN_00244fe4(param_2,uVar9);
          local_4c = *puVar6;
          uVar1 = FUN_00111458(auStack_40,local_4c,uVar9 + 1 & 0xff,s_Unknown_0008b84c,0);
          FUN_0023ce2c(param_1 + 0x50,uVar1);
          FUN_00111568(auStack_40);
          FUN_001726d4(auStack_58,param_1 + 0x5c);
          local_54 = local_4c;
          uVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x154))
                            (*(int **)(param_1 + 0x6c),auStack_58,0);
          iVar7 = FUN_0022e4a0(param_1 + 0x50);
          uVar2 = FUN_0023cff0(param_1 + 0x50,iVar7 + -1);
          FUN_0011131c(uVar2,uVar1);
          piVar8 = *(int **)(param_1 + 0x68);
          piVar10 = (int *)((int)piVar8 + *(int *)(*piVar8 + -0x1ec));
          (**(code **)(*(int *)((int)piVar8 + *(int *)(*piVar8 + -0x1ec)) + 0xec))
                    (auStack_48,(int)piVar8 + *(int *)(*piVar8 + -0x1ec),1);
          uVar1 = FUN_001beccc(auStack_48);
          iVar7 = (**(code **)(*piVar10 + 0x1a4))
                            (piVar10,auStack_58,DAT_0008b85c,DAT_0008b858,6,uVar9 + 1 & 0xffff,0,
                             uVar1,DAT_0008b854);
          FUN_00171ea4(auStack_48);
          if (iVar7 != 0) {
            iVar5 = -1;
            break;
          }
          uVar1 = FUN_001d06b8();
          iVar7 = FUN_0022e4a0(param_1 + 0x50);
          iVar7 = FUN_0023cff0(param_1 + 0x50,iVar7 + -1);
          *(undefined4 *)(iVar7 + 0x14) = uVar1;
        }
        if (iVar5 == 0) {
          *(undefined1 *)(param_1 + 0x1d) = 4;
        }
      }
      else {
        iVar5 = -6;
      }
    }
    FUN_0017286c(auStack_28);
  }
  return iVar5;
}

