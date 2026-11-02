// rea decompile_all
// name: FUN_00404548
// address: 0x404548
// body: available
// range: 0x404548-0x404888 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00404548(int param_1,int param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 local_24;
  int local_1c;
  byte *local_14;
  int local_10;
  
  param_1 = param_2 * 0x1c + 0x2c + param_1;
  pbVar1 = *(byte **)(param_1 + 0x14);
  pbVar10 = pbVar1 + *(int *)(param_1 + 0xc) * 0x30;
  local_14 = (byte *)0x0;
  local_24 = 0;
  local_10 = 0;
  bVar4 = false;
  local_1c = 0;
  pbVar6 = pbVar1;
  if (pbVar1 < pbVar10) {
    do {
      if ((pbVar6[0xc] & 4) == 0) {
        iVar5 = *(int *)(pbVar6 + 0x14);
        pbVar7 = *(byte **)(pbVar6 + 0x18);
        pbVar9 = pbVar6;
        if (((iVar5 != 0) ||
            ((pbVar7 != (byte *)0x0 &&
             (iVar5 = *(int *)(pbVar7 + 0x14), pbVar9 = pbVar7, pbVar7 = pbVar6, iVar5 != 0)))) &&
           (pbVar9 != (byte *)0x0)) {
          uVar2 = *(undefined4 *)(iVar5 + 8);
          pbVar9[0xc] = pbVar9[0xc] | 4;
          *(undefined4 *)(pbVar9 + 8) = uVar2;
          if ((pbVar7 != (byte *)0x0) && (*(int *)(pbVar7 + 0x14) == 0)) {
            FUN_004043ae(param_2);
            pbVar7[0xc] = pbVar7[0xc] | 4;
          }
          if (local_14 == (byte *)0x0) {
            local_14 = pbVar6;
          }
        }
      }
      pbVar6 = pbVar6 + 0x30;
    } while (pbVar6 < pbVar10);
    if (pbVar1 < pbVar10) {
      pbVar6 = pbVar1 + 0xc;
      do {
        if ((*pbVar6 & 4) == 0) {
          pbVar7 = *(byte **)(pbVar6 + 0xc);
          if ((pbVar7 == (byte *)0x0) ||
             ((bVar4 && ((*(int *)(pbVar6 + -4) < local_1c + 0x40 ||
                         (*(int *)(pbVar7 + 8) < local_1c + 0x40)))))) {
            local_10 = local_10 + 1;
          }
          else if (*(int *)(pbVar7 + 0x14) == 0) {
            if (pbVar7 < pbVar6 + -0xc) {
              FUN_004043ae(param_2);
              *pbVar6 = *pbVar6 | 4;
              local_1c = *(int *)(pbVar6 + -4);
            }
            else {
              if ((param_2 == 1) || (local_14 != (byte *)0x0)) {
                FUN_004043d2(pbVar6 + -0xc,pbVar7,local_24,param_2);
              }
              else {
                local_24 = FUN_004043d2(pbVar6 + -0xc,pbVar7,0,0);
              }
              *pbVar6 = *pbVar6 | 4;
              local_14 = pbVar6 + -0xc;
              pbVar7[0xc] = pbVar7[0xc] | 4;
              local_1c = *(int *)(pbVar7 + 8);
            }
            bVar4 = true;
          }
          else {
            FUN_004043ae(param_2);
            *pbVar6 = *pbVar6 | 4;
          }
        }
        pbVar7 = pbVar6 + 0x24;
        pbVar6 = pbVar6 + 0x30;
      } while (pbVar7 < pbVar10);
    }
  }
  iVar5 = ((int)pbVar10 - (int)pbVar1) / 0x30;
  if (param_2 == 0) {
    if (iVar5 == 6) {
      pbVar6 = pbVar1 + 0x60;
      pbVar7 = pbVar1 + 0xc0;
      pbVar9 = pbVar1;
    }
    else {
      if (iVar5 != 0xc) goto LAB_00404787;
      pbVar6 = pbVar1 + 0xf0;
      pbVar7 = pbVar1 + 0x1b0;
      pbVar9 = pbVar1 + 0x30;
    }
    param_2 = (*(int *)(pbVar6 + 4) * 2 - *(int *)(pbVar7 + 4)) - *(int *)(pbVar9 + 4);
    if (param_2 < 0) {
      param_2 = -param_2;
    }
    if ((((*(byte **)(pbVar9 + 0x18) == pbVar9 + 0x30) &&
         (*(byte **)(pbVar6 + 0x18) == pbVar6 + 0x30)) &&
        (pbVar3 = *(byte **)(pbVar7 + 0x18), pbVar3 == pbVar7 + 0x30)) && (param_2 < 8)) {
      iVar8 = *(int *)(pbVar9 + 8) + *(int *)(pbVar6 + 8) * -2 + *(int *)(pbVar7 + 8);
      *(int *)(pbVar7 + 8) = *(int *)(pbVar7 + 8) - iVar8;
      if (pbVar3 != (byte *)0x0) {
        *(int *)(pbVar3 + 8) = *(int *)(pbVar3 + 8) - iVar8;
      }
      if (iVar5 == 0xc) {
        *(int *)(pbVar1 + 0x188) = *(int *)(pbVar1 + 0x188) - iVar8;
        *(int *)(pbVar1 + 0x218) = *(int *)(pbVar1 + 0x218) - iVar8;
      }
      pbVar7[0xc] = pbVar7[0xc] | 4;
      if (*(int *)(pbVar7 + 0x18) != 0) {
        pbVar6 = (byte *)(*(int *)(pbVar7 + 0x18) + 0xc);
        *pbVar6 = *pbVar6 | 4;
      }
    }
  }
