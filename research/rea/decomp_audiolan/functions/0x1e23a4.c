// rea decompile_all
// name: FUN_001e23a4
// address: 0x1e23a4
// body: available
// range: 0x1e23a4-0x1e26fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001e23a4(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_30 [12];
  
  iVar2 = FUN_000034d0(param_2);
  uVar10 = 0;
  iVar8 = *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0xc);
  if (*(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x38) != 0) {
    piVar9 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x38);
    if ((*(int *)((int)piVar9 + *(int *)(*piVar9 + -0xc) + 0x34) != 0) &&
       (iVar3 = (**(code **)(**(int **)((int)piVar9 + *(int *)(*piVar9 + -0xc) + 0x34) + 0x34))(),
       iVar3 == -1)) {
      iVar3 = *(int *)(*piVar9 + -0xc) + (int)piVar9;
      FUN_00161878(iVar3,*(uint *)(iVar3 + 0x10) | 1,0xffffffff);
    }
  }
  if (*DAT_001e26fc != '\0') {
    iVar3 = *(int *)(*param_1 + -0xc) + (int)param_1;
    uVar4 = DAT_001e2704;
    if (iVar3 != *(int *)(DAT_001e2700 + 4)) {
      bVar12 = iVar3 != *(int *)(DAT_001e2700 + 8);
      iVar6 = DAT_001e2700;
      if (bVar12) {
        iVar6 = *(int *)(DAT_001e2700 + 0xc);
      }
      uVar4 = DAT_001e2708;
      if (bVar12 && iVar3 != iVar6) goto LAB_001e24a4;
    }
    FUN_000156a4(uVar4);
  }
LAB_001e24a4:
  piVar9 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x34);
  if ((piVar9 != (int *)0x0) && ((piVar9[1] & 1U) != 0)) {
    (**(code **)(*piVar9 + 0x10))(auStack_30,piVar9,0,2,8);
  }
  if (*(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x10) != 0) goto LAB_001e2688;
  iVar8 = iVar8 - iVar2;
  uVar11 = *(uint *)((int)param_1 + *(int *)(*param_1 + -0xc) + 4) & 0xb0;
  if (uVar11 == 0x20) {
LAB_001e25b8:
    if ((iVar2 == 0) ||
       (piVar9 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x34),
       iVar3 = (**(code **)(*piVar9 + 0x30))(piVar9,param_2,iVar2), iVar3 == iVar2)) {
      if (uVar11 != 0x20) goto LAB_001e2688;
      iVar3 = 0;
      iVar2 = iVar8;
      if (0 < iVar8) {
        do {
          piVar9 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x34);
          bVar1 = *(byte *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x3c);
          uVar11 = (uint)bVar1;
          if (((piVar9[1] & 8U) == 0) || (pbVar7 = (byte *)piVar9[9], (byte *)piVar9[10] == pbVar7))
          {
            uVar11 = (**(code **)(*piVar9 + 0x28))
                               (piVar9,uVar11,*(code **)(*piVar9 + 0x28),piVar9,bVar1);
          }
          else {
            piVar9[9] = (int)(pbVar7 + 1);
            *pbVar7 = bVar1;
          }
          iVar2 = iVar3;
        } while ((uVar11 != 0xffffffff) && (iVar3 = iVar3 + 1, iVar2 = iVar8, iVar3 < iVar8));
      }
      if (iVar2 == iVar8) goto LAB_001e2688;
    }
  }
  else {
    iVar6 = 0;
    iVar3 = iVar8;
    if (0 < iVar8) {
      do {
        piVar9 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x34);
        bVar1 = *(byte *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x3c);
        uVar5 = (uint)bVar1;
        if (((piVar9[1] & 8U) == 0) || (pbVar7 = (byte *)piVar9[9], (byte *)piVar9[10] == pbVar7)) {
          uVar5 = (**(code **)(*piVar9 + 0x28))
                            (piVar9,uVar5,*(code **)(*piVar9 + 0x28),piVar9,bVar1);
        }
        else {
          piVar9[9] = (int)(pbVar7 + 1);
          *pbVar7 = bVar1;
        }
        iVar3 = iVar6;
      } while ((uVar5 != 0xffffffff) && (iVar6 = iVar6 + 1, iVar3 = iVar8, iVar6 < iVar8));
    }
    if (iVar3 == iVar8) goto LAB_001e25b8;
  }
  uVar10 = 1;
LAB_001e2688:
  if (uVar10 != 0) {
    iVar2 = *(int *)(*param_1 + -0xc) + (int)param_1;
    uVar10 = *(uint *)(iVar2 + 0x10) | uVar10;
    if (*(int *)(iVar2 + 0x34) == 0) {
      uVar10 = uVar10 | 1;
    }
    FUN_00161878(iVar2,uVar10,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0xc) = 0;
  return param_1;
}

