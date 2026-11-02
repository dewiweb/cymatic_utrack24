// rea decompile_all
// name: AFX_AUTOHIDE_DOCKSITE_SAVE_INFO::Serialize
// address: 0x10040a01
// body: available
// range: 0x10040a01-0x10040bf0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10040ab7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall AFX_AUTOHIDE_DOCKSITE_SAVE_INFO::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
AFX_AUTOHIDE_DOCKSITE_SAVE_INFO::Serialize(AFX_AUTOHIDE_DOCKSITE_SAVE_INFO *this,CArchive *param_1)

{
  long *plVar1;
  RECT *lpRect;
  int iVar2;
  long lVar3;
  BOOL BVar4;
  CArchive *pCVar5;
  undefined4 *puVar6;
  undefined **local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  long local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  CArchive *local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x10040a0d;
  local_28 = param_1;
  if (((byte)param_1[0x18] & 1) == 0) {
    if (*(CWnd **)(this + 0x44) == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    iVar2 = CWnd::GetDlgCtrlID(*(CWnd **)(this + 0x44));
    CArchive::operator<<(param_1,iVar2);
    lVar3 = (**(code **)(**(int **)(this + 0x44) + 400))();
    CArchive::operator<<(param_1,lVar3);
    iVar2 = (**(code **)(**(int **)(this + 0x44) + 0x36c))();
    if (iVar2 == 0) {
      lVar3 = 1;
    }
    else {
      lVar3 = (**(code **)(**(int **)(this + 0x44) + 0x178))();
    }
    CArchive::operator<<(param_1,lVar3);
    local_44 = CList<unsigned_int,unsigned_int&>::vftable;
    local_38 = 0;
    local_34 = 0;
    local_3c = 0;
    local_40 = (undefined4 *)0x0;
    local_30 = 0;
    local_2c = 10;
    local_8 = 0;
    FUN_10045ac8();
    CArchive::operator<<(param_1,local_38);
    puVar6 = local_40;
    while (puVar6 != (undefined4 *)0x0) {
      plVar1 = puVar6 + 2;
      puVar6 = (undefined4 *)*puVar6;
      CArchive::operator<<(param_1,*plVar1);
    }
    lpRect = (RECT *)(this + 0xc);
    GetWindowRect(*(HWND *)(*(int *)(this + 0x44) + 0x20),lpRect);
    BVar4 = IsRectEmpty(lpRect);
    if (BVar4 == 0) {
      CArchive::Write(param_1,lpRect,0x10);
    }
    else {
      iVar2 = *(int *)(this + 0x44);
      local_24 = *(undefined4 *)(iVar2 + 0x2f8);
      uStack_20 = *(undefined4 *)(iVar2 + 0x2fc);
      uStack_1c = *(undefined4 *)(iVar2 + 0x300);
      uStack_18 = *(undefined4 *)(iVar2 + 0x304);
      CArchive::Write(local_28,&local_24,0x10);
      param_1 = local_28;
    }
    CArchive::operator<<(param_1,*(long *)(*(int *)(*(int *)(this + 0x44) + 0x31c) + 0x104));
    CArchive::operator<<(param_1,*(long *)(*(int *)(*(int *)(this + 0x44) + 0x31c) + 0x108));
    CArchive::operator<<(param_1,*(long *)(*(int *)(*(int *)(this + 0x44) + 0x31c) + 0x10c));
    local_8 = 0xffffffff;
    local_44 = CList<unsigned_int,unsigned_int&>::vftable;
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_44);
  }
  else {
    CArchive::operator>>(param_1,(long *)this);
    CArchive::operator>>(param_1,(long *)(this + 4));
    CArchive::operator>>(param_1,(long *)(this + 8));
    local_28 = (CArchive *)0x0;
    CArchive::operator>>(param_1,(long *)&local_28);
    pCVar5 = local_28;
    if (0 < (int)local_28) {
      do {
        local_28 = (CArchive *)0xffffffff;
        CArchive::operator>>(param_1,(long *)&local_28);
        if (local_28 != (CArchive *)0xffffffff) {
          CList<unsigned_int,unsigned_int&>::AddHead
                    ((CList<unsigned_int,unsigned_int&> *)(this + 0x1c),(uint *)&local_28);
        }
        pCVar5 = pCVar5 + -1;
      } while (pCVar5 != (CArchive *)0x0);
    }
    operator>>(param_1,(tagRECT *)(this + 0xc));
    CArchive::operator>>(param_1,(long *)(this + 0x38));
    CArchive::operator>>(param_1,(long *)(this + 0x3c));
    CArchive::operator>>(param_1,(long *)(this + 0x40));
  }
  FUN_100f90cf();
  return;
}

