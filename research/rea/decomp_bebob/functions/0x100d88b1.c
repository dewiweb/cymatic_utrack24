// rea decompile_all
// name: CScrollView::OnScroll
// address: 0x100d88b1
// body: available
// range: 0x100d88b1-0x100d899c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CScrollView::OnScroll(unsigned int,unsigned int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CScrollView::OnScroll(CScrollView *this,uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = CWnd::GetScrollPos((CWnd *)this,0);
  uVar2 = param_1 & 0xff;
  if (uVar2 == 0) {
    uVar5 = uVar1 - *(int *)(this + 0x9c);
  }
  else if (uVar2 == 1) {
    uVar5 = uVar1 + *(int *)(this + 0x9c);
  }
  else if (uVar2 == 2) {
    uVar5 = uVar1 - *(int *)(this + 0x94);
  }
  else if (uVar2 == 3) {
    uVar5 = uVar1 + *(int *)(this + 0x94);
  }
  else {
    uVar5 = param_2;
    if (uVar2 != 5) {
      if (uVar2 == 6) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar1;
        if (uVar2 == 7) {
          uVar5 = 0x7fffffff;
        }
      }
    }
  }
  uVar2 = CWnd::GetScrollPos((CWnd *)this,1);
  uVar4 = param_1 >> 8 & 0xff;
  if (uVar4 == 0) {
    param_2 = uVar2 - *(int *)(this + 0xa0);
  }
  else if (uVar4 == 1) {
    param_2 = uVar2 + *(int *)(this + 0xa0);
  }
  else if (uVar4 == 2) {
    param_2 = uVar2 - *(int *)(this + 0x98);
  }
  else if (uVar4 == 3) {
    param_2 = uVar2 + *(int *)(this + 0x98);
  }
  else if (uVar4 != 5) {
    if (uVar4 == 6) {
      param_2 = 0;
    }
    else {
      param_2 = uVar2;
      if (uVar4 == 7) {
        param_2 = 0x7fffffff;
      }
    }
  }
  iVar3 = (**(code **)(*(int *)this + 0x168))(uVar5 - uVar1,param_2 - uVar2,param_3);
  if ((iVar3 != 0) && (param_3 != 0)) {
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  return iVar3;
}

