// rea decompile_all
// name: FUN_00685df0
// address: 0x685df0
// body: available
// range: 0x685df0-0x685ff1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00685df0(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  HWND pHVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  UINT Msg;
  WPARAM wParam;
  undefined1 *lParam;
  undefined1 local_44c [4];
  int *local_448;
  tagRECT local_444;
  tagRECT local_434;
  undefined1 local_424 [1040];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720ce4;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0x110) {
    local_448 = *(int **)(*(int *)(param_4 + 0x40) + 8);
    pHVar1 = GetParent(param_1);
    if (pHVar1 == (HWND)0x0) {
      pHVar1 = param_1;
    }
    GetWindowRect(pHVar1,&local_434);
    GetClientRect(pHVar1,&local_444);
    iVar2 = 0x96;
    if (0x96 < local_434.bottom - local_434.top) {
      iVar2 = local_434.bottom - local_434.top;
    }
    iVar5 = 0x96;
    if (0x96 < local_434.right - local_434.left) {
      iVar5 = local_434.right - local_434.left;
    }
    SetWindowPos(pHVar1,(HWND)0x0,local_434.left,local_434.top,iVar5 + local_448[6],iVar2,0x214);
    piVar4 = local_448;
    FUN_006e9790(local_444.right,local_444.top,local_448[6],local_444.bottom - local_444.top);
    (**(code **)(*piVar4 + 0x30))(0,pHVar1);
  }
  else if ((param_2 == 0x4e) && (*(int *)(param_4 + 8) == -0x25a)) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_4 + 0xc) + 0x40) + 8);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = **(undefined4 **)(iVar2 + 0x28);
    }
    piVar4 = (int *)FUN_006f6dd6(uVar3,0,&juce::Component::RTTI_Type_Descriptor,
                                 &juce::FilePreviewComponent::RTTI_Type_Descriptor,0,local_14);
    if (piVar4 != (int *)0x0) {
      _memset(local_424,0,0x410);
      lParam = local_424;
      wParam = 0x104;
      Msg = 0x465;
      pHVar1 = GetParent(param_1);
      SendMessageW(pHVar1,Msg,wParam,(LPARAM)lParam);
      FUN_0045cae0(local_424);
      local_8 = 0;
      FUN_00627bf0();
      local_8 = CONCAT31(local_8._1_3_,1);
      (**(code **)(*piVar4 + 0xb0))(local_44c);
      FUN_0040ea50();
      FUN_00637c10();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

