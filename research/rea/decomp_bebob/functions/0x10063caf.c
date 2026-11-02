// rea decompile_all
// name: CMDIClientAreaWnd::DrawNewGroupRect
// address: 0x10063caf
// body: available
// range: 0x10063caf-0x10063d74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: void __thiscall CMDIClientAreaWnd::DrawNewGroupRect(struct tagRECT const *,struct
   tagRECT const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMDIClientAreaWnd::DrawNewGroupRect(CMDIClientAreaWnd *this,tagRECT *param_1,tagRECT *param_2)

{
  tagSIZE tVar1;
  tagSIZE tVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CWindowDC local_64 [24];
  LONG local_4c;
  tagRECT *local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x10063cbb;
  local_48 = param_2;
  pHVar3 = GetDesktopWindow();
  pCVar4 = CWnd::FromHandle(pHVar3);
  CWindowDC::CWindowDC(local_64,pCVar4);
  local_8 = 0;
  local_4c = 4;
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  SetRectEmpty(&local_34);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  SetRectEmpty(&local_24);
  if (param_1 != (tagRECT *)0x0) {
    CopyRect(&local_44,param_1);
    local_34.left = local_44.left;
    local_34.top = local_44.top;
    local_34.right = local_44.right;
    local_34.bottom = local_44.bottom;
  }
  if (local_48 != (RECT *)0x0) {
    CopyRect(&local_44,local_48);
    local_24.left = local_44.left;
    local_24.top = local_44.top;
    local_24.right = local_44.right;
    local_24.bottom = local_44.bottom;
  }
  tVar1.cy = local_4c;
  tVar1.cx = 4;
  tVar2.cy = local_4c;
  tVar2.cx = 4;
  CDC::DrawDragRect((CDC *)local_64,&local_34,tVar1,&local_24,tVar2,(CBrush *)0x0,(CBrush *)0x0);
  local_8 = 0xffffffff;
  CWindowDC::~CWindowDC(local_64);
  FUN_100f90cf();
  return;
}

