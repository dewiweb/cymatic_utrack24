// rea decompile_all
// name: CCheckListBox::CheckFromPoint
// address: 0x100e9df4
// body: available
// range: 0x100e9df4-0x100e9f1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e9e2f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CCheckListBox::CheckFromPoint(class CPoint,int &)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CCheckListBox::CheckFromPoint(CCheckListBox *this,int param_2,int param_3,int *param_4)

{
  POINT pt;
  CNoTrackObject *pCVar1;
  ulong uVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  int iVar5;
  BOOL BVar6;
  WPARAM local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *param_4 = 0;
  pCVar1 = CProcessLocalObject::GetData
                     ((CProcessLocalObject *)&DAT_10169dfc,(_func_CNoTrackObject_ptr *)&LAB_100e997a
                     );
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar2 & 0x210) == 0x10) {
    LVar3 = SendMessageW(*(HWND *)(this + 0x20),0x1a1,0,0);
    LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x18b,0,0);
    if (param_3 < LVar4 * LVar3) {
      SendMessageW(*(HWND *)(this + 0x20),0x18e,0,0);
      iVar5 = *(int *)(pCVar1 + 8) + 2;
LAB_100e9f01:
      if (param_2 < iVar5) {
        *param_4 = *param_4 + 1;
      }
    }
  }
  else {
    for (local_1c = SendMessageW(*(HWND *)(this + 0x20),0x18e,0,0);
        LVar3 = SendMessageW(*(HWND *)(this + 0x20),0x18b,0,0), (int)local_1c < LVar3;
        local_1c = local_1c + 1) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      SendMessageW(*(HWND *)(this + 0x20),0x198,local_1c,(LPARAM)&local_18);
      pt.y = param_3;
      pt.x = param_2;
      BVar6 = PtInRect(&local_18,pt);
      if (BVar6 != 0) {
        iVar5 = *(int *)(pCVar1 + 8) + 2 + local_18.left;
        goto LAB_100e9f01;
      }
    }
  }
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}

