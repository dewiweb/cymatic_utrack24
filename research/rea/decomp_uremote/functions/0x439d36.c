// rea decompile_all
// name: FUN_00439d36
// address: 0x439d36
// body: available
// range: 0x439d36-0x43a01f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00439d36(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int extraout_ECX;
  uint uVar7;
  bool bVar8;
  float10 fVar9;
  float local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de2c5;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar2 = FUN_00467ec4(DAT_00955fd4 ^ (uint)&stack0xffffffd0);
  do {
    if (uVar2 <= *(uint *)(param_1 + 0x84)) goto LAB_00439f16;
    if (*(int *)(param_1 + 0x88) == 0) {
      FUN_0043a7e5();
      FUN_0043a82a();
    }
    if (*(uint *)(param_1 + 0x88) < *(uint *)(param_1 + 0x94)) {
      piVar6 = *(int **)(*(int *)(param_1 + 0x8c) + *(uint *)(param_1 + 0x88) * 4);
    }
    else {
      piVar6 = (int *)0x0;
    }
    if (piVar6 == (int *)0x0) goto LAB_00439f16;
    iVar3 = *piVar6;
    if (-1 < iVar3) {
      if (iVar3 < 2) {
        iVar3 = FUN_005af82d();
        uVar4 = 0;
        local_c = 0;
        if (iVar3 != 0) {
          uVar4 = FUN_0043a35c(iVar3,piVar6,param_1);
        }
        local_c = 0xffffffff;
        piVar6 = (int *)(param_1 + 0x9c);
        if (*(int *)(param_1 + 0xa0) < *(int *)(param_1 + 0xa4) + 1) {
          FUN_004f8197();
        }
      }
      else {
        if (4 < iVar3) {
          if (iVar3 == 5) {
            *(uint *)(param_1 + 0x84) = piVar6[0xc] + uVar2;
          }
          else if (iVar3 == 6) {
            FUN_00474839();
            ExceptionList = local_14;
            return;
          }
          goto LAB_00439ee9;
        }
        uVar7 = 0;
        if (0 < *(int *)(param_1 + 0xa4)) {
          uVar1 = *(uint *)(param_1 + 0xa4);
          bVar8 = uVar1 != 0;
          do {
            if (bVar8) {
              piVar5 = *(int **)(*(int *)(param_1 + 0x9c) + uVar7 * 4);
            }
            else {
              piVar5 = (int *)0x0;
            }
            if (*(int *)(*piVar5 + 4) == piVar6[1]) break;
            uVar7 = uVar7 + 1;
            bVar8 = uVar7 < uVar1;
          } while ((int)uVar7 < (int)uVar1);
        }
        iVar3 = FUN_005af82d();
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0043a677();
        }
        piVar6 = (int *)(param_1 + 0xa8);
        if (*(int *)(param_1 + 0xac) < *(int *)(param_1 + 0xb0) + 1) {
          FUN_004f8197();
        }
      }
      iVar3 = piVar6[2];
      piVar6[2] = iVar3 + 1;
      *(undefined4 *)(*piVar6 + iVar3 * 4) = uVar4;
    }
LAB_00439ee9:
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  } while (*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0x94));
  *(undefined4 *)(param_1 + 0x88) = 0;
LAB_00439f16:
  uVar7 = 0;
  if (0 < *(int *)(param_1 + 0xb0)) {
    do {
      if (uVar7 < *(uint *)(param_1 + 0xb0)) {
        piVar6 = *(int **)(*(int *)(param_1 + 0xa8) + uVar7 * 4);
      }
      else {
        piVar6 = (int *)0x0;
      }
      local_24 = (float)(int)(uVar2 - piVar6[2]);
      if ((int)(uVar2 - piVar6[2]) < 0) {
        local_24 = local_24 + 4.2949673e+09;
      }
      local_24 = local_24 / (float)((int *)*piVar6)[0xc];
      bVar8 = local_24 <= 1.0;
      if (!bVar8) {
        local_24 = 1.0;
      }
      iVar3 = *(int *)*piVar6;
      if (iVar3 == 2) {
LAB_00439fdf:
        *(float *)(piVar6[1] + 0x10) = local_24;
      }
      else {
        if (iVar3 == 3) {
          local_24 = 1.0 - local_24;
          goto LAB_00439fdf;
        }
        if (iVar3 == 4) {
          fVar9 = (float10)FUN_0043a746((double)local_24);
          *(float *)(*(int *)(extraout_ECX + 4) + 8) =
               (*(float *)(extraout_ECX + 0x14) - *(float *)(extraout_ECX + 0xc)) * (float)fVar9 +
               *(float *)(extraout_ECX + 0xc);
          *(float *)(*(int *)(extraout_ECX + 4) + 0xc) =
               (*(float *)(extraout_ECX + 0x18) - *(float *)(extraout_ECX + 0x10)) * (float)fVar9 +
               *(float *)(extraout_ECX + 0x10);
        }
      }
      if (bVar8) {
        uVar7 = uVar7 + 1;
      }
      else {
        FUN_0043a85c();
      }
    } while ((int)uVar7 < *(int *)(param_1 + 0xb0));
  }
  FUN_004c1613();
  ExceptionList = local_14;
  return;
}

