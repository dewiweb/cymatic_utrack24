// rea decompile_all
// name: FUN_005da670
// address: 0x5da670
// body: available
// range: 0x5da670-0x5da99f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005da670(int *param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_ECX;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int local_41c;
  int local_418;
  int local_408 [128];
  int local_208 [128];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)*param_1;
  iVar2 = piVar1[3];
  iVar3 = piVar1[2];
  iVar4 = *(int *)param_1[4];
  iVar6 = (piVar1[1] - *piVar1) / iVar3;
  _memset(local_408,0,0x200);
  _memset(local_208,0,0x200);
  local_418 = 0;
  if (0 < param_1[2]) {
    do {
      iVar12 = 0;
      if (0 < iVar6) {
        do {
          if ((local_418 == 0) && (local_41c = 0, 0 < param_3)) {
            do {
              iVar9 = 1;
              piVar11 = (int *)(param_4[local_41c] + iVar12 * 4);
              iVar7 = *piVar11;
              if (1 < iVar4) {
                do {
                  piVar11 = piVar11 + 1;
                  iVar7 = iVar7 * iVar2;
                  if (iVar9 + iVar12 < iVar6) {
                    iVar7 = iVar7 + *piVar11;
                  }
                  iVar9 = iVar9 + 1;
                } while (iVar9 < iVar4);
              }
              iVar9 = param_1[4];
              if (iVar7 < *(int *)(iVar9 + 4)) {
                if ((iVar7 < 0) || (*(int *)(*(int *)(iVar9 + 0xc) + 4) <= iVar7)) {
                  param_1[9] = param_1[9];
                }
                else {
                  iVar7 = iVar7 * 4;
                  FUN_005eae90(in_ECX,*(undefined4 *)(*(int *)(iVar9 + 0x14) + iVar7),
                               *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0xc) + 8) + iVar7));
                  param_1[9] = param_1[9] + *(int *)(iVar7 + *(int *)(*(int *)(iVar9 + 0xc) + 8));
                }
              }
              local_41c = local_41c + 1;
            } while (local_41c < param_3);
          }
          local_41c = 0;
          if (0 < iVar4) {
            iVar7 = iVar12 * iVar3;
            do {
              if (iVar6 <= iVar12) goto LAB_005da97d;
              iVar9 = *piVar1;
              if (0 < param_3) {
                bVar5 = (byte)local_418 & 0x1f;
                iVar10 = param_3;
                piVar11 = param_4;
                do {
                  if (local_418 == 0) {
                    local_208[*(int *)(*piVar11 + iVar12 * 4)] =
                         local_208[*(int *)(*piVar11 + iVar12 * 4)] + iVar3;
                  }
                  iVar8 = *(int *)(*piVar11 + iVar12 * 4);
                  if (((piVar1[iVar8 + 6] & (1 << bVar5 | 1U >> 0x20 - bVar5)) != 0) &&
                     (iVar8 = *(int *)(*(int *)(param_1[5] + iVar8 * 4) + local_418 * 4), iVar8 != 0
                     )) {
                    iVar8 = FUN_005dad80(in_ECX,*(int *)((param_2 - (int)param_4) + (int)piVar11) +
                                                (iVar9 + iVar7) * 4,iVar3,iVar8,0);
                    param_1[8] = param_1[8] + iVar8;
                    local_408[*(int *)(*piVar11 + iVar12 * 4)] =
                         local_408[*(int *)(*piVar11 + iVar12 * 4)] + iVar8;
                  }
                  piVar11 = piVar11 + 1;
                  iVar10 = iVar10 + -1;
                } while (iVar10 != 0);
              }
              iVar7 = iVar7 + iVar3;
              local_41c = local_41c + 1;
              iVar12 = iVar12 + 1;
            } while (local_41c < iVar4);
          }
        } while (iVar12 < iVar6);
      }
LAB_005da97d:
      local_418 = local_418 + 1;
    } while (local_418 < param_1[2]);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

