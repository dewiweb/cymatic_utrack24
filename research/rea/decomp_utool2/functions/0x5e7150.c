// rea decompile_all
// name: FUN_005e7150
// address: 0x5e7150
// body: available
// range: 0x5e7150-0x5e7434 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005e7150(int *param_1,float *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  undefined4 uStack_38;
  int local_1c;
  int *local_10;
  
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (0 < param_1[2]) {
    param_4 = param_4 / *param_1;
    uStack_38 = 0x5e7187;
    local_10 = (int *)(&stack0xffffffcc + param_4 * -8);
    (&uStack_38)[-param_4] = 0x5e7195;
    local_1c = 0;
    if (0 < param_4) {
      do {
        iVar11 = param_1[10];
        (&uStack_38)[param_4 * -2] = 0x5e71c1;
        iVar4 = FUN_005eaca0();
        if (iVar4 < 0) {
          uVar12 = 0;
          iVar4 = param_1[2];
LAB_005e721c:
          (&uStack_38)[param_4 * -2] = 0x5e7228;
          iVar5 = FUN_005eaca0();
          while (iVar5 < 0) {
            if (iVar11 < 2) {
              if (iVar5 < 0) {
                local_10[param_4] = -1;
                goto LAB_005e741e;
              }
              break;
            }
            iVar11 = iVar11 + -1;
            (&uStack_38)[param_4 * -2] = 0x5e7242;
            iVar5 = FUN_005eaca0();
          }
          (&uStack_38)[param_4 * -2] = 0x5e7257;
          uVar6 = FUN_005e75e0();
          iVar5 = iVar4 - uVar12;
          if (1 < iVar5) {
            do {
              uVar8 = iVar5 >> 1;
              uVar7 = (uint)(uVar6 < *(uint *)(param_1[5] + (uVar8 + uVar12) * 4));
              iVar4 = iVar4 - (-uVar7 & uVar8);
              uVar12 = uVar12 + (uVar7 - 1 & uVar8);
              iVar5 = iVar4 - uVar12;
            } while (1 < iVar5);
          }
          if (iVar11 < *(char *)(param_1[7] + uVar12)) {
            uVar12 = param_3[1] + iVar11;
            uVar7 = uVar12 & 7;
            iVar11 = (int)(uVar12 + ((int)uVar12 >> 0x1f & 7U)) >> 3;
            param_3[3] = param_3[3] + iVar11;
            *param_3 = *param_3 + iVar11;
            uVar12 = 0xffffffff;
          }
          else {
            uVar7 = param_3[1] + (int)*(char *)(param_1[7] + uVar12);
            iVar11 = (int)(uVar7 + ((int)uVar7 >> 0x1f & 7U)) >> 3;
            param_3[3] = param_3[3] + iVar11;
            *param_3 = *param_3 + iVar11;
            uVar7 = uVar7 & 7;
          }
        }
        else {
          uVar6 = *(uint *)(param_1[8] + iVar4 * 4);
          if ((int)uVar6 < 0) {
            uVar12 = (int)uVar6 >> 0xf & 0x7fff;
            iVar4 = param_1[2] - (uVar6 & 0x7fff);
            goto LAB_005e721c;
          }
          uVar12 = (int)*(char *)(param_1[7] + -1 + uVar6) + param_3[1];
          uVar7 = uVar12 & 7;
          iVar11 = (int)(uVar12 + ((int)uVar12 >> 0x1f & 7U)) >> 3;
          param_3[3] = param_3[3] + iVar11;
          *param_3 = *param_3 + iVar11;
          uVar12 = uVar6 - 1;
        }
        param_3[1] = uVar7;
        local_10[param_4] = uVar12;
        if (uVar12 == 0xffffffff) {
LAB_005e741e:
          __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
          return;
        }
        *local_10 = param_1[4] + *param_1 * uVar12 * 4;
        local_10 = local_10 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < param_4);
    }
    iVar11 = 0;
    local_10 = (int *)0x0;
    pfVar9 = param_2;
    if (0 < *param_1) {
      do {
        iVar4 = 0;
        if (3 < param_4) {
          piVar13 = (int *)(&stack0xffffffd4 + param_4 * -8);
          iVar5 = (param_4 - 4U >> 2) + 1;
          iVar4 = iVar5 * 4;
          pfVar10 = pfVar9;
          do {
            iVar1 = piVar13[-1];
            *pfVar10 = *(float *)(piVar13[-2] + iVar11 * 4) + *pfVar10;
            iVar2 = *piVar13;
            pfVar10[1] = *(float *)(iVar1 + iVar11 * 4) + pfVar10[1];
            iVar1 = piVar13[1];
            piVar13 = piVar13 + 4;
            pfVar10[2] = *(float *)(iVar2 + iVar11 * 4) + pfVar10[2];
            pfVar10[3] = *(float *)(iVar1 + iVar11 * 4) + pfVar10[3];
            pfVar10 = pfVar10 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (iVar4 < param_4) {
          pfVar10 = param_2 + (int)local_10 + iVar4;
          do {
            iVar5 = iVar4 * 4;
            iVar4 = iVar4 + 1;
            *pfVar10 = *(float *)(*(int *)(&stack0xffffffcc + iVar5 + param_4 * -8) + iVar11 * 4) +
                       *pfVar10;
            pfVar10 = pfVar10 + 1;
          } while (iVar4 < param_4);
        }
        iVar11 = iVar11 + 1;
        local_10 = (int *)((int)local_10 + param_4);
        pfVar9 = pfVar9 + param_4;
      } while (iVar11 < *param_1);
    }
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

