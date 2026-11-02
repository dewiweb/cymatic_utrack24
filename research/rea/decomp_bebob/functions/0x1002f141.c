// rea decompile_all
// name: CMFCToolBar::Serialize
// address: 0x1002f141
// body: available
// range: 0x1002f141-0x1002f371 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBar::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::Serialize(CMFCToolBar *this,CArchive *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  CRuntimeClass *this_00;
  int iVar4;
  BOOL BVar5;
  CObject *pCVar6;
  undefined4 *puVar7;
  CObList local_3c [32];
  long local_1c;
  wchar_t *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x1002f14d;
  CBasePane::Serialize((CBasePane *)this,param_1);
  pCVar6 = (CObject *)0x0;
  if (*(int *)(this + 0xb04) == 0) {
    ppuVar3 = FUN_1000ad47();
    FUN_10005e00(local_18,(int *)ppuVar3);
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    if (((byte)param_1[0x18] & 1) == 0) {
      CObList::CObList(local_3c,10);
      puVar7 = *(undefined4 **)(this + 0xbcc);
      local_8 = CONCAT31(local_8._1_3_,2);
      while (puVar7 != (undefined4 *)0x0) {
        puVar2 = puVar7 + 2;
        puVar7 = (undefined4 *)*puVar7;
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_1016154c,
                                    (CObject *)*puVar2);
        if ((pCVar6 != (CObject *)0x0) &&
           (iVar4 = (**(code **)(*(int *)pCVar6 + 0x50))(), iVar4 != 0)) {
          CObList::AddTail(local_3c,pCVar6);
        }
      }
      CObList::Serialize(local_3c,param_1);
      CArchive::operator<<(param_1,*(long *)(this + 0xb14));
      BVar5 = IsWindow(*(HWND *)(this + 0x20));
      if (BVar5 != 0) {
        CWnd::GetWindowTextW
                  ((CWnd *)this,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_18);
      }
      CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         local_18);
      CArchive::operator<<(param_1,*(long *)(this + 300));
      local_8._0_1_ = 1;
      FUN_1001e259(local_3c);
    }
    else {
      if (*(undefined4 **)(this + 0xca0) != (undefined4 *)0x0) {
        this_00 = (CRuntimeClass *)(**(code **)**(undefined4 **)(this + 0xca0))();
        pCVar6 = CRuntimeClass::CreateObject(this_00);
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeButton_10161a18,pCVar6);
        (**(code **)(*(int *)pCVar6 + 0x14))(*(undefined4 *)(this + 0xca0));
      }
      (**(code **)(*(int *)this + 0x350))();
      (**(code **)(*(int *)(this + 0xbc8) + 8))(param_1);
      puVar7 = *(undefined4 **)(this + 0xbcc);
      while (puVar7 != (undefined4 *)0x0) {
        piVar1 = (int *)puVar7[2];
        puVar7 = (undefined4 *)*puVar7;
        if (piVar1 == (int *)0x0) {
          CObList::RemoveAll((CObList *)(this + 0xbc8));
          iVar4 = (**(code **)(*(int *)this + 900))();
          if (iVar4 != 0) {
            (**(code **)(*(int *)this + 0x388))();
          }
          (**(code **)(*(int *)this + 0x3e0))();
          goto LAB_1002f20c;
        }
        piVar1[9] = piVar1[9] & 0xfffcffff;
        (**(code **)(*piVar1 + 0x28))(this);
      }
      CArchive::operator>>(param_1,&local_1c);
      iVar4 = (**(code **)(*(int *)this + 0x378))();
      if (iVar4 != 0) {
        *(long *)(this + 0xb14) = local_1c;
      }
      if (pCVar6 != (CObject *)0x0) {
        (**(code **)(*(int *)this + 0x340))(pCVar6,0xffffffff);
        *(CObject **)(this + 0xca0) = pCVar6;
      }
      (**(code **)(*(int *)this + 0x3e0))();
      CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         local_18);
      BVar5 = IsWindow(*(HWND *)(this + 0x20));
      puVar7 = DAT_1016043c;
      if (BVar5 != 0) {
        CWnd::SetWindowTextW((CWnd *)this,local_18[0]);
        puVar7 = DAT_1016043c;
      }
      while (puVar7 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)*puVar7;
        iVar4 = FUN_1002605c(this,puVar7[2],0);
        puVar7 = puVar2;
        if (-1 < iVar4) {
          (**(code **)(*(int *)this + 0x34c))(iVar4);
        }
      }
      CArchive::operator>>(param_1,(long *)(this + 300));
    }
LAB_1002f20c:
    FUN_10001030((undefined4 *)(local_18[0] + -8));
  }
  return;
}

