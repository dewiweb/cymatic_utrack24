// rea decompile_all
// name: FUN_0042db15
// address: 0x42db15
// body: available
// range: 0x42db15-0x42dcc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0042db15(int param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  ushort *puVar9;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  if ((*(int *)(param_1 + 0x2c8) != 0) ||
     (local_8 = FUN_0042d621(param_1,0), uVar6 = local_8, local_8 == 0)) {
    iVar4 = *(int *)(param_1 + 0x2c8);
    puVar1 = *(uint **)(iVar4 + 8);
    if (param_2 == *puVar1) {
      local_c = FUN_00411976(4,0,&local_8);
      uVar6 = local_8;
      if (local_8 == 0) {
        local_8 = 0;
        if (*puVar1 != 0) {
          piVar7 = (int *)(puVar1[3] + 8);
          iVar8 = local_c - (int)param_3;
          do {
            iVar3 = *param_3;
            if ((piVar7[1] < iVar3) || (iVar3 < piVar7[-1])) goto LAB_0042db63;
            if (iVar3 < *piVar7) {
              iVar3 = FUN_0040d230(0x10000);
              iVar3 = -iVar3;
LAB_0042dbe4:
              *(int *)(iVar8 + (int)param_3) = iVar3;
            }
            else {
              if (piVar7[1] != *piVar7) {
                iVar3 = FUN_0040d230(0x10000);
                goto LAB_0042dbe4;
              }
              *(undefined4 *)(iVar8 + (int)param_3) = 0;
            }
            local_8 = local_8 + 1;
            param_3 = param_3 + 1;
            piVar7 = piVar7 + 6;
          } while (local_8 < *puVar1);
        }
        if (*(char *)(iVar4 + 0x10) == '\0') {
          FUN_0042d1ec();
        }
        puVar9 = *(ushort **)(iVar4 + 0x14);
        if ((puVar9 != (ushort *)0x0) && (local_8 = 0, *puVar1 != 0)) {
          do {
            uVar6 = 1;
            if (1 < *puVar9) {
              piVar2 = *(int **)(puVar9 + 2);
              piVar7 = (int *)(local_c + local_8 * 4);
              piVar5 = piVar2;
              do {
                piVar5 = piVar5 + 2;
                if (*piVar7 < *piVar5) {
                  FUN_0040d230(0x10000,piVar2[uVar6 * 2 + 1] - piVar2[uVar6 * 2 + -1]);
                  iVar4 = FUN_0040d230();
                  *piVar7 = iVar4 + piVar2[uVar6 * 2 + -1];
                  break;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < *puVar9);
            }
            local_8 = local_8 + 1;
            puVar9 = puVar9 + 4;
          } while (local_8 < *puVar1);
        }
        uVar6 = FUN_0042d9c7(param_1,param_2,local_c);
      }
    }
    else {
LAB_0042db63:
      uVar6 = 6;
    }
  }
  FUN_00411a5c(local_c);
  return uVar6;
}

