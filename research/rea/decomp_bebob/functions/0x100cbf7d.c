// rea decompile_all
// name: CMFCOutlookBar::SaveState
// address: 0x100cbf7d
// body: available
// range: 0x100cbf7d-0x100cc1d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100cc022 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCOutlookBar::SaveState(wchar_t const *,int,unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCOutlookBar::SaveState(CMFCOutlookBar *this,wchar_t *param_1,int param_2,uint param_3)

{
  undefined **ppuVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  undefined4 uVar5;
  uchar *_Memory;
  CSettingsStore *pCVar6;
  undefined4 extraout_EDX;
  undefined4 *puVar7;
  long lVar8;
  CArchive local_9c [72];
  CMemFile local_54 [52];
  int *local_20;
  undefined4 local_1c;
  int local_18 [4];
  undefined4 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x8c;
  local_8 = (undefined4 *)0x100cbf8c;
  ::SaveState(this,param_1,param_2,param_3);
  puVar7 = *(undefined4 **)(this + 0x374);
  while( true ) {
    if (puVar7 == (undefined4 *)0x0) {
      FUN_1009b642(local_18,DAT_10169588,param_1);
      local_8 = puVar7;
      if (param_2 == -1) {
        param_2 = CWnd::GetDlgCtrlID((CWnd *)this);
      }
      ppuVar1 = FUN_1000ad47();
      FUN_10005e00(&param_1,(int *)ppuVar1);
      local_8 = (undefined4 *)CONCAT31(local_8._1_3_,1);
      if (param_3 == 0xffffffff) {
        FUN_100022f0(&param_1,L"%sMFCOutlookBar-%d");
      }
      else {
        FUN_100022f0(&param_1,L"%sMFCOutlookBar-%d%x");
      }
      local_8._0_1_ = 2;
      CMemFile::CMemFile(local_54,0x400);
      local_8._0_1_ = 3;
      CArchive::CArchive(local_9c,(CFile *)local_54,0,0x1000,(void *)0x0);
      local_8 = (undefined4 *)CONCAT31(local_8._1_3_,4);
      CArchive::operator<<(local_9c,*(long *)(this + 0x37c));
      puVar7 = *(undefined4 **)(this + 0x374);
      while (puVar7 != (undefined4 *)0x0) {
        pCVar4 = (CWnd *)puVar7[2];
        puVar7 = (undefined4 *)*puVar7;
        iVar2 = CWnd::GetDlgCtrlID(pCVar4);
        CArchive::operator<<(local_9c,iVar2);
        ppuVar1 = FUN_1000ad47();
        FUN_10005e00(&param_2,(int *)ppuVar1);
        local_8 = (undefined4 *)CONCAT31(local_8._1_3_,5);
        iVar2 = (**(code **)(*(int *)pCVar4 + 0x168))();
        if (iVar2 == 0) {
          pHVar3 = GetParent(*(HWND *)(pCVar4 + 0x20));
          pCVar4 = CWnd::FromHandle(pHVar3);
        }
        CWnd::GetWindowTextW
                  (pCVar4,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          &param_2);
        CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (local_9c,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            &param_2);
        local_8 = (undefined4 *)CONCAT31(local_8._1_3_,4);
        FUN_10001030((undefined4 *)(param_2 + -0x10));
      }
      iVar2 = (**(code **)(*(int *)this + 0x3a4))();
      if (iVar2 == 0) {
        lVar8 = -1;
      }
      else {
        lVar8 = *(long *)(iVar2 + 0x208);
      }
      CArchive::operator<<(local_9c,lVar8);
      CArchive::Flush(local_9c);
      local_8._0_1_ = 3;
      CArchive::~CArchive(local_9c);
      uVar5 = FUN_1009a92f((int)local_54);
      local_1c = extraout_EDX;
      _Memory = CMemFile::Detach(local_54);
      if (_Memory != (uchar *)0x0) {
        local_20 = (int *)0x0;
        local_1c = 0;
        local_8 = (undefined4 *)CONCAT31(local_8._1_3_,6);
        pCVar6 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_20,0,0);
        iVar2 = (**(code **)(*(int *)pCVar6 + 0xc))(param_1);
        if (iVar2 != 0) {
          (**(code **)(*(int *)pCVar6 + 0x28))(DAT_1016958c,_Memory,uVar5);
        }
        _free(_Memory);
        local_8._0_1_ = 3;
        if (local_20 != (int *)0x0) {
          (**(code **)(*local_20 + 4))(1);
        }
      }
      local_8 = (undefined4 *)CONCAT31(local_8._1_3_,2);
      CMemFile::~CMemFile(local_54);
      FUN_10001030((undefined4 *)(param_1 + -8));
      FUN_10001030((undefined4 *)(local_18[0] + -0x10));
      return 1;
    }
    if (puVar7 == (undefined4 *)0x0) break;
    pCVar4 = (CWnd *)puVar7[2];
    puVar7 = (undefined4 *)*puVar7;
    iVar2 = CWnd::GetDlgCtrlID(pCVar4);
    (**(code **)(*(int *)pCVar4 + 0x22c))(param_1,iVar2,iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

