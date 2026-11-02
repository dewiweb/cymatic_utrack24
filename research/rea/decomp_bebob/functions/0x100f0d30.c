// rea decompile_all
// name: CMFCTasksPane::OnDrawTasks
// address: 0x100f0d30
// body: available
// range: 0x100f0d30-0x100f107e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f0dad to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTasksPane::OnDrawTasks(class CDC *,class CRect)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTasksPane::OnDrawTasks(CMFCTasksPane *this,CDC *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  __POSITION *p_Var3;
  HRGN pHVar4;
  BOOL BVar5;
  CMFCVisualManager *pCVar6;
  int iVar7;
  int *piVar8;
  undefined **local_3c;
  HRGN local_38;
  undefined4 *local_34;
  RECT *local_30;
  int *local_2c;
  CDC *local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x100f0d3c;
  local_3c = *(undefined ***)(this + 0x434);
  local_38 = *(HRGN *)(this + 0x438);
  local_28 = param_1;
  (**(code **)(*(int *)this + 0x3cc))
            (param_1,*(undefined4 *)(this + 0x42c),
             *(int *)(this + 0x430) - *(int *)(this + 0x38c) * *(int *)(this + 0x380),local_3c,
             local_38);
  iVar7 = *(int *)(this + 0x374);
  if ((((-1 < iVar7) && (iVar7 < *(int *)(this + 0x50c))) &&
      (p_Var3 = CObList::FindIndex((CObList *)(this + 0x44c),
                                   *(int *)(*(int *)(this + 0x508) + iVar7 * 4)),
      p_Var3 != (__POSITION *)0x0)) && (p_Var3 != (__POSITION *)0x0)) {
    iVar7 = *(int *)(p_Var3 + 8);
    local_38 = (HRGN)0x0;
    local_3c = CRgn::vftable;
    local_8 = 0;
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    pHVar4 = CreateRectRgnIndirect(&local_24);
    CMenu::Attach((CMenu *)&local_3c,(HMENU__ *)pHVar4);
    puVar2 = *(undefined4 **)(this + 0x46c);
    while( true ) {
      if (puVar2 == (undefined4 *)0x0) {
        CGdiObject::DeleteObject((CGdiObject *)&local_3c);
        if (*(int *)(this + 0x354) != 0) {
          InvalidateRect(*(HWND *)(this + 0x544),(RECT *)0x0,1);
          UpdateWindow(*(HWND *)(this + 0x544));
        }
        if (*(int *)(this + 0x35c) != 0) {
          if (0 < *(int *)(this + 0x380)) {
            pCVar6 = CMFCVisualManager::GetInstance();
            (**(code **)(*(int *)pCVar6 + 0x178))
                      (local_28,this + 0x40c,1,7,*(int *)(this + 0x378) < 0);
          }
          iVar7 = IsScrollDnAvailable(this);
          if (iVar7 != 0) {
            pCVar6 = CMFCVisualManager::GetInstance();
            (**(code **)(*(int *)pCVar6 + 0x178))
                      (local_28,this + 0x41c,1,0,0 < *(int *)(this + 0x378));
          }
        }
        local_8 = 0xffffffff;
        local_3c = CRgn::vftable;
        CImageList::~CImageList((CImageList *)&local_3c);
        FUN_100f90cf();
        return;
      }
      if (puVar2 == (undefined4 *)0x0) break;
      piVar8 = (int *)puVar2[2];
      local_34 = (undefined4 *)*puVar2;
      puVar2 = local_34;
      local_2c = piVar8;
      if (piVar8[1] == iVar7) {
        if (((piVar8[0xc] == 0) || (*(int *)(piVar8[2] + -0xc) == 0)) ||
           ((*(int *)(this + 0x360) != 0 &&
            ((piVar8 == *(int **)(this + 0x520) && (0 < *(int *)(this + 0x3f8))))))) {
          local_30 = (RECT *)(piVar8 + 0x11);
          BVar5 = IsRectEmpty(local_30);
          if (BVar5 == 0) {
            pCVar6 = CMFCVisualManager::GetInstance();
            (**(code **)(*(int *)pCVar6 + 0x16c))
                      (local_28,local_30->left,local_30->top,local_30->right,local_30->bottom,0);
            piVar8 = local_2c;
          }
          BVar5 = IsRectEmpty((RECT *)(piVar8 + 0xd));
          if (BVar5 == 0) {
            pCVar6 = CMFCVisualManager::GetInstance();
            (**(code **)(*(int *)pCVar6 + 0x164))
                      (local_28,piVar8,*(int **)(this + 0x518) == piVar8,0,
                       *(undefined4 *)(this + 0x350));
          }
          local_30 = (RECT *)(piVar8 + 0x11);
          BVar5 = IsRectEmpty(local_30);
          puVar2 = local_34;
          if (BVar5 == 0) {
            (**(code **)(*(int *)this + 0x3dc))(&local_24.right);
            if ((0 < local_24.right) || (0 < local_24.bottom)) {
              pCVar6 = CMFCVisualManager::GetInstance();
              (**(code **)(*(int *)pCVar6 + 0x170))
                        (local_28,local_30->left,local_30->top,local_30->right,local_30->bottom,
                         piVar8[0xb],*(int *)(piVar8[2] + -0xc) == 0);
              piVar8 = local_2c;
            }
            piVar8 = (int *)piVar8[4];
            while (puVar2 = local_34, piVar8 != (int *)0x0) {
              if (piVar8 == (int *)0x0) goto LAB_100f0dad;
              local_2c = (int *)*piVar8;
              iVar1 = piVar8[2];
              piVar8 = local_2c;
              if ((*(int *)(iVar1 + 0x34) != 0) && (*(int *)(iVar1 + 0x2c) == 0)) {
                SetRectRgn(local_38,*(int *)(iVar1 + 0xc),*(int *)(iVar1 + 0x10),
                           *(int *)(iVar1 + 0x14),*(int *)(iVar1 + 0x18));
                CDC::SelectClipRgn(local_28,(CRgn *)&local_3c);
                pCVar6 = CMFCVisualManager::GetInstance();
                (**(code **)(*(int *)pCVar6 + 0x174))
                          (local_28,iVar1,this + 0x4fc,iVar1 == *(int *)(this + 0x444),0);
                CDC::SelectClipRgn(local_28,(CRgn *)0x0);
                piVar8 = local_2c;
              }
            }
          }
        }
        else {
          BVar5 = IsRectEmpty((RECT *)(piVar8 + 0xd));
          puVar2 = local_34;
          if (BVar5 == 0) {
            pCVar6 = CMFCVisualManager::GetInstance();
            (**(code **)(*(int *)pCVar6 + 0x164))
                      (local_28,piVar8,*(int **)(this + 0x518) == piVar8,0,
                       *(undefined4 *)(this + 0x350));
            puVar2 = local_34;
          }
        }
      }
    }
  }
LAB_100f0dad:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

