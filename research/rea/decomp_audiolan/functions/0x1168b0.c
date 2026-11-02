// rea decompile_all
// name: FUN_001168b0
// address: 0x1168b0
// body: available
// range: 0x1168b0-0x116c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001168b0(int param_1,int *param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  
  iVar9 = 0;
  FUN_001179e0();
  if (((*(byte *)(param_1 + 0xf6) & 8) == 0) &&
     (*(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x7c) + 0x38) != 0)) {
    iVar9 = 0x1f;
    goto LAB_00116c0c;
  }
  iVar3 = FUN_00160190(param_1 + 0x40);
  if (iVar3 == 0) {
    iVar9 = 0x15;
    goto LAB_00116c0c;
  }
  if (1 < *(ushort *)(param_1 + 0x50)) {
    (**(code **)(*(int *)((int)param_2 + *(int *)(*param_2 + -0x38)) + 0xc))
              (*(int *)(*param_2 + -0x38) + (int)param_2);
    iVar3 = FUN_00123034();
    if (iVar3 == 0) {
      iVar9 = 0x24;
      goto LAB_00116c0c;
    }
  }
  iVar3 = FUN_00132a84(param_1 + 0x40);
  if ((iVar3 == 0) || (iVar3 = FUN_00132a84(param_1 + 0x54), iVar3 == 0)) {
    iVar9 = 0x1e;
    bVar2 = *(byte *)(param_1 + 0xf6) & 0xfb;
LAB_00116c08:
    *(byte *)(param_1 + 0xf6) = bVar2;
  }
  else {
    if (((*(byte *)(param_1 + 0xf6) & 1) != 0) &&
       (iVar9 = FUN_00116394(param_1), iVar9 != 0 && iVar9 != 0xd)) goto LAB_00116c0c;
    if (((*(byte *)(param_1 + 0xf6) & 2) != 0) &&
       ((*(short *)(param_1 + 0xf0) == 0 && ((*(byte *)(param_1 + 0xf6) & 0x20) != 0)))) {
      uVar10 = FUN_00117fd8(*(int *)(param_1 + 0x24) + 0x220);
      uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
      FUN_000eacec(param_1 + 0x88,uVar6,(int)uVar10,uVar6);
    }
    piVar4 = (int *)(**(code **)(*(int *)((int)param_2 + *(int *)(*param_2 + -0x38)) + 0x24))
                              (*(int *)(*param_2 + -0x38) + (int)param_2);
    iVar3 = (**(code **)(*piVar4 + 0x18))(piVar4);
    if ((iVar3 == 0x8204) || (iVar3 = (**(code **)(*piVar4 + 0x18))(piVar4), iVar3 == 0x8203)) {
      bVar1 = true;
      if (*(char *)(param_1 + 0xf4) == '\0') goto LAB_00116a30;
    }
    else {
      bVar1 = false;
LAB_00116a30:
      uVar5 = FUN_00119118(*(int *)(param_1 + 0x24) + 0x658,param_1 + 0x88,piVar4);
      if ((uVar5 & 0x80) != 0) {
        iVar3 = *(int *)(param_1 + 0x24);
        uVar7 = *(uint *)(iVar3 + 0x5d8);
        *(uint *)(iVar3 + 0x5d8) = uVar7 + 1;
        *(uint *)(iVar3 + 0x5dc) = *(int *)(iVar3 + 0x5dc) + (uint)(0xfffffffe < uVar7);
        iVar3 = *(int *)(param_1 + 0x24);
        uVar7 = *(uint *)(param_1 + 0x90);
        uVar8 = *(uint *)(iVar3 + 0x5e0);
        *(uint *)(iVar3 + 0x5e0) = uVar8 + uVar7;
        *(uint *)(iVar3 + 0x5e4) = *(int *)(iVar3 + 0x5e4) + (uint)CARRY4(uVar8,uVar7);
joined_r0x00116a90:
        if (uVar5 == 0x81) {
          *(byte *)(param_1 + 0xf6) = *(byte *)(param_1 + 0xf6) & 0xfb;
        }
        if ((iVar9 != 0) ||
           (((param_3 == 0 && ((*(ushort *)(param_1 + 0xd4) & 0xff00) != 0x5b00)) && (!bVar1))))
        goto LAB_00116c0c;
        uVar5 = FUN_00149df0(*(int *)(param_1 + 0x24) + 0x4a0,param_1 + 0x88,0);
        if (uVar5 == 0) {
          iVar9 = 1;
        }
        else {
          if (bVar1) {
            uVar5 = (uint)*(ushort *)(param_1 + 0x50);
          }
          if ((bVar1 && uVar5 != 0) && (uVar5 = FUN_00160078(param_1 + 0x40,0), (uVar5 & 1) == 0)) {
            *(undefined1 *)(param_1 + 0xf4) = 2;
            *(char *)(param_1 + 0xf5) = *(char *)(param_1 + 0x9a) + *(char *)(param_1 + 0xf5);
          }
        }
        FUN_000ee880(param_1 + 0x88);
        bVar2 = *(byte *)(param_1 + 0xf6) | 1;
        goto LAB_00116c08;
      }
      if (uVar5 == 1) {
        iVar3 = FUN_00149df0(*(int *)(param_1 + 0x24) + 0x4a0,param_1 + 0x88,0);
        FUN_000ee880(param_1 + 0x88);
        if (iVar3 == 0) {
          iVar9 = 1;
        }
        *(byte *)(param_1 + 0xf6) = *(byte *)(param_1 + 0xf6) | 1;
        if (((iVar3 == 0) || (iVar9 != 0 && iVar9 != 0xd)) ||
           (iVar9 = FUN_00116394(param_1), iVar9 != 0 && iVar9 != 0xd)) goto LAB_00116c0c;
        uVar5 = FUN_00119118(*(int *)(param_1 + 0x24) + 0x658,param_1 + 0x88,piVar4);
        if ((uVar5 & 0x80) != 0) {
          iVar3 = *(int *)(param_1 + 0x24);
          uVar7 = *(uint *)(iVar3 + 0x5d8);
          *(uint *)(iVar3 + 0x5d8) = uVar7 + 1;
          *(uint *)(iVar3 + 0x5dc) = *(int *)(iVar3 + 0x5dc) + (uint)(0xfffffffe < uVar7);
          iVar3 = *(int *)(param_1 + 0x24);
          uVar7 = *(uint *)(param_1 + 0x90);
          uVar8 = *(uint *)(iVar3 + 0x5e0);
          *(uint *)(iVar3 + 0x5e0) = uVar8 + uVar7;
          *(uint *)(iVar3 + 0x5e4) = *(int *)(iVar3 + 0x5e4) + (uint)CARRY4(uVar8,uVar7);
          goto joined_r0x00116a90;
        }
      }
    }
    iVar9 = 0x1e;
  }
LAB_00116c0c:
  FUN_001179d0(param_1);
  return iVar9;
}

