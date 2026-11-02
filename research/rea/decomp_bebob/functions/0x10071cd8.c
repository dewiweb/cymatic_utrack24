// rea decompile_all
// name: CPaneDivider::StopTracking
// address: 0x10071cd8
// body: available
// range: 0x10071cd8-0x10071db2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CPaneDivider::StopTracking(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneDivider::StopTracking(CPaneDivider *this,int param_1)

{
  LPRECT lprc;
  tagSIZE tVar1;
  tagSIZE tVar2;
  int iVar3;
  CWindowDC local_50 [20];
  int local_3c;
  int local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x10071ce4;
  if (this[0x118] != (CPaneDivider)0x0) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_24);
    lprc = (LPRECT)(this + 0x124);
    local_38 = *(int *)(this + 0x128) - local_24.top;
    local_3c = lprc->left - local_24.left;
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    SetRectEmpty(&local_34);
    CWindowDC::CWindowDC(local_50,(CWnd *)0x0);
    iVar3 = *(int *)(this + 0x108) / 2;
    local_8 = 0;
    tVar1.cy = iVar3;
    tVar1.cx = iVar3;
    tVar2.cy = iVar3;
    tVar2.cx = iVar3;
    CDC::DrawDragRect((CDC *)local_50,&local_34,tVar1,lprc,tVar2,(CBrush *)0x0,(CBrush *)0x0);
    if (param_1 != 0) {
      (**(code **)(*(int *)this + 0x268))(&local_3c,1);
    }
    SetRectEmpty(lprc);
    ReleaseCapture();
    this[0x118] = (CPaneDivider)0x0;
    if (*(int **)(this + 0x158) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x158) + 0x80))(0);
    }
    local_8 = 0xffffffff;
    CWindowDC::~CWindowDC(local_50);
  }
  FUN_100f90cf();
  return;
}

