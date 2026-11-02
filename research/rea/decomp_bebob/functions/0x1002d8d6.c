// rea decompile_all
// name: SaveState
// address: 0x1002d8d6
// body: available
// range: 0x1002d8d6-0x1002daf2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCToolBar::SaveState(char const *,int,unsigned int)
    public: virtual int __thiscall CMFCToolBar::SaveState(wchar_t const *,int,unsigned int)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall SaveState(void *this,short *param_1,int param_2,int param_3)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  CSettingsStore *pCVar3;
  int iVar4;
  BOOL BVar5;
  AFX_MODULE_STATE *pAVar6;
  CObject *pCVar7;
  undefined4 extraout_EDX;
  CArchive local_a8 [72];
  CMemFile local_60 [48];
  int *local_30;
  undefined4 local_2c;
  uchar *local_28;
  int local_24;
  int local_20;
  int local_1c;
  CWnd *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x98;
  local_8 = 0x1002d8e5;
  local_18 = this;
  FUN_1009b642(&local_24,DAT_10166e8c,param_1);
  local_8 = 0;
  if (param_2 == -1) {
    param_2 = CWnd::GetDlgCtrlID(this);
  }
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(&local_1c,(int *)ppuVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_3 == -1) {
    FUN_100022f0(&local_1c,L"%sMFCToolBar-%d");
  }
  else {
    FUN_100022f0(&local_1c,L"%sMFCToolBar-%d%x");
  }
  local_8._0_1_ = 2;
  CMemFile::CMemFile(local_60,0x400);
  local_8._0_1_ = 3;
  CArchive::CArchive(local_a8,(CFile *)local_60,0,0x1000,(void *)0x0);
  local_8._0_1_ = 4;
  (**(code **)(*(int *)this + 8))(local_a8);
  CArchive::Flush(local_a8);
  local_8._0_1_ = 3;
  CArchive::~CArchive(local_a8);
  uVar2 = FUN_1009a92f((int)local_60);
  local_2c = extraout_EDX;
  local_28 = CMemFile::Detach(local_60);
  if (local_28 != (uchar *)0x0) {
    local_30 = (int *)0x0;
    local_2c = 0;
    local_8._0_1_ = 5;
    pCVar3 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_30,0,0);
    iVar4 = (**(code **)(*(int *)pCVar3 + 0xc))(local_1c);
    if (iVar4 != 0) {
      BVar5 = IsWindow(*(HWND *)(local_18 + 0x20));
      if (BVar5 != 0) {
        ppuVar1 = FUN_1000ad47();
        FUN_10005e00(&local_20,(int *)ppuVar1);
        local_8._0_1_ = 6;
        CWnd::GetWindowTextW
                  (local_18,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            &local_20);
        (**(code **)(*(int *)pCVar3 + 0x30))(L"Name",local_20);
        local_8._0_1_ = 5;
        FUN_10001030((undefined4 *)(local_20 + -0x10));
      }
      iVar4 = (**(code **)(*(int *)pCVar3 + 0x28))(L"Buttons",local_28,uVar2);
      pAVar6 = AfxGetModuleState();
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_1012f19c,
                                  *(CObject **)(pAVar6 + 4));
      if (((iVar4 != 0) && (pCVar7 != (CObject *)0x0)) && (*(int *)(pCVar7 + 0xf0) != 0)) {
        (**(code **)(*(int *)local_18 + 0x424))(pCVar3);
      }
      CMFCToolBar::SaveResetOriginalState((CMFCToolBar *)local_18,pCVar3);
    }
    _free(local_28);
    local_8._0_1_ = 3;
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 4))(1);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  CMemFile::~CMemFile(local_60);
  local_8 = 1;
  uVar2 = SaveState(local_18,param_1,param_2,param_3);
  FUN_10001030((undefined4 *)(local_1c + -0x10));
  FUN_10001030((undefined4 *)(local_24 + -0x10));
  return uVar2;
}

