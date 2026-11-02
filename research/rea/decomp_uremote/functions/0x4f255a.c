// rea decompile_all
// name: FUN_004f255a
// address: 0x4f255a
// body: available
// range: 0x4f255a-0x4f2651 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f255a(HWND param_1,undefined4 *param_2)

{
  BOOL BVar1;
  HWND pHVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  tagPOINT *lpPoint;
  tagPOINT local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  BVar1 = IsWindowVisible(param_1);
  if (BVar1 != 0) {
    pHVar2 = GetParent(param_1);
    if (pHVar2 == *(HWND *)(param_2[1] + 0x38)) {
      piVar3 = (int *)FUN_004f0b41();
      iVar5 = *piVar3;
      local_30.y = piVar3[1];
      local_10 = piVar3[2];
      local_c = piVar3[3];
      lpPoint = &local_30;
      local_30.x = iVar5;
      local_18 = iVar5;
      local_14 = local_30.y;
      pHVar2 = GetParent(param_1);
      ScreenToClient(pHVar2,lpPoint);
      local_28 = local_30.x;
      iVar5 = local_10 - iVar5;
      iVar6 = local_c - local_14;
      local_24 = local_30.y;
      local_20 = iVar5;
      local_1c = iVar6;
      FUN_004a97cd();
      FUN_004a57cc();
      if (param_2[5] == 0) {
        iVar4 = SaveDC((HDC)*param_2);
        param_2[5] = iVar4;
      }
      ExcludeClipRect((HDC)*param_2,local_28,local_24,local_28 + iVar5,local_24 + iVar6);
    }
  }
  return 1;
}

