// rea decompile_all
// name: FUN_004a0aef
// address: 0x4a0aef
// body: available
// range: 0x4a0aef-0x4a0bbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a0aef(int *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int in_EAX;
  int in_ECX;
  int extraout_ECX;
  char *pcVar7;
  int iVar8;
  int local_c;
  int local_8;
  
  piVar6 = param_1;
  if (in_ECX + in_EAX < param_1[2]) {
    iVar5 = *param_1;
    iVar8 = *(int *)((in_ECX + in_EAX) * 0x1c + -0x18 + iVar5);
    if ((iVar8 != 0xd) && (iVar8 != 10)) {
      iVar8 = 0;
      local_8 = 0;
      if (0 < in_EAX) {
        pcVar7 = (char *)(in_ECX * 0x1c + 0x18 + iVar5);
        local_c = in_EAX;
        do {
          if (*pcVar7 == '\0') {
            iVar8 = 0;
          }
          else {
            iVar8 = iVar8 + 1;
            local_8 = local_8 + 1;
          }
          pcVar7 = pcVar7 + 0x1c;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      if (0 < local_8 - iVar8) {
        iVar1 = ((in_ECX - iVar8) + in_EAX) * 0x1c + -0x1c + iVar5;
        fVar2 = *(float *)(iVar1 + 0x14);
        fVar3 = *(float *)(iVar1 + 0xc);
        fVar4 = *(float *)(in_ECX * 0x1c + 0xc + iVar5);
        param_1 = (int *)0x0;
        if (0 < in_EAX) {
          do {
            FUN_0049fe43(param_1,0);
            if (*(char *)(extraout_ECX + 0x18 + *piVar6) != '\0') {
              param_1 = (int *)((float)param_1 +
                               (param_2 - ((fVar2 + fVar3) - fVar4)) / (float)(local_8 - iVar8));
            }
            in_EAX = in_EAX + -1;
          } while (in_EAX != 0);
        }
      }
    }
  }
  return;
}

