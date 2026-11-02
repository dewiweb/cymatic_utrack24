// rea decompile_all
// name: FUN_0015f434
// address: 0x15f434
// body: available
// range: 0x15f434-0x15f693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0015f434(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4,undefined4 param_5
                 ,int param_6)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  uVar2 = DAT_0015f694;
  iVar7 = *param_3;
  bVar9 = true;
  bVar1 = false;
  do {
    if (iVar7 == 0) {
LAB_0015f5b0:
      if (iVar7 == 0 && !bVar1) {
        if (((uint)param_3[2] < param_4) &&
           (puVar4 = (undefined4 *)FUN_001c6b14(0x1c,DAT_0015f698), puVar4 != (undefined4 *)0x0)) {
          puVar4[1] = 0;
          *puVar4 = uVar2;
          puVar4[2] = 0;
          iVar7 = FUN_0014cd58(puVar4 + 3);
          iVar3 = iVar7 + -0xc;
          *(undefined1 *)(iVar7 + 0xd) = 0;
          FUN_0014ccec();
          *(undefined1 *)(iVar7 + 0xc) = 0;
          FUN_0014cdc0(iVar7,param_5);
          *(undefined1 *)(iVar7 + 0xd) = 1;
          *(undefined1 *)(iVar7 + 0xc) = 5;
          if (param_3[1] == 0) {
            *(undefined4 *)(iVar7 + -8) = 0;
            *(undefined4 *)(iVar7 + -4) = 0;
            if (param_3[1] == 0) {
              *param_3 = iVar3;
            }
            else {
              *(int *)(iVar7 + -8) = param_3[1];
              *(int *)(param_3[1] + 8) = iVar3;
            }
            param_3[1] = iVar3;
          }
          else {
            *(int *)(iVar7 + -8) = param_3[1];
            *(undefined4 *)(iVar7 + -4) = 0;
            *(int *)(param_3[1] + 8) = iVar3;
            param_3[1] = iVar3;
          }
          param_3[2] = param_3[2] + 1;
        }
        else {
          bVar9 = false;
        }
      }
      return bVar9;
    }
    iVar3 = FUN_0014cbac(param_5,iVar7 + 0xc);
    if (iVar3 == 0) {
      bVar1 = true;
      *(undefined1 *)(iVar7 + 0x18) = 5;
      goto LAB_0015f5b0;
    }
    if (param_6 == iVar3) {
      puVar4 = (undefined4 *)FUN_001c6b14(0x1c,DAT_0015f698);
      bVar9 = puVar4 != (undefined4 *)0x0;
      if (bVar9) {
        puVar4[1] = 0;
        *puVar4 = uVar2;
        puVar4[2] = 0;
        iVar3 = FUN_0014cd58(puVar4 + 3);
        iVar8 = iVar3 + -0xc;
        *(undefined1 *)(iVar3 + 0xd) = 0;
        FUN_0014ccec();
        *(undefined1 *)(iVar3 + 0xc) = 0;
        FUN_0014cdc0(iVar3,param_5);
        *(undefined1 *)(iVar3 + 0xd) = 1;
        *(undefined1 *)(iVar3 + 0xc) = 5;
        if (*param_3 == iVar7) {
          *(undefined4 *)(iVar3 + -8) = 0;
          *(int *)(iVar3 + -4) = *param_3;
          *(int *)(*param_3 + 4) = iVar8;
          *param_3 = iVar8;
        }
        else {
          *(undefined4 *)(iVar3 + -8) = *(undefined4 *)(iVar7 + 4);
          *(int *)(iVar3 + -4) = iVar7;
          *(int *)(*(int *)(iVar7 + 4) + 8) = iVar8;
          *(int *)(iVar7 + 4) = iVar8;
        }
        param_3[2] = param_3[2] + 1;
        if (param_4 < (uint)param_3[2]) {
          piVar6 = (int *)*param_3;
          piVar5 = (int *)param_3[1];
          if (piVar6 == (int *)0x0 || piVar5 == (int *)0x0) {
            if (piVar5 == (int *)0x0) goto LAB_0015f5ac;
          }
          else {
            if (piVar6 == piVar5) {
              *param_3 = piVar6[2];
            }
            param_3[1] = piVar5[1];
            if (piVar5[1] != 0) {
              *(int *)(piVar5[1] + 8) = piVar5[2];
            }
            if (piVar5[2] != 0) {
              *(int *)(piVar5[2] + 4) = piVar5[1];
            }
            piVar5[1] = 0;
            piVar5[2] = 0;
            param_3[2] = param_3[2] + -1;
          }
          (**(code **)(*piVar5 + 4))();
        }
      }
LAB_0015f5ac:
      bVar1 = true;
      goto LAB_0015f5b0;
    }
    if (iVar7 == 0) {
      iVar7 = *param_3;
    }
    else {
      iVar7 = *(int *)(iVar7 + 8);
    }
  } while( true );
}

