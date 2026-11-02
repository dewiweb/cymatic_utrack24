// rea decompile_all
// name: FUN_100414e9
// address: 0x100414e9
// body: available
// range: 0x100414e9-0x1004170d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100415a4 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1004170c to 0x1004171e FUN_1004171e (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100414e9(void *this,short *param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  CBasePane *pCVar3;
  CObject *pCVar4;
  uchar *_Memory;
  CSettingsStore *pCVar5;
  int iVar6;
  undefined4 *puVar7;
  CArchive local_a8 [72];
  CMemFile local_60 [16];
  CObList local_50 [32];
  undefined4 local_30;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x98;
  local_8 = 0x100414f8;
  _DAT_101680f8 = 1;
  FUN_1009b642(&local_20,DAT_1016810c,param_1);
  local_8 = 0;
  local_1c = 0;
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(local_18,(int *)ppuVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_100022f0(local_18,L"%sDockingManager-%d");
  puVar7 = *(undefined4 **)((int)this + 0x24);
LAB_1004159b:
  if (puVar7 != (undefined4 *)0x0) {
    if (puVar7 != (undefined4 *)0x0) {
      pCVar4 = (CObject *)puVar7[2];
      puVar7 = (undefined4 *)*puVar7;
      iVar6 = CObject::IsKindOf(pCVar4,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
      if (iVar6 == 0) goto code_r0x1004156a;
      goto LAB_1004158a;
    }
    goto LAB_100415a4;
  }
  puVar7 = *(undefined4 **)((int)this + 0x40);
  while (puVar7 != (undefined4 *)0x0) {
    if (puVar7 == (undefined4 *)0x0) goto LAB_100415a4;
    puVar1 = puVar7 + 2;
    puVar7 = (undefined4 *)*puVar7;
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_1012b088,(CObject *)*puVar1);
    if ((pCVar4 != (CObject *)0x0) && (*(int *)(pCVar4 + 0x11c) != 0)) {
      CObList::CObList(local_50,10);
      local_8 = CONCAT31(local_8._1_3_,2);
      pCVar3 = CPaneDivider::GetFirstPane((CPaneDivider *)pCVar4);
      if (pCVar3 != (CBasePane *)0x0) {
        (**(code **)(*(int *)pCVar3 + 0x22c))(param_1,0xffffffff,0xffffffff);
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_1001e259(local_50);
    }
  }
  puVar7 = *(undefined4 **)((int)this + 0xcc);
  while( true ) {
    if (puVar7 == (undefined4 *)0x0) {
      local_8._0_1_ = 3;
      CMemFile::CMemFile(local_60,0x400);
      local_8._0_1_ = 4;
      CArchive::CArchive(local_a8,(CFile *)local_60,0,0x1000,(void *)0x0);
      local_8._0_1_ = 5;
      (**(code **)(*(int *)this + 8))(local_a8);
      CArchive::Flush(local_a8);
      local_8._0_1_ = 4;
      CArchive::~CArchive(local_a8);
      local_30 = FUN_1009a92f((int)local_60);
      _Memory = CMemFile::Detach(local_60);
      if (_Memory != (uchar *)0x0) {
        local_28 = (int *)0x0;
        local_24 = 0;
        local_8 = CONCAT31(local_8._1_3_,6);
        pCVar5 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_28,0,0);
        iVar6 = (**(code **)(*(int *)pCVar5 + 0xc))(local_18[0]);
        if (iVar6 != 0) {
          local_1c = (**(code **)(*(int *)pCVar5 + 0x28))
                               (L"DockingPaneAndPaneDividers",_Memory,local_30);
        }
        _free(_Memory);
        local_8._0_1_ = 4;
        if (local_28 != (int *)0x0) {
          (**(code **)(*local_28 + 4))(1);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,3);
      CMemFile::~CMemFile(local_60);
      FUN_1004171e();
      return;
    }
    if (puVar7 == (undefined4 *)0x0) break;
    puVar1 = puVar7 + 2;
    puVar7 = (undefined4 *)*puVar7;
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,(CObject *)*puVar1);
    (**(code **)(*(int *)pCVar4 + 0x1d0))(param_1,0xffffffff);
  }
LAB_100415a4:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
code_r0x1004156a:
  iVar6 = CObject::IsKindOf(pCVar4,(CRuntimeClass *)&PTR_s_CPane_1012cc40);
  if (iVar6 != 0) {
    iVar6 = CObject::IsKindOf(pCVar4,(CRuntimeClass *)&PTR_s_CMFCToolBar_10160470);
    if (iVar6 == 0) {
LAB_1004158a:
      (**(code **)(*(int *)pCVar4 + 0x22c))(param_1,0xffffffff,0xffffffff);
    }
  }
  goto LAB_1004159b;
}

