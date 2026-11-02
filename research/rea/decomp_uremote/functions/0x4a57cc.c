// rea decompile_all
// name: FUN_004a57cc
// address: 0x4a57cc
// body: available
// range: 0x4a57cc-0x4a5987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a57cc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_EAX;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int local_60;
  int local_5c;
  
  if (0 < param_1[2]) {
    iVar1 = *in_EAX;
    iVar2 = in_EAX[1];
    iVar6 = in_EAX[3] + iVar2;
    local_60 = param_1[2] + -1;
    iVar10 = in_EAX[2] + iVar1;
    if (-1 < local_60) {
      local_5c = local_60 * 0x10;
      do {
        iVar5 = local_60;
        piVar8 = (int *)(*param_1 + local_5c);
        iVar3 = *piVar8;
        iVar4 = piVar8[1];
        iVar9 = piVar8[2] + iVar3;
        iVar7 = piVar8[3] + iVar4;
        if ((((iVar3 < iVar10) && (iVar1 < iVar9)) && (iVar4 < iVar6)) && (iVar2 < iVar7)) {
          if (iVar3 < iVar1) {
            if ((iVar4 < iVar2) || ((iVar6 < iVar7 || (iVar10 < iVar9)))) {
              *piVar8 = iVar1;
              piVar8[2] = iVar9 - iVar1;
LAB_004a5932:
              local_60 = local_60 + 1;
              FUN_004a719a(local_60);
              local_60 = iVar5 + 2;
              local_5c = local_5c + 0x20;
            }
            else {
              piVar8[2] = iVar1 - iVar3;
            }
          }
          else if (iVar10 < iVar9) {
            *piVar8 = iVar10;
            piVar8[2] = iVar9 - iVar10;
            if ((iVar4 < iVar2) || (iVar6 < iVar7)) goto LAB_004a5932;
          }
          else if (iVar4 < iVar2) {
            if (iVar6 < iVar7) {
              piVar8[1] = iVar2;
              piVar8[3] = iVar7 - iVar2;
              goto LAB_004a5932;
            }
            piVar8[3] = iVar2 - iVar4;
          }
          else if (iVar6 < iVar7) {
            piVar8[1] = iVar6;
            piVar8[3] = iVar7 - iVar6;
          }
          else {
            FUN_004a722c(local_60);
          }
        }
        local_60 = local_60 + -1;
        local_5c = local_5c + -0x10;
      } while (-1 < local_60);
    }
  }
  return;
}

