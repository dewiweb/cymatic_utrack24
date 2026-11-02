// rea decompile_all
// name: FUN_100cc293
// address: 0x100cc293
// body: available
// range: 0x100cc293-0x100cc54a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100cc549 to 0x100cc562 FUN_100cc562 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100cc293(void *this,short *param_1,int param_2,int param_3)

{
  long lVar1;
  undefined **ppuVar2;
  CSettingsStore *pCVar3;
  int iVar4;
  CObject *pCVar5;
  CWnd *pCVar6;
  undefined4 uVar7;
  CMemFile local_bc [44];
  CArchive local_90 [76];
  CMFCOutlookBarPane *local_44;
  uint local_3c;
  int *local_38;
  undefined4 local_34;
  long local_30;
  long local_2c;
  int local_28;
  uchar *local_24;
  int *local_20;
  CWnd *local_1c;
  int local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar4 = param_2;
  uStack_4 = 0xac;
  local_8 = 0x100cc2a2;
  local_1c = this;
  LoadState(this,param_1,param_2,param_3);
  FUN_1009b642(local_18,DAT_10169588,param_1);
  local_8 = 0;
  if (iVar4 == -1) {
    CWnd::GetDlgCtrlID(this);
  }
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(&param_2,(int *)ppuVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_3 == -1) {
    FUN_100022f0(&param_2,L"%sMFCOutlookBar-%d");
  }
  else {
    FUN_100022f0(&param_2,L"%sMFCOutlookBar-%d%x");
  }
  local_24 = (uchar *)0x0;
  local_38 = (int *)0x0;
  local_34 = 0;
  local_8._0_1_ = 2;
  pCVar3 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_38,0,1);
  iVar4 = (**(code **)(*(int *)pCVar3 + 0x10))(param_2);
  if (iVar4 == 0) {
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_38 != (int *)0x0) {
      (**(code **)(*local_38 + 4))(1);
    }
    FUN_10001030((undefined4 *)(param_2 + -0x10));
    FUN_10001030((undefined4 *)(local_18[0] + -0x10));
  }
  else {
    iVar4 = (**(code **)(*(int *)pCVar3 + 0x44))(DAT_1016958c,&local_24,&local_3c);
    if (iVar4 != 0) {
      local_20 = (int *)(**(code **)(*(int *)this + 0x3a4))();
      local_8._0_1_ = 3;
      CMemFile::CMemFile(local_bc,local_24,local_3c,0);
      local_8._0_1_ = 4;
      CArchive::CArchive(local_90,(CFile *)local_bc,1,0x1000,(void *)0x0);
      local_8 = CONCAT31(local_8._1_3_,5);
      local_2c = 0;
      CArchive::operator>>(local_90,&local_2c);
      for (param_3 = 0; param_3 < local_2c; param_3 = param_3 + 1) {
        local_30 = 0;
        ppuVar2 = FUN_1000ad47();
        FUN_10005e00(&local_28,(int *)ppuVar2);
        local_8._0_1_ = 6;
        CArchive::operator>>(local_90,&local_30);
        CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (local_90,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            &local_28);
        local_44 = FUN_1000858a(0x1ca8);
        local_8._0_1_ = 7;
        if (local_44 == (CMFCOutlookBarPane *)0x0) {
          pCVar5 = (CObject *)0x0;
        }
        else {
          pCVar5 = (CObject *)CMFCOutlookBarPane::CMFCOutlookBarPane(local_44);
        }
        lVar1 = local_30;
        local_8._0_1_ = 6;
        (**(code **)(*(int *)pCVar5 + 0x434))(local_1c,0x50402808,local_30,0);
        pCVar6 = CWnd::GetOwner(local_1c);
        if (pCVar6 == (CWnd *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pCVar6 + 0x20);
        }
        *(undefined4 *)(pCVar5 + 0x54) = uVar7;
        (**(code **)(*(int *)pCVar5 + 0x228))(param_1,lVar1,lVar1);
        CObList::AddTail((CObList *)(local_1c + 0x370),pCVar5);
        iVar4 = local_28;
        (**(code **)(*local_20 + 0x188))(pCVar5,local_28,0xffffffff,1);
        (&DAT_101694f0)[lVar1 - _DAT_101623bc] = 1;
        local_8 = CONCAT31(local_8._1_3_,5);
        FUN_10001030((undefined4 *)(iVar4 + -0x10));
      }
      param_3 = 0;
      CArchive::operator>>(local_90,&param_3);
      local_20[0x82] = param_3;
      local_8._0_1_ = 4;
      CArchive::~CArchive(local_90);
      local_8 = CONCAT31(local_8._1_3_,3);
      CMemFile::~CMemFile(local_bc);
      local_8 = 2;
      uVar7 = FUN_100cc562();
      return uVar7;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_38 != (int *)0x0) {
      (**(code **)(*local_38 + 4))(1);
    }
    FUN_10001030((undefined4 *)(param_2 + -0x10));
    FUN_10001030((undefined4 *)(local_18[0] + -0x10));
  }
  return 0;
}