LAB_00404787:
  if (local_10 != 0) {
    if (pbVar1 < pbVar10) {
      pbVar6 = pbVar1 + 0xc;
      iVar5 = (((int)pbVar10 - (int)pbVar1) - 1U) / 0x30 + 1;
      do {
        if (((*pbVar6 & 4) == 0) && (*(int *)(pbVar6 + 0x10) != 0)) {
          FUN_004043c5();
          *pbVar6 = *pbVar6 | 4;
          local_10 = local_10 + -1;
        }
        pbVar6 = pbVar6 + 0x30;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if ((local_10 != 0) && (pbVar1 < pbVar10)) {
      pbVar6 = pbVar1 + -0x30;
      do {
        pbVar7 = pbVar6;
        if ((pbVar6[0x3c] & 4) == 0) {
          for (; (pbVar1 <= pbVar7 && ((pbVar7[0xc] & 4) == 0)); pbVar7 = pbVar7 + -0x30) {
          }
          for (pbVar9 = pbVar6 + 0x60; (pbVar9 < pbVar10 && ((pbVar9[0xc] & 4) == 0));
              pbVar9 = pbVar9 + 0x30) {
          }
          if (pbVar7 < pbVar1) {
            if (pbVar9 < pbVar10) {
LAB_00404833:
              FUN_004043c5();
            }
          }
          else {
            if (pbVar10 <= pbVar9) goto LAB_00404833;
            if (*(short *)pbVar9 == *(short *)pbVar7) {
              iVar5 = *(int *)(pbVar7 + 8);
            }
            else {
              iVar8 = *(int *)(pbVar7 + 8);
              iVar5 = FUN_0040d230(*(int *)(pbVar9 + 8) - iVar8);
              iVar5 = iVar5 + iVar8;
            }
            *(int *)(pbVar6 + 0x38) = iVar5;
          }
        }
        pbVar7 = pbVar6 + 0x60;
        pbVar6 = pbVar6 + 0x30;
      } while (pbVar7 < pbVar10);
    }
  }
  return;
}

