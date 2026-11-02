// rea decompile_all
// name: LoadState
// address: 0x10041745
// body: available
// range: 0x10041745-0x100419af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10041861 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CDockingManager::LoadState(char const *,unsigned int)
    public: virtual int __thiscall CDockingManager::LoadState(wchar_t const *,unsigned int)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall LoadState(void *this,short *param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  CObject *pCVar4;
  CBasePane *this_00;
  CSettingsStore *pCVar5;
  int iVar6;
  undefined4 *puVar7;
  CArchive local_b0 [72];
  CMemFile local_68 [52];
  uint local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  uchar *local_20;
  int local_1c;
  int *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa0;
  local_8 = 0x10041754;
  local_18 = this;
  FUN_1009b642(&local_1c,DAT_1016810c,param_1);
  local_8 = 0;
  local_28 = 0;
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(&local_24,(int *)ppuVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_100022f0(&local_24,L"%sDockingManager-%d");
  puVar7 = *(undefined4 **)((int)this + 0x24);
  while (puVar7 != (undefined4 *)0x0) {
    if (puVar7 == (undefined4 *)0x0) goto LAB_10041861;
    pCVar4 = (CObject *)puVar7[2];
    puVar7 = (undefined4 *)*puVar7;
    iVar3 = CObject::IsKindOf(pCVar4,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
    if ((iVar3 != 0) ||
       ((iVar3 = CObject::IsKindOf(pCVar4,(CRuntimeClass *)&PTR_s_CPane_1012cc40), iVar3 != 0 &&
        (iVar3 = CObject::IsKindOf(pCVar4,(CRuntimeClass *)&PTR_s_CMFCToolBar_10160470), iVar3 == 0)
        ))) {
      (**(code **)(*(int *)pCVar4 + 0x228))(param_1,0xffffffff,0xffffffff);
    }
  }
  puVar7 = *(undefined4 **)((int)this + 0x40);
  while (puVar7 != (undefined4 *)0x0) {
    if (puVar7 == (undefined4 *)0x0) goto LAB_10041861;
    pCVar4 = (CObject *)puVar7[2];
    puVar7 = (undefined4 *)*puVar7;
    iVar3 = CObject::IsKindOf(pCVar4,(CRuntimeClass *)&PTR_s_CPaneDivider_1012b088);
    this = local_18;
    if (iVar3 != 0) {
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_1012b088,pCVar4);
      this_00 = CPaneDivider::GetFirstPane((CPaneDivider *)pCVar4);
      this = local_18;
      if ((this_00 != (CBasePane *)0x0) &&
         (iVar3 = CObject::IsKindOf((CObject *)this_00,
                                    (CRuntimeClass *)&PTR_s_CDockablePane_1016138c), this = local_18
         , iVar3 != 0)) {
        (**(code **)(*(int *)this_00 + 0x228))(param_1,0xffffffff,0xffffffff);
        this = local_18;
      }
    }
  }
  puVar7 = *(undefined4 **)((int)this + 0xcc);
  while( true ) {
    if (puVar7 == (undefined4 *)0x0) {
      local_20 = (uchar *)0x0;
      local_30 = (int *)0x0;
      local_2c = 0;
      local_8._0_1_ = 2;
      pCVar5 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_30,0,1);
      iVar3 = local_24;
      iVar6 = (**(code **)(*(int *)pCVar5 + 0x10))(local_24);
      if ((iVar6 == 0) ||
         (iVar6 = (**(code **)(*(int *)pCVar5 + 0x44))
                            (L"DockingPaneAndPaneDividers",&local_20,&local_34), iVar6 == 0)) {
        local_8 = CONCAT31(local_8._1_3_,1);
        if (local_30 != (int *)0x0) {
          (**(code **)(*local_30 + 4))(1);
        }
        FUN_10001030((undefined4 *)(iVar3 + -0x10));
        FUN_10001030((undefined4 *)(local_1c + -0x10));
        local_28 = 0;
      }
      else {
        local_8._0_1_ = 3;
        CMemFile::CMemFile(local_68,local_20,local_34,0);
        local_8._0_1_ = 4;
        CArchive::CArchive(local_b0,(CFile *)local_68,1,0x1000,(void *)0x0);
        local_8._0_1_ = 5;
        (**(code **)(*(int *)this + 8))(local_b0);
        local_28 = 1;
        *(int *)((int)this + 0x15c) = 0;
        local_8._0_1_ = 4;
        CArchive::~CArchive(local_b0);
        local_8 = CONCAT31(local_8._1_3_,3);
        CMemFile::~CMemFile(local_68);
        local_8 = 2;
        if (local_20 != (uchar *)0x0) {
          FUN_100085b9(local_20);
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        if (local_30 != (int *)0x0) {
          (**(code **)(*local_30 + 4))(1);
        }
        FUN_10001030((undefined4 *)(local_24 + -0x10));
        FUN_10001030((undefined4 *)(local_1c + -0x10));
      }
      return local_28;
    }
    if (puVar7 == (undefined4 *)0x0) break;
    puVar1 = puVar7 + 2;
    puVar7 = (undefined4 *)*puVar7;
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,(CObject *)*puVar1);
    (**(code **)(*(int *)pCVar4 + 0x1d4))(param_1,0xffffffff);
  }
LAB_10041861:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

