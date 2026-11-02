// rea decompile_all
// name: CPreviewView::OnVScroll
// address: 0x100da300
// body: available
// range: 0x100da300-0x100da3e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100da311 to 0x100d801a CScrollView::OnVScroll (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewView::OnVScroll(unsigned int,unsigned int,class CScrollBar *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CPreviewView::OnVScroll(CPreviewView *this,uint param_1,uint param_2,CScrollBar *param_3)

{
  if (*(int *)(this + 0x130) != 0) {
    CScrollView::OnVScroll((CScrollView *)this,param_1,param_2,param_3);
    return;
  }
  if (param_1 == 0) {
    param_2 = *(int *)(this + 0x138) - 1;
  }
  else if (param_1 == 1) {
    param_2 = *(int *)(this + 0x138) + 1;
  }
  else if (param_1 == 2) {
    param_2 = *(int *)(this + 0x138) -
              (((uint)*(ushort *)(*(int *)(**(int **)(this + 0x158) + 0x94) + 0x1e) -
               (uint)*(ushort *)(*(int *)(**(int **)(this + 0x158) + 0x94) + 0x1c)) + 9) / 10;
  }
  else if (param_1 == 3) {
    param_2 = (((uint)*(ushort *)(*(int *)(**(int **)(this + 0x158) + 0x94) + 0x1e) -
               (uint)*(ushort *)(*(int *)(**(int **)(this + 0x158) + 0x94) + 0x1c)) + 9) / 10 +
              *(int *)(this + 0x138);
  }
  else if (param_1 != 4) {
    if (param_1 == 6) {
      param_2 = (uint)*(ushort *)(*(int *)(**(int **)(this + 0x158) + 0x94) + 0x1c);
    }
    else {
      if (param_1 != 7) {
        return;
      }
      param_2 = (uint)*(ushort *)(*(int *)(**(int **)(this + 0x158) + 0x94) + 0x1e);
    }
  }
  SetCurrentPage(this,param_2,1);
  return;
}

