// rea decompile_all
// name: FUN_0011fc90
// address: 0x11fc90
// body: available
// range: 0x11fc90-0x11ff97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0011fc90(int param_1,int *param_2,uint param_3)

{
  ushort uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  code *pcVar13;
  uint uStack_58;
  uint uStack_54;
  undefined1 *puStack_50;
  undefined4 local_4c;
  short local_48 [2];
  ushort local_44;
  short asStack_40 [4];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  piVar2 = (int *)(**(code **)(*param_2 + 0x30))(param_2);
  local_4c = (**(code **)(*(int *)((int)piVar2 + *(int *)(*piVar2 + -0x38)) + 0x20))();
  (**(code **)(*param_2 + 0x34))(local_48,param_2);
  uVar11 = (uint)local_44;
  (**(code **)(*param_2 + 0x34))(local_48,param_2);
  if (((local_48[0] == 2) && (0x7fff < uVar11)) && (uVar11 < *(ushort *)(param_1 + 0x1e))) {
    return;
  }
  puVar3 = (undefined4 *)
           (**(code **)(*(int *)((int)param_2 + *(int *)(*param_2 + -0x38)) + 0x18))
                     (*(int *)(*param_2 + -0x38) + (int)param_2);
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  (**(code **)(*param_2 + 0x34))(asStack_40,param_2);
  iVar9 = param_3 * 0xc + -10;
  iVar12 = param_3 * 0xc + -0xc;
  if (asStack_40[0] == 1) {
    if ((puVar3[3] == 0 || param_3 == 0) || (*(ushort *)(puVar3 + 4) < param_3)) {
      uVar1 = *(ushort *)((int)puVar3 + 2);
    }
    else {
      uVar1 = *(ushort *)(puVar3[3] + iVar9);
    }
    FUN_0010e7e0(auStack_38);
    uVar8 = 0;
    while( true ) {
      piVar2 = *(int **)(param_1 + 0x20);
      if ((*(ushort *)(piVar2 + 0x5b) <= uVar8) ||
         (piVar4 = *(int **)(piVar2[0x5a] + uVar8 * 4), piVar4 == (int *)0x0)) break;
      puStack_50 = auStack_38;
      if (piVar2 != (int *)0x0) {
        piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0x18));
      }
      uStack_58 = uVar11;
      uStack_54 = (uint)uVar1;
      (**(code **)(*piVar4 + 0x28))(piVar4,piVar2,local_4c,param_3);
      uVar8 = uVar8 + 1 & 0xfffeffff;
    }
    if ((puVar3[3] == 0 || param_3 == 0) || (*(ushort *)(puVar3 + 4) < param_3)) {
      uVar7 = (undefined2)*puVar3;
    }
    else {
      uVar7 = (undefined2)*(undefined4 *)(puVar3[3] + iVar12);
    }
    uVar10 = FUN_0015e89c(auStack_38);
    uVar5 = FUN_0010f494(auStack_30,(uint)uVar1,0);
    uStack_58 = CONCAT22(uStack_58._2_2_,uVar7);
    (**(code **)(*param_2 + 0x4c))(param_2,0,uVar5,uVar10);
    FUN_0010e7f4(auStack_38);
    return;
  }
  (**(code **)(*param_2 + 0x34))(&uStack_58,param_2);
  if ((short)uStack_58 == 2) {
    iVar6 = puVar3[3];
    if ((iVar6 == 0 || param_3 == 0) || (*(ushort *)(puVar3 + 4) < param_3)) {
      uVar10 = *puVar3;
    }
    else {
      uVar10 = *(undefined4 *)(iVar6 + iVar12);
    }
    if ((iVar6 == 0 || param_3 == 0) || (*(ushort *)(puVar3 + 4) < param_3)) {
      uVar1 = *(ushort *)((int)puVar3 + 2);
    }
    else {
      uVar1 = *(ushort *)(iVar6 + iVar9);
    }
    uVar11 = (uint)uVar1;
    pcVar13 = *(code **)(*param_2 + 0x50);
  }
  else {
    (**(code **)(*param_2 + 0x34))(&puStack_50,param_2);
    if ((short)puStack_50 != 4) {
      return;
    }
    iVar9 = puVar3[3];
    if ((iVar9 == 0 || param_3 == 0) || (*(ushort *)(puVar3 + 4) < param_3)) {
      uVar10 = *puVar3;
    }
    else {
      uVar10 = *(undefined4 *)(iVar9 + iVar12);
    }
    if ((iVar9 == 0 || param_3 == 0) || (*(ushort *)(puVar3 + 4) < param_3)) {
      puVar3 = puVar3 + 1;
    }
    else {
      puVar3 = (undefined4 *)(iVar9 + param_3 * 0xc + -8);
    }
    uVar11 = FUN_0015e89c(puVar3);
    pcVar13 = *(code **)(*param_2 + 0x54);
  }
  (*pcVar13)(param_2,0,uVar11,uVar10);
  return;
}

