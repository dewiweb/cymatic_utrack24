// rea decompile_all
// name: CPaneDivider::RepositionPanes
// address: 0x1007240a
// body: available
// range: 0x1007240a-0x100726f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100725c6 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CPaneDivider::RepositionPanes(class CRect &,void * &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneDivider::RepositionPanes(CPaneDivider *this,CRect *param_1,void **param_2)

{
  undefined4 *puVar1;
  void **ppvVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *this_00;
  void *pvVar5;
  CObject *pCVar6;
  HRGN pHVar7;
  CObList local_98 [4];
  undefined4 *local_94;
  CObList local_7c [4];
  undefined4 *local_78;
  CWnd *local_60;
  void **local_5c;
  int local_58;
  int local_54;
  undefined **local_50;
  HRGN local_4c;
  tagRECT *local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x88;
  local_8 = 0x10072419;
  local_24.left = *(LONG *)param_1;
  local_24.top = *(LONG *)(param_1 + 4);
  local_24.right = *(LONG *)(param_1 + 8);
  local_24.bottom = *(LONG *)(param_1 + 0xc);
  local_44.left = *(LONG *)param_1;
  local_44.top = *(LONG *)(param_1 + 4);
  local_44.right = *(LONG *)(param_1 + 8);
  local_48 = (tagRECT *)param_1;
  local_5c = param_2;
  local_44.bottom = *(LONG *)(param_1 + 0xc);
  iVar3 = (**(code **)(*(int *)this + 400))();
  if (iVar3 == 0x1000) {
    local_44.left = local_48->right - *(int *)(this + 0x108);
    local_24.right = local_44.left;
LAB_100724b8:
    local_24.top = local_44.top;
    local_24.bottom = local_44.bottom;
  }
  else {
    if (iVar3 == 0x2000) {
      local_44.top = local_48->bottom - *(int *)(this + 0x108);
      local_24.bottom = local_44.top;
    }
    else {
      if (iVar3 == 0x4000) {
        local_44.right = *(int *)(this + 0x108) + local_48->left;
        local_24.left = local_44.right;
        goto LAB_100724b8;
      }
      if (iVar3 != 0x8000) goto LAB_100724c4;
      local_44.bottom = *(int *)(this + 0x108) + local_48->top;
      local_24.top = local_44.bottom;
    }
    local_24.left = local_44.left;
    local_24.right = local_44.right;
  }
LAB_100724c4:
  pHVar4 = GetParent(*(HWND *)(this + 0x20));
  this_00 = CWnd::FromHandle(pHVar4);
  local_60 = this_00;
  CWnd::ScreenToClient(this_00,local_48);
  CWnd::ScreenToClient(this_00,&local_44);
  CWnd::ScreenToClient(this_00,&local_24);
  ppvVar2 = local_5c;
  pvVar5 = (void *)(**(code **)(*(int *)this + 0x230))(&local_44,1,*local_5c);
  *ppvVar2 = pvVar5;
  if (*(int *)(this + 0x158) != 0) {
    (**(code **)(**(int **)(this + 0x158) + 0x38))
              (local_24.left,local_24.top,local_24.right,local_24.bottom,ppvVar2);
    local_58 = 0;
    local_54 = 0;
    (**(code **)(**(int **)(this + 0x158) + 0x50))(&local_58);
    if (DAT_101689e0 != 0) {
      CObList::CObList(local_7c,10);
      local_8 = 0;
      CObList::CObList(local_98,10);
      local_8 = CONCAT31(local_8._1_3_,1);
      CPaneContainerManager::AddPanesToList
                (*(CPaneContainerManager **)(this + 0x158),local_7c,local_98);
      if ((local_24.right - local_24.left < local_58) || (local_24.bottom - local_24.top < local_54)
         ) {
        while (local_78 != (undefined4 *)0x0) {
          if (local_78 == (undefined4 *)0x0) goto LAB_100725c6;
          puVar1 = (undefined4 *)*local_78;
          pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                      (CObject *)local_78[2]);
          local_34.left = 0;
          local_34.top = 0;
          local_34.right = 0;
          local_34.bottom = 0;
          GetWindowRect(*(HWND *)(pCVar6 + 0x20),&local_34);
          CWnd::ScreenToClient(local_60,&local_34);
          if (local_24.right < local_34.right) {
            local_34.right = local_24.right;
          }
          if (local_24.bottom < local_34.bottom) {
            local_34.bottom = local_24.bottom;
          }
          OffsetRect(&local_34,-local_34.left,-local_34.top);
          local_4c = (HRGN)0x0;
          local_50 = CRgn::vftable;
          local_8._0_1_ = 2;
          pHVar7 = CreateRectRgn(local_34.left,local_34.top,local_34.right,local_34.bottom);
          CMenu::Attach((CMenu *)&local_50,(HMENU__ *)pHVar7);
          SetWindowRgn(*(HWND *)(pCVar6 + 0x20),local_4c,1);
          local_8 = CONCAT31(local_8._1_3_,1);
          local_50 = CRgn::vftable;
          CImageList::~CImageList((CImageList *)&local_50);
          local_78 = puVar1;
        }
        while (local_94 != (undefined4 *)0x0) {
          if (local_94 == (undefined4 *)0x0) goto LAB_100725c6;
          puVar1 = local_94 + 2;
          local_94 = (undefined4 *)*local_94;
          pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_1012b088,
                                      (CObject *)*puVar1);
          (**(code **)(*(int *)pCVar6 + 0x234))
                    (&DAT_10166638,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x13,0);
        }
      }
      else {
        while (local_78 != (undefined4 *)0x0) {
          if (local_78 == (undefined4 *)0x0) {
LAB_100725c6:
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          puVar1 = (undefined4 *)*local_78;
          SetWindowRgn(*(HWND *)(local_78[2] + 0x20),(HRGN)0x0,1);
          local_78 = puVar1;
        }
      }
      local_8 = local_8 & 0xffffff00;
      FUN_1001e259(local_98);
      local_8 = 0xffffffff;
      FUN_1001e259(local_7c);
    }
  }
  FUN_100f90cf();
  return;
}

