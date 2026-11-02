// rea decompile_all
// name: CSmartDockingGroupGuidesWnd::Update
// address: 0x100dea09
// body: available
// range: 0x100dea09-0x100deb64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CSmartDockingGroupGuidesWnd::Update(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CSmartDockingGroupGuidesWnd::Update(CSmartDockingGroupGuidesWnd *this)

{
  AFX_SMARTDOCK_THEME AVar1;
  HBITMAP__ *pHVar2;
  HDC pHVar3;
  void *pvVar4;
  CClientDC local_6c [4];
  HDC local_68;
  POINT local_58;
  CDC local_50 [4];
  HDC__ *local_4c;
  CGdiObject *local_40;
  void *local_3c;
  SIZE local_38;
  undefined **local_30;
  void *local_2c;
  BLENDFUNCTION local_28;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x100dea15;
  if (DAT_10168164 == 0) {
    AVar1 = GetVMTheme();
    if (AVar1 != 2) {
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
      goto LAB_100deb5f;
    }
  }
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  local_38.cy = local_24.bottom - local_24.top;
  local_38.cx = local_24.right - local_24.left;
  local_58.x = 0;
  local_58.y = 0;
  local_3c = (void *)0x0;
  pHVar2 = CDrawingManager::CreateBitmap_32((CSize *)&local_38,&local_3c);
  if (pHVar2 != (HBITMAP__ *)0x0) {
    local_2c = (void *)0x0;
    local_30 = CBitmap::vftable;
    local_8 = 0;
    CMenu::Attach((CMenu *)&local_30,(HMENU__ *)pHVar2);
    CClientDC::CClientDC(local_6c,(CWnd *)this);
    local_8._0_1_ = 1;
    FUN_1001714b((undefined4 *)local_50);
    local_8._0_1_ = 2;
    pHVar3 = CreateCompatibleDC(local_68);
    CDC::Attach(local_50,pHVar3);
    local_40 = CDC::SelectGdiObject(local_4c,local_2c);
    CSmartDockingGroupGuidesManager::DrawCentralGroupGuides
              (*(CSmartDockingGroupGuidesManager **)(this + 0x74),local_50,this + 0x78,this + 0x80,
               local_24.left,local_24.top,local_24.right,local_24.bottom);
    pvVar4 = (void *)0x0;
    local_28.BlendOp = '\0';
    local_28.BlendFlags = '\0';
    local_28.SourceConstantAlpha = 0xff;
    local_28.AlphaFormat = '\x01';
    UpdateLayeredWindow(*(HWND *)(this + 0x20),(HDC)0x0,(POINT *)0x0,&local_38,local_4c,&local_58,0,
                        &local_28,2);
    if (local_40 != (CGdiObject *)0x0) {
      pvVar4 = *(void **)(local_40 + 4);
    }
    CDC::SelectGdiObject(local_4c,pvVar4);
    local_8._0_1_ = 1;
    CDC::~CDC(local_50);
    local_8 = (uint)local_8._1_3_ << 8;
    CClientDC::~CClientDC(local_6c);
    local_8 = 0xffffffff;
    local_30 = CBitmap::vftable;
    CImageList::~CImageList((CImageList *)&local_30);
  }
LAB_100deb5f:
  FUN_100f90cf();
  return;
}

