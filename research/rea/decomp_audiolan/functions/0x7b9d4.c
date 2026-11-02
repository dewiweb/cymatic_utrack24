// rea decompile_all
// name: FUN_0007b9d4
// address: 0x7b9d4
// body: available
// range: 0x7b9d4-0x7bbd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0007b9d4(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_5c [49];
  undefined1 uStack_2b;
  
  iVar4 = FUN_0016deb0(param_2,DAT_0007bbd8,DAT_0007bbd4,0xffffffff);
  if (iVar4 == 0) {
    return 0xfffffffb;
  }
  piVar5 = (int *)FUN_001a0808(8,1);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = _DAT_0007bbdc;
    piVar5[1] = 0;
  }
  piVar6 = *(int **)(param_1 + 0xc);
  if (piVar6 != piVar5) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0xc))();
    }
    *(int **)(param_1 + 0xc) = piVar5;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00002904(auStack_5c,0x31,s____s_ISO_Ch_d_0007bbde + 2,param_3);
    uStack_2b = 0;
    FUN_00065b7c(*(undefined4 *)(param_1 + 0xc),auStack_5c);
    iVar7 = FUN_001a0808(0x54,*(undefined1 *)(*(int *)(iVar4 + 4) + 0xd8));
    if (iVar7 != 0) {
      uVar9 = *(undefined4 *)(*(int *)(iVar4 + 4) + 0xd4);
      uVar1 = *(undefined1 *)(*(int *)(iVar4 + 4) + 0xd0);
      iVar7 = FUN_0014fc10();
      FUN_0014fb80(iVar7,1,uVar9,uVar1);
      if (*(int *)(param_1 + 4) != iVar7) {
        if (*(int *)(param_1 + 4) != 0) {
          FUN_0014fc34();
          FUN_0019f30c();
        }
        *(int *)(param_1 + 4) = iVar7;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 4) + 0x10;
      *(undefined1 *)(param_1 + 0x10) = 0;
      if (*(int *)(param_1 + 0x14) == 0) {
        uVar9 = FUN_0019f358(param_1);
        puVar8 = (undefined4 *)FUN_001a0808(0x30,uVar9);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[7] = 0;
          puVar8[8] = 0;
          puVar8[9] = 0;
          puVar8[10] = 0;
          puVar8[0xb] = 0;
        }
        *(undefined4 **)(param_1 + 0x14) = puVar8;
        if (puVar8 == (undefined4 *)0x0) {
          return 0xffffffdf;
        }
      }
      *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(*(int *)(param_2 + 4) + 100);
      bVar2 = *(byte *)(*(int *)(iVar4 + 4) + 0xd0);
      uVar3 = (ushort)bVar2;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0xc4);
      if (bVar2 == 8 || bVar2 == 1) {
        uVar3 = 1;
      }
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(int *)(iVar4 + 4) + 200);
      if (bVar2 == 8 || bVar2 == 1) {
        *(ushort *)(param_1 + 0x22) = uVar3;
      }
      else {
        *(undefined2 *)(param_1 + 0x22) = 0;
      }
      return 0;
    }
  }
  return 0xffffffce;
}

