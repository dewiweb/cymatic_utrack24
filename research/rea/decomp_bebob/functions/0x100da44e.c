// rea decompile_all
// name: CPreviewView::DoZoom
// address: 0x100da44e
// body: available
// range: 0x100da44e-0x100da5de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewView::DoZoom(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPreviewView::DoZoom(CPreviewView *this,int param_1,int param_3,int param_4)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int local_28;
  tagSCROLLINFO local_24;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x130) == 0) {
    *(undefined4 *)(this + 0x13c) = *(undefined4 *)(this + 300);
    ShowScrollBar(*(HWND *)(this + 0x20),0,0);
    uVar2 = *(ushort *)(*(int *)(**(int **)(this + 0x158) + 0x94) + 0x1e);
    if ((0x7fff < uVar2) ||
       (local_28 = 1,
       0x7fff < (uint)uVar2 - (uint)*(ushort *)(*(int *)(**(int **)(this + 0x158) + 0x94) + 0x1c)))
    {
      local_28 = 0;
    }
    ShowScrollBar(*(HWND *)(this + 0x20),1,local_28);
    if (local_28 != 0) {
      local_24.fMask = 3;
      local_24.nMin = (int)*(ushort *)(*(int *)(**(int **)(this + 0x158) + 0x94) + 0x1c);
      local_24.nMax = (int)*(ushort *)(*(int *)(**(int **)(this + 0x158) + 0x94) + 0x1e);
      local_24.nPage = 1;
      iVar3 = CWnd::SetScrollInfo((CWnd *)this,1,&local_24,0);
      if (iVar3 == 0) {
        CWnd::SetScrollRange((CWnd *)this,1,local_24.nMin,local_24.nMax,0);
      }
    }
    SetCurrentPage(this,*(uint *)(this + 0x138),1);
  }
  else {
    iVar3 = *(int *)(this + 0xd4);
    iVar4 = param_1 * 0x28;
    *(undefined4 *)(this + 0x13c) = 1;
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar3 + 0x20 + iVar4);
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar3 + 0x24 + iVar4);
    iVar3 = *(int *)(this + 0xd4);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 0x10 + iVar4);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar3 + 0x14 + iVar4);
    SetCurrentPage(this,*(int *)(this + 0x138) + param_1,0);
    SetScaledSize(this,0);
    piVar1 = (int *)(iVar4 + 0x18 + *(int *)(this + 0xd4));
    iVar3 = MulDiv(param_3,*piVar1,piVar1[1]);
    iVar4 = MulDiv(param_4,*piVar1,piVar1[1]);
    CScrollView::CenterOnPoint
              ((CScrollView *)this,iVar3 + **(int **)(this + 0xd4),
               iVar4 + (*(int **)(this + 0xd4))[1]);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

