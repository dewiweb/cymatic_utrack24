// rea decompile_all
// name: CMFCImagePaintArea::FloodFill
// address: 0x100e18b0
// body: available
// range: 0x100e18b0-0x100e19a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e18cf to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCImagePaintArea::FloodFill(class CPoint const &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCImagePaintArea::FloodFill(CMFCImagePaintArea *this,CPoint *param_1)

{
  int iVar1;
  COLORREF color;
  void *pvVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  undefined **local_20 [2];
  CPen *local_18;
  CGdiObject *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x100e18bc;
  iVar1 = *(int *)(this + 0xa0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  pvVar2 = (void *)0x0;
  if (iVar1 != 0) {
    pvVar2 = *(void **)(iVar1 + 4);
  }
  local_14 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x8c),pvVar2);
  CBrush::CBrush((CBrush *)local_20,*(ulong *)(this + 0x84));
  local_8 = 0;
  local_18 = CDC::SelectObject((CDC *)(this + 0x88),(CPen *)local_20);
  color = GetPixel(*(HDC *)(this + 0x8c),*(int *)param_1,*(int *)(param_1 + 4));
  ExtFloodFill(*(HDC *)(this + 0x8c),*(int *)param_1,*(int *)(param_1 + 4),color,1);
  pvVar2 = (void *)0x0;
  if (local_14 != (CGdiObject *)0x0) {
    pvVar2 = *(void **)(local_14 + 4);
  }
  CDC::SelectGdiObject(*(HDC__ **)(this + 0x8c),pvVar2);
  CDC::SelectObject((CDC *)(this + 0x88),local_18);
  InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
  UpdateWindow(*(HWND *)(this + 0x20));
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  InvalidateRect(*(HWND *)(pCVar4 + 0x20),(RECT *)(this + 0x74),1);
  local_8 = 0xffffffff;
  local_20[0] = CBrush::vftable;
  CImageList::~CImageList((CImageList *)local_20);
  return;
}

