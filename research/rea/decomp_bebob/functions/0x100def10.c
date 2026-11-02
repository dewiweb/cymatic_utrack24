// rea decompile_all
// name: CSmartDockingGroupGuidesManager::Create
// address: 0x100def10
// body: available
// range: 0x100def10-0x100df12c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CSmartDockingGroupGuidesManager::Create(class CWnd *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CSmartDockingGroupGuidesManager::Create(CSmartDockingGroupGuidesManager *this,CWnd *param_1)

{
  CWnd *this_00;
  HRGN pHVar1;
  AFX_SMARTDOCK_THEME AVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  HWND__ *pHVar6;
  CSmartDockingGroupGuidesManager *pCVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  tagRECT *ptVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_60;
  undefined **local_5c;
  HRGN local_58;
  tagRECT local_54;
  tagRECT local_44;
  POINT local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x100def1c;
  if (*(int *)(this + 0x1028) != 0) goto LAB_100df125;
  local_58 = (HRGN)0x0;
  local_5c = CRgn::vftable;
  local_8 = 0;
  pHVar1 = CreateRectRgn(0,0,0,0);
  CMenu::Attach((CMenu *)&local_5c,(HMENU__ *)pHVar1);
  local_60 = 4;
  pCVar7 = this + 0x8c;
  do {
    (**(code **)(*(int *)pCVar7 + 0x28))(local_60,this);
    CRgn::CombineRgn((CRgn *)&local_5c,(CRgn *)&local_5c,(CRgn *)(pCVar7 + 0x2a8),2);
    local_60 = local_60 + 1;
    pCVar7 = pCVar7 + 0x2e8;
  } while (local_60 < 9);
  uVar3 = DAT_1016815c;
  if (DAT_1016815c == 0) {
    AVar2 = GetVMTheme();
    if (AVar2 == 2) {
      uVar3 = 0x42e7;
      goto LAB_100defa4;
    }
  }
  else {
LAB_100defa4:
    *(undefined4 *)(this + 0xf44) = 0;
    *(undefined4 *)(this + 0xf48) = 1;
    CMFCToolBarImages::Load((CMFCToolBarImages *)(this + 0xf14),uVar3,(HINSTANCE__ *)0x0,0);
    CMFCToolBarImages::SetSingleImage((CMFCToolBarImages *)(this + 0xf14));
    CMFCToolBarImages::SetTransparentColor((CMFCToolBarImages *)(this + 0xf14),DAT_10168120);
  }
  local_44.left = 0;
  local_44.top = 0;
  local_44.right = 0;
  local_44.bottom = 0;
  GetRgnBox(local_58,&local_44);
  InflateRect(&local_44,-DAT_1016811c,-DAT_1016811c);
  local_34.x = local_44.left;
  local_34.y = (local_44.top + local_44.bottom) / 2;
  local_2c = (local_44.right + local_44.left) / 2;
  local_18 = local_44.top;
  local_28 = local_44.bottom;
  local_24 = local_44.right;
  local_20 = local_34.y;
  local_1c = local_2c;
  pHVar1 = CreatePolygonRgn(&local_34,4,1);
  CMenu::Attach((CMenu *)(this + 0x1020),(HMENU__ *)pHVar1);
  CRgn::CombineRgn((CRgn *)&local_5c,(CRgn *)&local_5c,(CRgn *)(this + 0x1020),2);
  local_54.left = 0;
  local_54.top = 0;
  local_54.right = 0;
  local_54.bottom = 0;
  GetRgnBox(local_58,&local_54);
  iVar5 = *(int *)(this + 4);
  uVar12 = 0;
  uVar11 = 0;
  ptVar10 = &local_54;
  uVar9 = 0x80000000;
  ppuVar8 = &PTR_1011d390;
  pcVar4 = GetSmartDockingWndClassName<2080>();
  iVar5 = (**(code **)(iVar5 + 0x58))(8,pcVar4,ppuVar8,uVar9,ptVar10,param_1,uVar11,uVar12);
  if (iVar5 != 0) {
    this_00 = (CWnd *)(this + 4);
    *(CSmartDockingGroupGuidesManager **)(this + 0x78) = this;
    CWnd::ModifyStyleEx(this_00,0,0x80000,0);
    if (DAT_10168164 == 0) {
      AVar2 = GetVMTheme();
      if (AVar2 == 2) goto LAB_100df0fc;
      if (this_00 == (CWnd *)0x0) {
        pHVar6 = (HWND__ *)0x0;
      }
      else {
        pHVar6 = *(HWND__ **)(this + 0x24);
      }
      AFX_GLOBAL_DATA::SetLayeredAttrib((AFX_GLOBAL_DATA *)&DAT_10166aa0,pHVar6,DAT_10168120,'\0',1)
      ;
    }
    else {
LAB_100df0fc:
      CSmartDockingGroupGuidesWnd::Update((CSmartDockingGroupGuidesWnd *)this_00);
    }
    *(undefined4 *)(this + 0x1030) = 1;
    *(undefined4 *)(this + 0x1028) = 1;
  }
  local_8 = 0xffffffff;
  local_5c = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_5c);
LAB_100df125:
  FUN_100f90cf();
  return;
}

