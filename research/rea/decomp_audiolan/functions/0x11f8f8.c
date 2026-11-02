// rea decompile_all
// name: FUN_0011f8f8
// address: 0x11f8f8
// body: available
// range: 0x11f8f8-0x11fc8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0011f8f8(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  short *psStack_50;
  undefined4 uStack_4c;
  short asStack_48 [2];
  ushort uStack_44;
  short asStack_40 [4];
  short asStack_38 [4];
  undefined1 auStack_30 [12];
  
  piVar2 = (int *)(**(code **)(*param_2 + 0x30))(param_2);
  iVar3 = (**(code **)(*(int *)((int)piVar2 + *(int *)(*piVar2 + -0x38)) + 0x18))();
  if (iVar3 == 0) {
    return;
  }
  piVar2 = (int *)(**(code **)(*param_2 + 0x30))(param_2);
  uStack_4c = (**(code **)(*(int *)((int)piVar2 + *(int *)(*piVar2 + -0x38)) + 0x20))();
  (**(code **)(*param_2 + 0x34))(asStack_48,param_2);
  (**(code **)(*param_2 + 0x34))(asStack_48,param_2);
  if (((asStack_48[0] == 2) && (0x7fff < uStack_44)) && (uStack_44 < *(ushort *)(iVar3 + 6))) {
    return;
  }
  puVar4 = (undefined4 *)
           (**(code **)(*(int *)((int)param_2 + *(int *)(*param_2 + -0x38)) + 0x18))
                     (*(int *)(*param_2 + -0x38) + (int)param_2);
  (**(code **)(*param_2 + 0x34))(asStack_40,param_2);
  iVar11 = param_3 * 0xc + -10;
  iVar12 = param_3 * 0xc + -0xc;
  if (asStack_40[0] == 1) {
    if ((puVar4[3] == 0 || param_3 == 0) || (*(ushort *)(puVar4 + 4) < param_3)) {
      uVar9 = *(undefined2 *)((int)puVar4 + 2);
    }
    else {
      uVar9 = *(undefined2 *)(puVar4[3] + iVar11);
    }
    FUN_0010e7e0(asStack_38);
    uVar5 = 0;
    while( true ) {
      piVar2 = *(int **)(param_1 + 0x20);
      if ((*(ushort *)(piVar2 + 0x5b) <= uVar5) ||
         (piVar6 = *(int **)(piVar2[0x5a] + uVar5 * 4), piVar6 == (int *)0x0)) break;
      psStack_50 = asStack_38;
      if (piVar2 != (int *)0x0) {
        piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0x18));
      }
      (**(code **)(*piVar6 + 0x14))(piVar6,piVar2,uStack_4c,param_3);
      uVar5 = uVar5 + 1 & 0xfffeffff;
    }
    uVar10 = FUN_0015e89c(asStack_38);
    uVar7 = FUN_0010f494(auStack_30,uVar9,0);
    (**(code **)(*param_2 + 0x4c))(param_2,param_3,uVar7,uVar10);
    FUN_0010e7f4(asStack_38);
    return;
  }
  (**(code **)(*param_2 + 0x34))(&psStack_50,param_2);
  if ((short)psStack_50 != 2) {
    (**(code **)(*param_2 + 0x34))(asStack_38,param_2);
    if (asStack_38[0] != 4) {
      return;
    }
    puVar8 = (undefined4 *)0x0;
    if (((uStack_44 == 0x1011) && (uVar5 = (uint)*(ushort *)(iVar3 + 8), uVar5 != 0 && param_3 != 0)
        ) && (param_3 <= uVar5)) {
      uVar1 = param_3 - 1 & 0xffff;
      if (*(int *)(iVar3 + 0x10) == 0 || uVar5 <= uVar1) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = (undefined4 *)(*(int *)(iVar3 + 0x10) + uVar1 * 8);
      }
    }
    iVar3 = puVar4[3];
    if ((iVar3 == 0 || param_3 == 0) || (*(ushort *)(puVar4 + 4) < param_3)) {
      uVar10 = *puVar4;
    }
    else {
      uVar10 = *(undefined4 *)(iVar3 + iVar12);
    }
    if (puVar8 == (undefined4 *)0x0) {
      if ((iVar3 == 0 || param_3 == 0) || (*(ushort *)(puVar4 + 4) < param_3)) {
        puVar8 = puVar4 + 1;
      }
      else {
        puVar8 = (undefined4 *)(param_3 * 0xc + -8 + iVar3);
      }
    }
    uVar7 = FUN_0015e89c(puVar8);
    (**(code **)(*param_2 + 0x54))(param_2,param_3,uVar7,uVar10);
    return;
  }
  iVar3 = puVar4[3];
  if ((iVar3 == 0 || param_3 == 0) || (*(ushort *)(puVar4 + 4) < param_3)) {
    uVar10 = *puVar4;
  }
  else {
    uVar10 = *(undefined4 *)(iVar3 + iVar12);
  }
  if ((iVar3 == 0 || param_3 == 0) || (*(ushort *)(puVar4 + 4) < param_3)) {
    uVar9 = *(undefined2 *)((int)puVar4 + 2);
  }
  else {
    uVar9 = *(undefined2 *)(iVar3 + iVar11);
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_3,uVar9,uVar10);
  return;
}

