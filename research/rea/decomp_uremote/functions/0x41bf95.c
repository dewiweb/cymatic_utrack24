// rea decompile_all
// name: FUN_0041bf95
// address: 0x41bf95
// body: available
// range: 0x41bf95-0x41c098 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041bf95(char param_1,short *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  uint in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  
  local_10 = *param_3;
  iVar4 = *param_4;
  bVar1 = true;
  if (1 < in_EAX) {
    local_1c = (in_EAX - 2 >> 1) + 1;
    local_18 = iVar4;
    do {
      bVar2 = false;
      if ((bVar1) || (param_1 != '\0')) {
        iVar5 = (int)param_2[1];
        iVar3 = *param_2 - iVar5;
        bVar1 = false;
        piVar6 = param_4;
        local_c = iVar4;
      }
      else {
        iVar5 = (int)*param_2;
        iVar3 = param_2[1] - iVar5;
        local_c = local_10;
        bVar2 = true;
        piVar6 = param_3;
      }
      piVar6 = piVar6 + 1;
      if (local_c != 0) {
        do {
          if (iVar5 < *piVar6) break;
          if (iVar5 == *piVar6) {
            if (iVar3 < 0) {
              if (piVar6[1] <= iVar3) goto LAB_0041c07d;
            }
            else if (iVar3 <= piVar6[1]) goto LAB_0041c07d;
            piVar6[1] = iVar3;
            goto LAB_0041c07d;
          }
          local_c = local_c + -1;
          piVar6 = piVar6 + 8;
        } while (local_c != 0);
        if (local_c != 0) {
          piVar8 = piVar6 + local_c * 8;
          do {
            local_c = local_c + -1;
            piVar7 = piVar8 + -8;
            piVar9 = piVar8;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar9 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar9 = piVar9 + 1;
            }
            iVar4 = local_18;
            piVar8 = piVar8 + -8;
          } while (local_c != 0);
        }
      }
      *piVar6 = iVar5;
      piVar6[1] = iVar3;
      if (bVar2) {
        local_10 = local_10 + 1;
      }
      else {
        iVar4 = iVar4 + 1;
        local_18 = iVar4;
      }
LAB_0041c07d:
      param_2 = param_2 + 2;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  *param_3 = local_10;
  *param_4 = iVar4;
  return;
}

