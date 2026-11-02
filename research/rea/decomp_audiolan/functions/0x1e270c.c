// rea decompile_all
// name: FUN_001e270c
// address: 0x1e270c
// body: available
// range: 0x1e270c-0x1e2a4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001e270c(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_38 [12];
  int *piStack_2c;
  undefined4 uStack_28;
  
  iVar7 = *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0xc);
  uVar9 = 0;
  piStack_2c = param_1;
  uStack_28 = param_2;
  if (*(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x38) != 0) {
    piVar8 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x38);
    if ((*(int *)((int)piVar8 + *(int *)(*piVar8 + -0xc) + 0x34) != 0) &&
       (iVar2 = (**(code **)(**(int **)((int)piVar8 + *(int *)(*piVar8 + -0xc) + 0x34) + 0x34))(),
       iVar2 == -1)) {
      iVar2 = *(int *)(*piVar8 + -0xc) + (int)piVar8;
      FUN_00161878(iVar2,*(uint *)(iVar2 + 0x10) | 1,0xffffffff);
    }
  }
  if (*DAT_001e2a4c != '\0') {
    iVar2 = *(int *)(*param_1 + -0xc) + (int)param_1;
    uVar4 = DAT_001e2a54;
    if (iVar2 != *(int *)(DAT_001e2a50 + 4)) {
      bVar11 = iVar2 != *(int *)(DAT_001e2a50 + 8);
      iVar3 = DAT_001e2a50;
      if (bVar11) {
        iVar3 = *(int *)(DAT_001e2a50 + 0xc);
      }
      uVar4 = DAT_001e2a58;
      if (bVar11 && iVar2 != iVar3) goto LAB_001e2808;
    }
    FUN_000156a4(uVar4);
  }
LAB_001e2808:
  piVar8 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x34);
  if ((piVar8 != (int *)0x0) && ((piVar8[1] & 1U) != 0)) {
    (**(code **)(*piVar8 + 0x10))(auStack_38,piVar8,0,2,8);
  }
  if (*(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x10) != 0) goto LAB_001e29d8;
  iVar7 = iVar7 + -1;
  uVar10 = *(uint *)((int)param_1 + *(int *)(*param_1 + -0xc) + 4) & 0xb0;
  if (uVar10 == 0x20) {
LAB_001e2918:
    piVar8 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x34);
    iVar2 = (**(code **)(*piVar8 + 0x30))(piVar8,&uStack_28,1);
    if (iVar2 == 1) {
      if (uVar10 != 0x20) goto LAB_001e29d8;
      iVar3 = 0;
      iVar2 = iVar7;
      if (0 < iVar7) {
        do {
          piVar8 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x34);
          bVar1 = *(byte *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x3c);
          uVar10 = (uint)bVar1;
          if (((piVar8[1] & 8U) == 0) || (pbVar6 = (byte *)piVar8[9], (byte *)piVar8[10] == pbVar6))
          {
            uVar10 = (**(code **)(*piVar8 + 0x28))();
          }
          else {
            piVar8[9] = (int)(pbVar6 + 1);
            *pbVar6 = bVar1;
          }
          iVar2 = iVar3;
        } while ((uVar10 != 0xffffffff) && (iVar3 = iVar3 + 1, iVar2 = iVar7, iVar3 < iVar7));
      }
      if (iVar2 == iVar7) goto LAB_001e29d8;
    }
  }
  else {
    iVar3 = 0;
    iVar2 = iVar7;
    if (0 < iVar7) {
      do {
        piVar8 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x34);
        bVar1 = *(byte *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x3c);
        uVar5 = (uint)bVar1;
        if (((piVar8[1] & 8U) == 0) || (pbVar6 = (byte *)piVar8[9], (byte *)piVar8[10] == pbVar6)) {
          uVar5 = (**(code **)(*piVar8 + 0x28))
                            (piVar8,uVar5,*(code **)(*piVar8 + 0x28),piVar8,bVar1);
        }
        else {
          piVar8[9] = (int)(pbVar6 + 1);
          *pbVar6 = bVar1;
        }
        iVar2 = iVar3;
      } while ((uVar5 != 0xffffffff) && (iVar3 = iVar3 + 1, iVar2 = iVar7, iVar3 < iVar7));
    }
    if (iVar2 == iVar7) goto LAB_001e2918;
  }
  uVar9 = 1;
LAB_001e29d8:
  if (uVar9 != 0) {
    iVar7 = *(int *)(*param_1 + -0xc) + (int)param_1;
    uVar9 = *(uint *)(iVar7 + 0x10) | uVar9;
    if (*(int *)(iVar7 + 0x34) == 0) {
      uVar9 = uVar9 | 1;
    }
    FUN_00161878(iVar7,uVar9,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0xc) = 0;
  return param_1;
}

