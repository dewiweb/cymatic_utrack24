// rea decompile_all
// name: FUN_004a76b0
// address: 0x4a76b0
// body: available
// range: 0x4a76b0-0x4a77c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a76b0(HWND param_1,undefined4 *param_2)

{
  BOOL BVar1;
  HWND pHVar2;
  undefined4 uVar3;
  int iVar4;
  tagPOINT *lpPoint;
  HWND local_44;
  tagPOINT local_40;
  int local_38;
  int local_34;
  tagRECT local_30;
  int local_20;
  HWND local_1c;
  int local_18;
  int local_14;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&local_44;
  local_44 = param_1;
  BVar1 = IsWindowVisible(param_1);
  if (BVar1 != 0) {
    pHVar2 = GetParent(param_1);
    if (pHVar2 == *(HWND *)(param_2[1] + 0x38)) {
      GetWindowRect(param_1,&local_30);
      lpPoint = &local_40;
      local_40.x = local_30.left;
      local_40.y = local_30.top;
      pHVar2 = GetParent(local_44);
      ScreenToClient(pHVar2,lpPoint);
      local_38 = local_40.x;
      local_20 = local_40.x;
      local_44 = (HWND)local_40.y;
      local_1c = (HWND)local_40.y;
      local_34 = local_30.right - local_30.left;
      local_18 = local_34;
      local_14 = local_30.bottom - local_30.top;
      uVar3 = FUN_00474700(&local_30,param_2[3],param_2[4]);
      FUN_0046f160(uVar3);
      if (param_2[5] == 0) {
        iVar4 = SaveDC((HDC)*param_2);
        param_2[5] = iVar4;
      }
      ExcludeClipRect((HDC)*param_2,local_38,(int)local_44,local_34 + local_38,
                      (int)local_44 + (local_30.bottom - local_30.top));
    }
  }
  __security_check_cookie(local_c ^ (uint)&local_44);
  return;
}

