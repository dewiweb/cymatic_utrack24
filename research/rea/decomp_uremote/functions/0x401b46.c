// rea decompile_all
// name: FUN_00401b46
// address: 0x401b46
// body: available
// range: 0x401b46-0x401c4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00401b46(int *param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_ECX;
  int *piVar6;
  int unaff_EDI;
  int local_10;
  
  iVar1 = *(int *)(unaff_EDI + 0x1c);
  iVar4 = *(int *)(in_EAX + 0x1c);
  iVar2 = *(int *)(unaff_EDI + 0x18) - iVar1;
  iVar3 = *(int *)(in_EAX + 0x18) - iVar4;
  if (in_ECX <= param_1) {
    if (iVar1 == iVar4) {
      piVar6 = (int *)(in_ECX + 0x18);
      iVar4 = ((int)param_1 - in_ECX) / 0x28 + 1;
      do {
        iVar5 = iVar3;
        if (piVar6[1] <= iVar1) {
          iVar5 = iVar2;
        }
        *piVar6 = piVar6[1] + iVar5;
        piVar6 = piVar6 + 10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    else if (iVar1 < iVar4) {
      local_10 = ((int)param_1 - in_ECX) / 0x28 + 1;
      param_1 = (int *)(in_ECX + 0x18);
      do {
        iVar5 = param_1[1];
        if (iVar1 < iVar5) {
          if (iVar5 < iVar4) {
            iVar5 = FUN_0040d230(*(int *)(in_EAX + 0x18) - *(int *)(unaff_EDI + 0x18));
            iVar5 = iVar5 + *(int *)(unaff_EDI + 0x18);
          }
          else {
            iVar5 = iVar5 + iVar3;
          }
        }
        else {
          iVar5 = iVar5 + iVar2;
        }
        local_10 = local_10 + -1;
        *param_1 = iVar5;
        param_1 = param_1 + 10;
      } while (local_10 != 0);
    }
    else {
      local_10 = ((int)param_1 - in_ECX) / 0x28 + 1;
      param_1 = (int *)(in_ECX + 0x18);
      do {
        iVar5 = param_1[1];
        if (iVar4 < iVar5) {
          if (iVar5 < iVar1) {
            iVar5 = FUN_0040d230(*(int *)(in_EAX + 0x18) - *(int *)(unaff_EDI + 0x18));
            iVar5 = iVar5 + *(int *)(unaff_EDI + 0x18);
          }
          else {
            iVar5 = iVar5 + iVar2;
          }
        }
        else {
          iVar5 = iVar5 + iVar3;
        }
        local_10 = local_10 + -1;
        *param_1 = iVar5;
        param_1 = param_1 + 10;
      } while (local_10 != 0);
    }
  }
  return;
}

