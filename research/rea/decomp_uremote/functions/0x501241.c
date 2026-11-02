// rea decompile_all
// name: FUN_00501241
// address: 0x501241
// body: available
// range: 0x501241-0x501377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00501241(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int in_EAX;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int local_14;
  
  local_14 = 0;
  piVar8 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      iVar2 = *piVar8;
      if (0 < iVar2 + -1) {
        puVar9 = (uint *)(piVar8 + 1);
        uVar3 = *puVar9;
        iVar7 = 0;
        *(int *)(in_EAX + 8) = param_1[2] + local_14;
        for (iVar2 = iVar2 + -2; iVar4 = (int)uVar3 >> 8, -1 < iVar2; iVar2 = iVar2 + -1) {
          uVar5 = puVar9[1];
          puVar9 = puVar9 + 2;
          uVar6 = *puVar9;
          if ((int)uVar6 >> 8 == iVar4) {
            iVar7 = iVar7 + (uVar6 - uVar3) * uVar5;
          }
          else {
            iVar7 = (int)((0x100 - (uVar3 & 0xff)) * uVar5 + iVar7) >> 8;
            if (0 < iVar7) {
              if (iVar7 < 0xff) {
                FUN_005016b3(iVar4);
              }
              else {
                FUN_004fb67f(1,*(undefined4 *)(in_EAX + 4));
              }
            }
            if (0 < (int)uVar5) {
              iVar7 = ((int)uVar6 >> 8) - (iVar4 + 1);
              if (0 < iVar7) {
                FUN_005016fc(iVar4 + 1,iVar7);
              }
            }
            iVar7 = (uVar6 & 0xff) * uVar5;
          }
          uVar3 = uVar6;
        }
        if (0 < iVar7 >> 8) {
          if (iVar7 >> 8 < 0xff) {
            FUN_005016b3(iVar4);
          }
          else {
            FUN_004fb67f(1,*(undefined4 *)(in_EAX + 4));
          }
        }
      }
      local_14 = local_14 + 1;
      piVar8 = piVar8 + iVar1;
    } while (local_14 < (int)param_1[4]);
  }
  return;
}

