// rea decompile_all
// name: FUN_00485da4
// address: 0x485da4
// body: available
// range: 0x485da4-0x485f5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00485da4(int *param_1)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  short *psVar7;
  double *pdVar8;
  int *piVar9;
  int *piVar10;
  int local_14;
  int *local_10;
  double *local_c;
  code *local_8;
  
  piVar5 = param_1;
  piVar10 = param_1 + 9;
  piVar9 = param_1 + 0x67;
  piVar1 = param_1 + 0x31;
  param_1 = (int *)0x0;
  local_8 = (code *)0x0;
  local_14 = 0;
  if (0 < *piVar10) {
    local_10 = (int *)(*piVar9 + 0x2c);
    piVar10 = (int *)(*piVar1 + 0x24);
    do {
      iVar3 = *piVar10;
      if (iVar3 == 1) {
        local_8 = FUN_0048c1ed;
LAB_00485e5f:
        param_1 = (int *)0x0;
      }
      else {
        if (iVar3 == 2) {
          local_8 = FUN_0048c057;
          goto LAB_00485e5f;
        }
        if (iVar3 == 4) {
          local_8 = FUN_0048bd9c;
          goto LAB_00485e5f;
        }
        if (iVar3 == 8) {
          iVar3 = piVar5[0x11];
          if (iVar3 == 0) {
            local_8 = FUN_0048b917;
            goto LAB_00485e5f;
          }
          if (iVar3 == 1) {
            local_8 = FUN_0048b555;
            param_1 = (int *)0x1;
          }
          else {
            if (iVar3 != 2) {
              *(undefined4 *)(*piVar5 + 0x14) = 0x30;
              goto LAB_00485e01;
            }
            local_8 = FUN_0048b129;
            param_1 = (int *)0x2;
          }
        }
        else {
          *(undefined4 *)(*piVar5 + 0x14) = 7;
          *(int *)(*piVar5 + 0x18) = *piVar10;
LAB_00485e01:
          (**(code **)*piVar5)(piVar5);
        }
      }
      local_10[-10] = (int)local_8;
      if ((((char)piVar10[3] != '\0') && ((int *)*local_10 != param_1)) &&
         (iVar3 = piVar10[10], iVar3 != 0)) {
        *local_10 = (int)param_1;
        if (param_1 == (int *)0x0) {
          iVar4 = piVar10[0xb];
          iVar6 = 0;
          do {
            *(uint *)(iVar4 + iVar6 * 4) = (uint)*(ushort *)(iVar3 + iVar6 * 2);
            iVar6 = iVar6 + 1;
          } while (iVar6 < 0x40);
        }
        else if (param_1 == (int *)0x1) {
          piVar9 = (int *)piVar10[0xb];
          psVar7 = &DAT_00919078;
          do {
            *piVar9 = (int)((uint)*(ushort *)(iVar3 + -0x919078 + (int)psVar7) * (int)*psVar7 +
                           0x800) >> 0xc;
            psVar7 = psVar7 + 1;
            piVar9 = piVar9 + 1;
          } while ((int)psVar7 < 0x9190f8);
        }
        else if (param_1 == (int *)0x2) {
          iVar4 = piVar10[0xb];
          iVar6 = 0;
          local_c = (double *)&DAT_009190f8;
          do {
            pdVar8 = (double *)&DAT_009190f8;
            do {
              dVar2 = *pdVar8;
              pdVar8 = pdVar8 + 1;
              *(float *)(iVar4 + iVar6 * 4) =
                   (float)*(ushort *)(iVar3 + iVar6 * 2) * (float)*local_c * (float)dVar2;
              iVar6 = iVar6 + 1;
            } while ((int)pdVar8 < 0x919138);
            local_c = local_c + 1;
          } while ((int)local_c < 0x919138);
        }
        else {
          *(undefined4 *)(*piVar5 + 0x14) = 0x30;
          (**(code **)*piVar5)(piVar5);
        }
      }
      local_14 = local_14 + 1;
      local_10 = local_10 + 1;
      piVar10 = piVar10 + 0x15;
    } while (local_14 < piVar5[9]);
  }
  return;
}

