// rea decompile_all
// name: CMDIChildWndEx::OnTaskbarTabThumbnailStretch
// address: 0x100207e7
// body: available
// range: 0x100207e7-0x1002093b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMDIChildWndEx::OnTaskbarTabThumbnailStretch(struct HBITMAP__
   *,class CRect const &,struct HBITMAP__ *,class CRect const &)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMDIChildWndEx::OnTaskbarTabThumbnailStretch
          (CMDIChildWndEx *this,HBITMAP__ *param_1,CRect *param_2,HBITMAP__ *param_3,CRect *param_4)

{
  HBITMAP__ *pHVar1;
  bool bVar2;
  HDC pHVar3;
  int iVar4;
  Status SVar5;
  uint uVar6;
  CImage local_84 [4];
  HBITMAP__ *local_80;
  CClientDC local_50 [4];
  HDC local_4c;
  undefined **local_3c;
  HBITMAP__ *local_38;
  undefined4 local_34;
  CDC local_2c [4];
  HDC local_28;
  HBITMAP__ *local_1c;
  int local_18;
  HGDIOBJ local_14;
  int local_8;
  undefined4 uStack_4;
  
  pHVar1 = param_3;
  uStack_4 = 0x74;
  local_8 = 0x100207f3;
  if ((param_3 == (HBITMAP__ *)0x0) || (param_1 == (HBITMAP__ *)0x0)) {
    return 0;
  }
  ATL::CImage::CImage(local_84);
  local_8 = 0;
  local_80 = pHVar1;
  ATL::CImage::UpdateBitmapInfo(local_84,0);
  CClientDC::CClientDC(local_50,(CWnd *)this);
  local_8._0_1_ = 1;
  FUN_1001714b((undefined4 *)local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  pHVar3 = CreateCompatibleDC(local_4c);
  CDC::Attach(local_2c,pHVar3);
  local_14 = SelectObject(local_28,param_1);
  pHVar3 = local_28;
  bVar2 = ATL::CImage::CInitGDIPlus::Init((CInitGDIPlus *)&DAT_1016af4c);
  if (bVar2) {
    local_3c = Gdiplus::Bitmap::vftable;
    param_1 = (HBITMAP__ *)0x0;
    iVar4 = GdipCreateBitmapFromHBITMAP(local_80,0,&param_1);
    local_38 = param_1;
    local_34 = 0;
    if (iVar4 == 0) {
      param_3 = (HBITMAP__ *)0x0;
      local_18 = GdipCreateFromHDC(pHVar3,&param_3);
      local_1c = param_3;
      iVar4 = GdipSetInterpolationMode(param_3,7);
      if (iVar4 != 0) {
        local_18 = iVar4;
      }
      SVar5 = Gdiplus::Graphics::DrawImage
                        ((Graphics *)&local_1c,(Image *)&local_3c,*(int *)param_2,
                         *(int *)(param_2 + 4),*(int *)(param_2 + 8) - *(int *)param_2,
                         *(int *)(param_2 + 0xc) - *(int *)(param_2 + 4));
      uVar6 = (uint)(SVar5 == 0);
      GdipDeleteGraphics(local_1c);
      GdipDisposeImage(param_1);
      goto LAB_10020902;
    }
    GdipDisposeImage(param_1);
  }
  uVar6 = 0;
LAB_10020902:
  if (local_14 != (HGDIOBJ)0x0) {
    SelectObject(local_28,local_14);
  }
  local_8._0_1_ = 1;
  CDC::~CDC(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  CClientDC::~CClientDC(local_50);
  ATL::CImage::~CImage(local_84);
  return uVar6;
}

