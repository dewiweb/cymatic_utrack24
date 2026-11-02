// rea decompile_all
// name: CPreviewView::OnDraw
// address: 0x100da8cd
// body: available
// range: 0x100da8cd-0x100dad4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CPreviewView::OnDraw(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPreviewView::OnDraw(CPreviewView *this,CDC *param_1)

{
  uint uVar1;
  CDC *pCVar2;
  uint uVar3;
  DWORD DVar4;
  HPEN pHVar5;
  undefined4 uVar6;
  int xRight;
  int *piVar7;
  HBRUSH hbr;
  tagRECT *ptVar8;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  CDC *local_68;
  undefined4 local_64;
  undefined **local_60;
  undefined4 local_5c;
  undefined **local_58;
  undefined4 local_54;
  tagRECT *local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  tagPOINT local_3c;
  RECT local_34;
  tagRECT local_24;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x80;
  local_8 = 0x100da8dc;
  local_68 = param_1;
  if ((*(int *)(this + 0xb0) != 0) && (*(int *)(this + 0xbc) != 0)) {
    CDC::GetViewportOrg(param_1);
    local_5c = 0;
    local_60 = CPen::vftable;
    local_8 = 0;
    DVar4 = GetSysColor(6);
    pHVar5 = CreatePen(0,2,DVar4);
    CMenu::Attach((CMenu *)&local_60,(HMENU__ *)pHVar5);
    local_54 = 0;
    local_58 = CPen::vftable;
    local_8 = CONCAT31(local_8._1_3_,1);
    DVar4 = GetSysColor(0x10);
    pHVar5 = CreatePen(0,3,DVar4);
    CMenu::Attach((CMenu *)&local_58,(HMENU__ *)pHVar5);
    *(undefined4 *)(*(int *)(this + 0x158) + 0x10) = 1;
    local_40 = 0;
    if (*(int *)(this + 0x13c) != 0) {
      local_4c = 0;
      do {
        uVar3 = local_40;
        local_64 = (**(code **)(*(int *)(this + 0xb8) + 0x1c))();
        if (param_1 == (CDC *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(param_1 + 4);
        }
        (**(code **)(**(int **)(this + 0xb4) + 0x10))(uVar6);
        *(uint *)(*(int *)(this + 0x158) + 0x14) = *(int *)(this + 0x138) + uVar3;
        uVar1 = *(uint *)(this + 0x138);
        if (((uVar1 <= uVar1 + uVar3) && (uVar3 <= uVar3 + uVar1)) &&
           (uVar3 + uVar1 <= (uint)*(ushort *)(*(int *)(**(int **)(this + 0x158) + 0x94) + 0x1e))) {
          (**(code **)(**(int **)(this + 0xb0) + 0x184))
                    (*(undefined4 *)(this + 0xb4),*(int **)(this + 0x158));
        }
        local_50 = (tagRECT *)GetDeviceCaps(*(HDC *)(*(int *)(this + 0xb4) + 8),10);
        xRight = GetDeviceCaps(*(HDC *)(*(int *)(this + 0xb4) + 8),8);
        SetRect((LPRECT)(*(int *)(this + 0x158) + 0x24),0,0,xRight,(int)local_50);
        DPtoLP(*(HDC *)(*(int *)(this + 0xb4) + 8),(LPPOINT)(*(int *)(this + 0x158) + 0x24),2);
        (**(code **)(*(int *)param_1 + 0x1c))();
        ptVar8 = (tagRECT *)(local_4c + *(int *)(this + 0xd4));
        local_50 = ptVar8;
        if ((ptVar8[1].right == 0) &&
           ((**(code **)(*(int *)this + 0x1b8))(local_40), *(int *)(this + 0x130) != 0)) {
          piVar7 = (int *)CScrollView::GetDeviceScrollPosition((CScrollView *)this);
          local_44 = -piVar7[1];
          local_48 = -*piVar7;
          if (*(int *)(this + 0xa4) != 0) {
            local_24.left = 0;
            local_24.top = 0;
            local_24.right = 0;
            local_24.bottom = 0;
            GetClientRect(*(HWND *)(this + 0x20),&local_24);
            if (*(int *)(this + 0x8c) < local_24.right - local_24.left) {
              local_48 = ((local_24.right - local_24.left) - *(int *)(this + 0x8c)) / 2;
            }
            if (*(int *)(this + 0x90) < local_24.bottom - local_24.top) {
              local_44 = ((local_24.bottom - local_24.top) - *(int *)(this + 0x90)) / 2;
            }
          }
        }
        (**(code **)(*(int *)param_1 + 0x34))(1);
        (**(code **)(*(int *)param_1 + 0x38))(local_80,local_48,local_44);
        CDC::SetWindowOrg(param_1,(int)local_70,0);
        (**(code **)(*(int *)param_1 + 0x24))(5);
        CDC::SelectObject(param_1,(CPen *)&local_60);
        CDC::Rectangle(param_1,ptVar8);
        CDC::SelectObject(param_1,(CPen *)&local_58);
        CDC::MoveTo(param_1,(int)local_88,ptVar8->right + 1);
        CDC::LineTo(param_1,ptVar8->right + 1,ptVar8->bottom + 1);
        CDC::MoveTo(param_1,(int)local_78,ptVar8->left + 3);
        CDC::LineTo(param_1,ptVar8->right + 1,ptVar8->bottom + 1);
        local_34.left = ptVar8->left + 1;
        local_34.top = ptVar8->top + 1;
        local_34.right = ptVar8->right + -2;
        local_34.bottom = ptVar8->bottom + -2;
        hbr = GetStockObject(0);
        pCVar2 = local_68;
        FillRect(*(HDC *)(local_68 + 4),&local_34,hbr);
        (**(code **)(*(int *)pCVar2 + 0x20))(0xffffffff);
        uVar3 = local_40;
        if (((*(int **)(this + 0x158))[4] == 0) ||
           ((uint)*(ushort *)(*(int *)(**(int **)(this + 0x158) + 0x94) + 0x1e) <
            *(int *)(this + 0x138) + local_40)) {
          (**(code **)(**(int **)(this + 0xb4) + 0x18))();
          (**(code **)(*(int *)(this + 0xb8) + 0x20))(local_64);
          if ((uVar3 == 0) && (1 < *(uint *)(this + 0x138))) {
            SetCurrentPage(this,*(uint *)(this + 0x138) - 1,1);
          }
          break;
        }
        local_40 = local_40 + 1;
        (**(code **)(*(int *)this + 0x1bc))(*(int *)(this + 0x138),local_40);
        ptVar8 = local_50;
        CPreviewDC::SetScaleRatio
                  (*(CPreviewDC **)(this + 0xb4),local_50[1].right,local_50[1].bottom);
        local_3c.x = 0;
        local_3c.y = 0;
        (**(code **)(**(int **)(this + 0xb4) + 0x74))(0xd,0,0,&local_3c);
        CPreviewDC::PrinterDPtoScreenDP(*(CPreviewDC **)(this + 0xb4),&local_3c);
        local_3c.x = local_3c.x + ptVar8->left + 1 + local_48;
        local_3c.y = local_3c.y + ptVar8->top + 1 + local_44;
        CPreviewDC::SetTopLeftOffset(*(CPreviewDC **)(this + 0xb4),local_3c.x,local_3c.y);
        CPreviewDC::ClipToPage(*(CPreviewDC **)(this + 0xb4));
        (**(code **)(**(int **)(this + 0xb0) + 0x1a4))
                  (*(undefined4 *)(this + 0xb4),*(undefined4 *)(this + 0x158));
        (**(code **)(**(int **)(this + 0xb4) + 0x18))();
        (**(code **)(*(int *)(this + 0xb8) + 0x20))(local_64);
        local_4c = local_4c + 0x28;
        param_1 = local_68;
      } while (local_40 < *(uint *)(this + 0x13c));
    }
    CGdiObject::DeleteObject((CGdiObject *)&local_60);
    CGdiObject::DeleteObject((CGdiObject *)&local_58);
    local_8 = local_8 & 0xffffff00;
    local_58 = CPen::vftable;
    CImageList::~CImageList((CImageList *)&local_58);
    local_8 = 0xffffffff;
    local_60 = CPen::vftable;
    CImageList::~CImageList((CImageList *)&local_60);
  }
  FUN_100f90cf();
  return;
}

