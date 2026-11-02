// rea decompile_all
// name: FUN_004adb43
// address: 0x4adb43
// body: available
// range: 0x4adb43-0x4add5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004adb43(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *in_EAX;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  byte *pbVar10;
  int local_14;
  int local_10;
  int local_8;
  
  local_14 = 0;
  piVar7 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_10 = *piVar7 + -1;
      if (0 < local_10) {
        iVar4 = param_1[2];
        local_8 = 0;
        puVar9 = (uint *)(piVar7 + 1);
        uVar6 = *puVar9;
        in_EAX[0xd] = ((int *)in_EAX[0xc])[2] * (iVar4 + local_14) + *(int *)in_EAX[0xc];
        if ((char)in_EAX[10] == '\0') {
          if (*(char *)((int)in_EAX + 0x29) == '\0') {
            iVar4 = FUN_00470221(((double)(iVar4 + local_14) - *(double *)(in_EAX + 8)) *
                                 *(double *)(in_EAX + 6));
            in_EAX[3] = iVar4;
          }
        }
        else {
          iVar4 = FUN_00470645(0,in_EAX[1]);
          in_EAX[2] = *(int *)(*in_EAX + iVar4 * 4);
        }
        while( true ) {
          local_10 = local_10 + -1;
          iVar4 = (int)uVar6 >> 8;
          if (local_10 < 0) break;
          uVar2 = puVar9[1];
          puVar9 = puVar9 + 2;
          uVar3 = *puVar9;
          if ((int)uVar3 >> 8 == iVar4) {
            local_8 = local_8 + (uVar3 - uVar6) * uVar2;
            uVar6 = uVar3;
          }
          else {
            iVar8 = (int)((0x100 - (uVar6 & 0xff)) * uVar2 + local_8) >> 8;
            if (0 < iVar8) {
              if (iVar8 < 0xff) {
                pbVar10 = (byte *)(*(int *)(in_EAX[0xc] + 0xc) * iVar4 + in_EAX[0xd]);
                iVar5 = FUN_004754e8();
                uVar6 = (uint)*(byte *)(iVar5 + 3) * (iVar8 + 1);
                *pbVar10 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar10 >> 8) + (char)(uVar6 >> 8)
                ;
              }
              else {
                pbVar10 = (byte *)(*(int *)(in_EAX[0xc] + 0xc) * iVar4 + in_EAX[0xd]);
                iVar8 = FUN_004754e8();
                *pbVar10 = (char)((0x100 - (uint)*(byte *)(iVar8 + 3)) * (uint)*pbVar10 >> 8) +
                           *(byte *)(iVar8 + 3);
              }
            }
            if (0 < (int)uVar2) {
              iVar8 = ((int)uVar3 >> 8) - (iVar4 + 1);
              if (0 < iVar8) {
                FUN_004ba840(iVar4 + 1,iVar8);
              }
            }
            local_8 = (uVar3 & 0xff) * uVar2;
            uVar6 = uVar3;
          }
        }
        local_8 = local_8 >> 8;
        if (0 < local_8) {
          pbVar10 = (byte *)(*(int *)(in_EAX[0xc] + 0xc) * iVar4 + in_EAX[0xd]);
          if (local_8 < 0xff) {
            iVar4 = FUN_004754e8();
            uVar6 = (uint)*(byte *)(iVar4 + 3) * (local_8 + 1) >> 8;
          }
          else {
            iVar4 = FUN_004754e8();
            uVar6 = (uint)*(byte *)(iVar4 + 3);
          }
          *pbVar10 = (char)((0x100 - uVar6) * (uint)*pbVar10 >> 8) + (char)uVar6;
        }
      }
      local_14 = local_14 + 1;
      piVar7 = piVar7 + iVar1;
    } while (local_14 < (int)param_1[4]);
  }
  return;
}

