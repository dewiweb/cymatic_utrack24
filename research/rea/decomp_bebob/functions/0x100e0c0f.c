// rea decompile_all
// name: CMFCImagePaintArea::DrawPixel
// address: 0x100e0c0f
// body: available
// range: 0x100e0c0f-0x100e0d35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCImagePaintArea::DrawPixel(struct tagPOINT)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCImagePaintArea::DrawPixel(CMFCImagePaintArea *this,tagPOINT param_1)

{
  void *pvVar1;
  CGdiObject *pCVar2;
  ulong color;
  HWND pHVar3;
  CWnd *pCVar4;
  CClientDC local_50 [20];
  LONG local_3c;
  LONG local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x100e0c1b;
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_34);
  InflateRect(&local_34,-1,-1);
  local_3c = param_1.x;
  local_38 = param_1.y;
  ScreenToBitmap(this,(CPoint *)&local_3c);
  local_24.top = *(int *)(this + 0xc0) * local_38 + local_34.top;
  local_24.left = *(int *)(this + 0xbc) * local_3c + local_34.left;
  local_24.bottom = *(int *)(this + 0xc0) + local_24.top;
  local_24.right = *(int *)(this + 0xbc) + local_24.left;
  InflateRect(&local_24,-1,-1);
  CClientDC::CClientDC(local_50,(CWnd *)this);
  local_8 = 0;
  CDC::FillSolidRect((CDC *)local_50,&local_24,*(ulong *)(this + 0x84));
  pvVar1 = (void *)0x0;
  if (*(int *)(this + 0xa0) != 0) {
    pvVar1 = *(void **)(*(int *)(this + 0xa0) + 4);
  }
  pCVar2 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x8c),pvVar1);
  color = CMFCToolBarImages::MapToSysColor(*(ulong *)(this + 0x84),1);
  SetPixel(*(HDC *)(this + 0x8c),local_3c,local_38,color);
  pvVar1 = (void *)0x0;
  if (pCVar2 != (CGdiObject *)0x0) {
    pvVar1 = *(void **)(pCVar2 + 4);
  }
  CDC::SelectGdiObject(*(HDC__ **)(this + 0x8c),pvVar1);
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  InvalidateRect(*(HWND *)(pCVar4 + 0x20),(RECT *)(this + 0x74),1);
  local_8 = 0xffffffff;
  CClientDC::~CClientDC(local_50);
  FUN_100f90cf();
  return;
}

