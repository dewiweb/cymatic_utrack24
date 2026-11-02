// rea decompile_all
// name: FUN_001a2410
// address: 0x1a2410
// body: available
// range: 0x1a2410-0x1a2603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a2410(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  
  uVar4 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = uVar4 + 1;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)(0xfffffffe < uVar4);
  bVar3 = false;
  uVar10 = 1;
  bVar2 = false;
  uVar4 = *(int *)(param_1 + 0x1c) + (uint)CARRY4(*(uint *)(param_2 + 8),*(uint *)(param_1 + 0x18));
  *(uint *)(param_1 + 0x18) = *(uint *)(param_2 + 8) + *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x1c) = uVar4;
  uVar1 = *(ushort *)(param_2 + 0x4c);
  if ((uVar1 & 2) == 0) {
    bVar11 = (uVar1 & 0xc) != 0;
    if (bVar11) {
      uVar4 = uVar1 & 0xc;
    }
    if ((bVar11 && uVar4 != 8) && ((uVar1 & 0x10) == 0)) {
      if (*(short *)(param_2 + 0x12) == 0) {
        return 1;
      }
      uVar4 = 0;
      do {
        uVar5 = FUN_001bd87c(param_2 + 0xc,uVar4);
        iVar6 = FUN_00184144(*(int *)(param_1 + 0x28) + 0x58c,uVar5);
        if (iVar6 == 0) {
          bVar2 = true;
        }
        else {
          bVar3 = true;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)(param_2 + 0x12));
      if (!bVar2) {
        if (!bVar3) {
          return 1;
        }
        iVar6 = FUN_001511f8(param_2);
        if (iVar6 == 0) {
          return 1;
        }
        piVar7 = *(int **)(param_1 + 4);
        if (piVar7 != (int *)0x0) {
          iVar9 = (**(code **)(*piVar7 + 0x10))(piVar7,iVar6);
          uVar10 = 1;
          if (iVar9 == 0) goto LAB_001a25f8;
        }
        uVar10 = 0;
        goto LAB_001a25f8;
      }
    }
  }
  iVar6 = FUN_001511f8(param_2);
  if (iVar6 == 0) {
    return 1;
  }
  piVar7 = *(int **)(param_1 + 4);
  if (piVar7 != (int *)0x0) {
    if (param_3 != 0) {
      puVar8 = (undefined4 *)FUN_001c6b14(0x14,DAT_001a2604);
      uVar5 = DAT_001a2608;
      if (puVar8 != (undefined4 *)0x0) {
        puVar8[1] = 0;
        *puVar8 = uVar5;
        puVar8[2] = 0;
        puVar8[4] = iVar6;
        FUN_00152224(iVar6);
        uVar5 = FUN_001d06b8();
        puVar8[3] = uVar5;
        puVar8[1] = 0;
        puVar8[2] = 0;
        if (*(int *)(param_1 + 0x9c) == 0) {
          *(undefined4 **)(param_1 + 0x98) = puVar8;
        }
        else {
          puVar8[1] = *(int *)(param_1 + 0x9c);
          *(undefined4 **)(*(int *)(param_1 + 0x9c) + 8) = puVar8;
        }
        *(undefined4 **)(param_1 + 0x9c) = puVar8;
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      }
      thunk_EXT_FUN_0040010c(*(int *)(param_1 + 0x28) + 0x464);
      *(undefined4 *)(param_1 + 0x90) = 1;
      goto LAB_001a25f8;
    }
    iVar9 = (**(code **)(*piVar7 + 8))(piVar7,iVar6);
    uVar10 = 1;
    if (iVar9 == 0) goto LAB_001a25f8;
  }
  uVar10 = 0;
LAB_001a25f8:
  FUN_0015223c(iVar6);
  return uVar10;
}

