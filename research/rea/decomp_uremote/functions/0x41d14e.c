// rea decompile_all
// name: FUN_0041d14e
// address: 0x41d14e
// body: available
// range: 0x41d14e-0x41d2fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041d14e(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int in_EDX;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  
  iVar1 = *(int *)(in_EAX + 0xc);
  uVar2 = *(uint *)(in_EAX + 4);
  if (param_1 != 0) {
    puVar7 = (uint *)(in_EDX + 0x10);
    do {
      uVar5 = *puVar7;
      if ((uVar5 & 0x10) == 0) {
        iVar3 = (int)(char)puVar7[1];
        if (((((iVar3 == param_3) || (iVar3 == -param_3)) ||
             (iVar3 = (int)*(char *)((int)puVar7 + 5), iVar3 == param_3)) || (iVar3 == -param_3)) &&
           (iVar3 != 0)) {
          if (iVar3 == param_3) {
            uVar8 = 0;
            if (uVar2 != 0) {
LAB_0041d1ba:
              piVar6 = *(int **)(iVar1 + uVar8 * 4);
              if ((param_2 <= (int)(puVar7[5] - *piVar6)) ||
                 (param_2 <= (int)-(puVar7[5] - *piVar6))) goto LAB_0041d1d1;
              uVar5 = uVar5 | 0x210;
LAB_0041d226:
              *puVar7 = uVar5;
              puVar7[4] = (uint)piVar6;
            }
          }
          else if ((iVar3 == -param_3) && (uVar8 = 0, uVar2 != 0)) {
            do {
              piVar6 = *(int **)(iVar1 + uVar8 * 4);
              iVar3 = (puVar7[5] - piVar6[1]) - *piVar6;
              if ((iVar3 < param_2) && (-iVar3 < param_2)) {
                uVar5 = uVar5 | 0x410;
                goto LAB_0041d226;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar2);
          }
        }
        else if ((uVar5 & 0x40) != 0) {
          if (param_3 == 2) {
            uVar4 = 0x80;
            uVar8 = 0x100;
          }
          else {
            uVar4 = 0x100;
            uVar8 = 0x80;
          }
          if ((uVar4 & uVar5) == 0) {
            if (((uVar8 & uVar5) != 0) && (uVar8 = 0, uVar2 != 0)) {
              do {
                piVar6 = *(int **)(iVar1 + uVar8 * 4);
                iVar3 = (puVar7[5] - piVar6[1]) - *piVar6;
                if ((iVar3 < param_2) && (-iVar3 < param_2)) {
                  uVar5 = uVar5 | 0x410;
                  goto LAB_0041d2b6;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar2);
            }
          }
          else {
            uVar8 = 0;
            if (uVar2 != 0) {
LAB_0041d25d:
              piVar6 = *(int **)(iVar1 + uVar8 * 4);
              if ((param_2 <= (int)(puVar7[5] - *piVar6)) ||
                 (param_2 <= (int)-(puVar7[5] - *piVar6))) goto LAB_0041d274;
              uVar5 = uVar5 | 0x210;
LAB_0041d2b6:
              *puVar7 = uVar5;
              puVar7[4] = (uint)piVar6;
            }
          }
LAB_0041d2bb:
          uVar5 = 0;
          if ((puVar7[4] == 0) && (uVar2 != 0)) {
            do {
              piVar6 = *(int **)(iVar1 + uVar5 * 4);
              if ((*piVar6 <= (int)puVar7[5]) && ((int)puVar7[5] <= piVar6[1] + *piVar6)) {
                puVar7[4] = (uint)piVar6;
                break;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar2);
          }
        }
      }
LAB_0041d2ea:
      param_1 = param_1 + -1;
      puVar7 = puVar7 + 0xc;
    } while (param_1 != 0);
  }
  return;
LAB_0041d1d1:
  uVar8 = uVar8 + 1;
  if (uVar2 <= uVar8) goto LAB_0041d2ea;
  goto LAB_0041d1ba;
LAB_0041d274:
  uVar8 = uVar8 + 1;
  if (uVar2 <= uVar8) goto LAB_0041d2bb;
  goto LAB_0041d25d;
}

