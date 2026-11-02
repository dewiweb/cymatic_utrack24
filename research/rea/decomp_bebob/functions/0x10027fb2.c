// rea decompile_all
// name: CMFCToolBar::InvalidateButton
// address: 0x10027fb2
// body: available
// range: 0x10027fb2-0x1002809d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCToolBarButton * __thiscall CMFCToolBar::InvalidateButton(int)
   
   Library: Visual Studio 2010 Release */

CMFCToolBarButton * __thiscall CMFCToolBar::InvalidateButton(CMFCToolBar *this,int param_1)

{
  CMFCCustomizeButton *this_00;
  tagSIZE tVar1;
  CMFCCustomizeButton *pCVar2;
  CSize *this_01;
  int iVar3;
  int *piVar4;
  CMFCToolBarButton *pCVar5;
  LONG LVar6;
  LONG LVar7;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0xbd4))) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    (**(code **)(*(int *)this + 0x370))(param_1,&local_18);
    pCVar2 = (CMFCCustomizeButton *)FUN_100261ef(this,param_1);
    if ((pCVar2 != (CMFCCustomizeButton *)0x0) &&
       (pCVar2 == *(CMFCCustomizeButton **)(this + 0xca0))) {
      local_18.right = local_18.right + 10;
      local_18.bottom = local_18.bottom + 10;
    }
    InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
    if ((pCVar2 != (CMFCCustomizeButton *)0x0) &&
       (this_00 = *(CMFCCustomizeButton **)(this + 0xca0), pCVar2 == this_00)) {
      LVar7 = 0;
      LVar6 = 0;
      this_01 = (CSize *)CMFCCustomizeButton::GetExtraSize(this_00);
      tVar1.cy = LVar7;
      tVar1.cx = LVar6;
      iVar3 = CSize::operator!=(this_01,tVar1);
      if (iVar3 != 0) {
        piVar4 = (int *)CMFCCustomizeButton::GetExtraSize(this_00);
        InflateRect(&local_18,*piVar4,piVar4[1]);
        RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,0x401);
      }
    }
  }
  pCVar5 = (CMFCToolBarButton *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar5;
}

