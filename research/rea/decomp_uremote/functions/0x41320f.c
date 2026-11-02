// rea decompile_all
// name: FUN_0041320f
// address: 0x41320f
// body: available
// range: 0x41320f-0x41334a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041320f(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_ESI;
  int iVar8;
  int local_18;
  int local_14;
  int local_10;
  int local_8;
  
  iVar4 = in_EDX >> 8;
  iVar7 = in_EAX - in_EDX;
  iVar5 = in_EDX + iVar4 * -0x100;
  iVar8 = in_EAX >> 8;
  iVar2 = in_EAX + iVar8 * -0x100;
  if (param_2 == param_3) {
    FUN_00413175();
  }
  else {
    iVar6 = param_3 - param_2;
    if (iVar4 == iVar8) {
      *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + (iVar2 + iVar5) * iVar6;
      *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + iVar6;
    }
    else {
      local_18 = 0x100;
      local_14 = 1;
      iVar1 = 0x100 - iVar5;
      if (iVar7 < 0) {
        local_18 = 0;
        local_14 = -1;
        iVar7 = -iVar7;
        iVar1 = iVar5;
      }
      iVar3 = (iVar1 * iVar6) / iVar7;
      local_8 = (iVar1 * iVar6) % iVar7;
      if (local_8 < 0) {
        iVar3 = iVar3 + -1;
        local_8 = local_8 + iVar7;
      }
      *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + iVar3;
      iVar4 = iVar4 + local_14;
      *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + (local_18 + iVar5) * iVar3;
      FUN_00413175();
      param_2 = param_2 + iVar3;
      if (iVar4 != iVar8) {
        local_10 = ((iVar3 - param_2) + param_3) * 0x100;
        iVar5 = local_10 / iVar7;
        local_10 = local_10 % iVar7;
        if (local_10 < 0) {
          iVar5 = iVar5 + -1;
          local_10 = local_10 + iVar7;
        }
        local_8 = local_8 - iVar7;
        do {
          local_8 = local_8 + local_10;
          iVar6 = iVar5;
          if (-1 < local_8) {
            local_8 = local_8 - iVar7;
            iVar6 = iVar5 + 1;
          }
          iVar4 = iVar4 + local_14;
          *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + iVar6;
          param_2 = param_2 + iVar6;
          *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + iVar6 * 0x100;
          FUN_00413175();
        } while (iVar4 != iVar8);
      }
      *(int *)(unaff_ESI + 0x20) =
           *(int *)(unaff_ESI + 0x20) + ((iVar2 - local_18) + 0x100) * (param_3 - param_2);
      *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + (param_3 - param_2);
    }
  }
  return;
}

