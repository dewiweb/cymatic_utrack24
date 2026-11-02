// rea decompile_all
// name: CCheckListBox::PreDrawItem
// address: 0x100e9ba0
// body: available
// range: 0x100e9ba0-0x100e9cd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e9c60 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CCheckListBox::PreDrawItem(struct tagDRAWITEMSTRUCT *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CCheckListBox::PreDrawItem(CCheckListBox *this,tagDRAWITEMSTRUCT *param_1)

{
  bool bVar1;
  CDC *pCVar2;
  CNoTrackObject *pCVar3;
  long lVar4;
  int iVar5;
  tagDRAWITEMSTRUCT *ptVar6;
  ulong local_48;
  undefined4 local_44;
  LRESULT local_40;
  DWORD local_3c;
  tagDRAWITEMSTRUCT local_38 [8];
  WPARAM local_30;
  int local_2c;
  byte local_28;
  HDC__ *local_20;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  ptVar6 = local_38;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)ptVar6 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    ptVar6 = ptVar6 + 4;
  }
  if (((int)local_30 < 0) || (local_2c == 0)) goto LAB_100e9cba;
  local_40 = SendMessageW(*(HWND *)(this + 0x20),0x1a1,local_30,0);
  pCVar2 = CDC::FromHandle(local_20);
  local_3c = GetSysColor(5);
  iVar5 = CWnd::IsWindowEnabled((CWnd *)this);
  if (iVar5 == 0) {
LAB_100e9c1f:
    bVar1 = true;
  }
  else {
    iVar5 = IsEnabled(this,local_30);
    if (iVar5 == 0) goto LAB_100e9c1f;
    bVar1 = false;
  }
  if (((local_28 & 1) != 0) && (!bVar1)) {
    local_3c = GetSysColor(0xd);
  }
  local_44 = (**(code **)(*(int *)pCVar2 + 0x2c))(local_3c);
  local_3c = GetCheck(this,local_30);
  pCVar3 = CProcessLocalObject::GetData
                     ((CProcessLocalObject *)&DAT_10169dfc,(_func_CNoTrackObject_ptr *)&LAB_100e997a
                     );
  if (pCVar3 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  pCVar3 = pCVar3 + 0x10;
  if (*(ulong *)pCVar3 == 0) {
    lVar4 = ATL::AtlGetCommCtrlVersion((ulong *)pCVar3,&local_48);
    if (lVar4 < 0) {
      *(ulong *)pCVar3 = 5;
    }
  }
  if (*(uint *)pCVar3 < 6) {
LAB_100e9c9e:
    PreDrawItemNonThemed(this,pCVar2,local_38,local_3c,local_40);
  }
  else {
    bVar1 = PreDrawItemThemed(this,pCVar2,local_38,local_3c,local_40);
    if (!bVar1) goto LAB_100e9c9e;
  }
  (**(code **)(*(int *)pCVar2 + 0x2c))(local_44);
LAB_100e9cba:
  PreDrawItemHelper(this,local_38);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

