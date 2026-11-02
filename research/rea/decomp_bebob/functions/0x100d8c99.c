// rea decompile_all
// name: CScrollView::SetScrollSizes
// address: 0x100d8c99
// body: available
// range: 0x100d8c99-0x100d8e0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CScrollView::SetScrollSizes(int,struct tagSIZE,struct tagSIZE const
   &,struct tagSIZE const &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CScrollView::SetScrollSizes
          (CScrollView *this,int param_1,tagSIZE param_2,tagSIZE *param_3,tagSIZE *param_4)

{
  LPPOINT lppt;
  LONG LVar1;
  CWindowDC local_28 [8];
  HDC local_20;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x100d8ca5;
  local_14 = *(int *)(this + 0x80);
  *(int *)(this + 0x80) = param_1;
  *(LONG *)(this + 0x84) = param_2.cx;
  *(LONG *)(this + 0x88) = param_2.cy;
  CWindowDC::CWindowDC(local_28,(CWnd *)0x0);
  local_8 = 0;
  CDC::SetMapMode((CDC *)local_28,*(int *)(this + 0x80));
  ((LPPOINT)(this + 0x8c))->x = *(LONG *)(this + 0x84);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(this + 0x88);
  LPtoDP(local_20,(LPPOINT)(this + 0x8c),1);
  LVar1 = param_3->cy;
  lppt = (LPPOINT)(this + 0x94);
  lppt->x = param_3->cx;
  *(LONG *)(this + 0x98) = LVar1;
  LPtoDP(local_20,lppt,1);
  LVar1 = param_4->cy;
  ((LPPOINT)(this + 0x9c))->x = param_4->cx;
  *(LONG *)(this + 0xa0) = LVar1;
  LPtoDP(local_20,(LPPOINT)(this + 0x9c),1);
  if (*(int *)(this + 0x90) < 0) {
    *(int *)(this + 0x90) = -*(int *)(this + 0x90);
  }
  if (*(int *)(this + 0x98) < 0) {
    *(int *)(this + 0x98) = -*(int *)(this + 0x98);
  }
  if (*(int *)(this + 0xa0) < 0) {
    *(int *)(this + 0xa0) = -*(int *)(this + 0xa0);
  }
  local_8 = 0xffffffff;
  CWindowDC::~CWindowDC(local_28);
  if (lppt->x == 0) {
    lppt->x = *(int *)(this + 0x8c) / 10;
  }
  if (*(int *)(this + 0x98) == 0) {
    *(int *)(this + 0x98) = *(int *)(this + 0x90) / 10;
  }
  if (*(int *)(this + 0x9c) == 0) {
    *(int *)(this + 0x9c) = lppt->x / 10;
  }
  if (*(int *)(this + 0xa0) == 0) {
    *(int *)(this + 0xa0) = *(int *)(this + 0x98) / 10;
  }
  if (*(int *)(this + 0x20) != 0) {
    UpdateBars(this);
    if (local_14 != *(int *)(this + 0x80)) {
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    }
  }
  return;
}

