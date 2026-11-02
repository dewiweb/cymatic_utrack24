// rea decompile_all
// name: FUN_0011f014
// address: 0x11f014
// body: available
// range: 0x11f014-0x11f10b inclusive
// range: 0x11f61c-0x11f8f7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x11f0ac to 0x11f8f8 FUN_0011f8f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x11f108 to 0x11fc90 FUN_0011fc90 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0011f014(int param_1,int *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uStack_50;
  short *psStack_4c;
  short asStack_48 [4];
  short local_40 [2];
  ushort local_3c;
  short asStack_38 [4];
  undefined1 auStack_30 [24];
  
  iVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  if (iVar2 == *(int *)(param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x34))(local_40);
    (**(code **)(*param_2 + 0x34))(local_40,param_2);
    if (((local_40[0] == 2) && (0x7fff < local_3c)) && (local_3c < *(ushort *)(param_1 + 0x1e))) {
      return;
    }
    puVar3 = (undefined4 *)
             (**(code **)(*(int *)((int)param_2 + *(int *)(*param_2 + -0x38)) + 0x18))
                       (*(int *)(*param_2 + -0x38) + (int)param_2);
    if (puVar3 == (undefined4 *)0x0) {
      return;
    }
    (**(code **)(*param_2 + 0x34))(asStack_38,param_2);
    iVar2 = param_3 * 0xc + -10;
    iVar11 = param_3 * 0xc + -0xc;
    if (asStack_38[0] == 1) {
      if ((puVar3[3] == 0 || param_3 == 0) || (*(ushort *)(puVar3 + 4) < param_3)) {
        uVar1 = *(ushort *)((int)puVar3 + 2);
      }
      else {
        uVar1 = *(ushort *)(puVar3[3] + iVar2);
      }
      FUN_0010e7e0(asStack_48);
      uVar10 = 0;
      while( true ) {
        piVar7 = *(int **)(param_1 + 0x20);
        if ((*(ushort *)(piVar7 + 0x5b) <= uVar10) ||
           (puVar4 = *(undefined4 **)(piVar7[0x5a] + uVar10 * 4), puVar4 == (undefined4 *)0x0))
        break;
        psStack_4c = asStack_48;
        if (piVar7 != (int *)0x0) {
          piVar7 = (int *)((int)piVar7 + *(int *)(*piVar7 + -0x18));
        }
        uStack_50 = (uint)uVar1;
        (**(code **)*puVar4)(puVar4,piVar7,param_3,local_3c);
        uVar10 = uVar10 + 1 & 0xfffeffff;
      }
      if ((puVar3[3] == 0 || param_3 == 0) || (*(ushort *)(puVar3 + 4) < param_3)) {
        uVar8 = (undefined2)*puVar3;
      }
      else {
        uVar8 = (undefined2)*(undefined4 *)(puVar3[3] + iVar11);
      }
      uVar9 = FUN_0015e89c(asStack_48);
      uVar6 = FUN_0010f494(auStack_30,(uint)uVar1,0);
      uStack_50 = CONCAT22(uStack_50._2_2_,uVar8);
      (**(code **)(*param_2 + 0x4c))(param_2,param_3,uVar6,uVar9);
      FUN_0010e7f4(asStack_48);
      return;
    }
    (**(code **)(*param_2 + 0x34))(&uStack_50,param_2);
    if ((short)uStack_50 == 2) {
      iVar5 = puVar3[3];
      if ((iVar5 == 0 || param_3 == 0) || (*(ushort *)(puVar3 + 4) < param_3)) {
        uVar9 = *puVar3;
      }
      else {
        uVar9 = *(undefined4 *)(iVar5 + iVar11);
      }
      if ((iVar5 == 0 || param_3 == 0) || (*(ushort *)(puVar3 + 4) < param_3)) {
        uVar8 = *(undefined2 *)((int)puVar3 + 2);
      }
      else {
        uVar8 = *(undefined2 *)(iVar5 + iVar2);
      }
      (**(code **)(*param_2 + 0x50))(param_2,param_3,uVar8,uVar9);
      return;
    }
    (**(code **)(*param_2 + 0x34))(asStack_48,param_2);
    if (asStack_48[0] == 4) {
      iVar2 = puVar3[3];
      if ((iVar2 == 0 || param_3 == 0) || (*(ushort *)(puVar3 + 4) < param_3)) {
        uVar9 = *puVar3;
      }
      else {
        uVar9 = *(undefined4 *)(iVar2 + iVar11);
      }
      if ((iVar2 == 0 || param_3 == 0) || (*(ushort *)(puVar3 + 4) < param_3)) {
        puVar3 = puVar3 + 1;
      }
      else {
        puVar3 = (undefined4 *)(iVar2 + param_3 * 0xc + -8);
      }
      uVar6 = FUN_0015e89c(puVar3);
      (**(code **)(*param_2 + 0x54))(param_2,param_3,uVar6,uVar9);
      return;
    }
    return;
  }
  piVar7 = (int *)(**(code **)(*param_2 + 0x30))(param_2);
  piVar7 = (int *)(**(code **)(*piVar7 + 0x30))();
  iVar2 = 0;
  if (piVar7 != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)((int)piVar7 + *(int *)(*piVar7 + -0x38)) + 0x24))
                      ((int)piVar7 + *(int *)(*piVar7 + -0x38));
  }
  if (iVar2 == *(int *)(param_1 + 0x24)) {
    FUN_0011f8f8(param_1,param_2,param_3);
    return;
  }
  piVar7 = (int *)(**(code **)(*param_2 + 0x30))(param_2);
  piVar7 = (int *)(**(code **)(*piVar7 + 0x30))();
  iVar2 = 0;
  if (piVar7 != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)((int)piVar7 + *(int *)(*piVar7 + -0x38)) + 0x24))
                      ((int)piVar7 + *(int *)(*piVar7 + -0x38));
  }
  if (iVar2 == *(int *)(param_1 + 0x28)) {
    FUN_0011fc90(param_1,param_2,param_3);
    return;
  }
  return;
}

