// rea decompile_all
// name: FUN_004834bc
// address: 0x4834bc
// body: available
// range: 0x4834bc-0x483644 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004834bc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint local_c;
  
  piVar5 = param_1;
  iVar1 = param_1[0x4e];
  iVar2 = param_1[0x57];
  iVar3 = param_1[0x4c];
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)param_1[6];
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1[6] + 4);
  if ((param_1[0x2f] != 0) && (*(int *)(iVar2 + 0x44) == 0)) {
    FUN_0048331c(*(undefined4 *)(iVar2 + 0x48));
  }
  iVar4 = *param_2;
  param_1 = (int *)0x0;
  iVar6 = piVar5[0x4b];
  if (iVar6 <= iVar3) {
    do {
      iVar8 = (int)*(short *)(iVar4 + (&DAT_005ff498)[iVar6] * 2);
      if (iVar8 == 0) {
LAB_0048353a:
        param_1 = (int *)((int)param_1 + 1);
      }
      else {
        if (iVar8 < 0) {
          uVar7 = -iVar8 >> ((byte)iVar1 & 0x1f);
          local_c = ~uVar7;
        }
        else {
          uVar7 = iVar8 >> ((byte)iVar1 & 0x1f);
          local_c = uVar7;
        }
        if (uVar7 == 0) goto LAB_0048353a;
        if (*(int *)(iVar2 + 0x38) != 0) {
          FUN_004832b5();
        }
        if (0xf < (int)param_1) {
          param_2 = (int *)(((int)param_1 - 0x10U >> 4) + 1);
          do {
            FUN_00483263();
            param_2 = (int *)((int)param_2 + -1);
          } while (param_2 != (int *)0x0);
        }
        iVar8 = (int)uVar7 >> 1;
        param_2 = (int *)0x1;
        if (iVar8 != 0) {
          do {
            param_2 = (int *)((int)param_2 + 1);
            iVar8 = iVar8 >> 1;
          } while (iVar8 != 0);
          if (10 < (int)param_2) {
            *(undefined4 *)(*piVar5 + 0x14) = 6;
            (**(code **)*piVar5)(piVar5);
          }
        }
        FUN_00483263();
        FUN_004831a5(local_c,param_2);
        param_1 = (int *)0x0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar3);
    if ((0 < (int)param_1) &&
       (*(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + 1, *(int *)(iVar2 + 0x38) == 0x7fff)) {
      FUN_004832b5();
    }
  }
  *(undefined4 *)piVar5[6] = *(undefined4 *)(iVar2 + 0x10);
  uVar7 = piVar5[6];
  *(undefined4 *)(uVar7 + 4) = *(undefined4 *)(iVar2 + 0x14);
  if (piVar5[0x2f] != 0) {
    if (*(int *)(iVar2 + 0x44) == 0) {
      uVar7 = *(int *)(iVar2 + 0x48) + 1U & 7;
      *(int *)(iVar2 + 0x44) = piVar5[0x2f];
      *(uint *)(iVar2 + 0x48) = uVar7;
    }
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + -1;
  }
  return CONCAT31((int3)(uVar7 >> 8),1);
}

