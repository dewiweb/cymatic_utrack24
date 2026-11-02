// rea decompile_all
// name: CMDIFrameWndEx::OnSetMenu
// address: 0x100225c5
// body: available
// range: 0x100225c5-0x10022655 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMDIFrameWndEx::OnSetMenu(struct HMENU__ *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMDIFrameWndEx::OnSetMenu(CMDIFrameWndEx *this,HMENU__ *param_1)

{
  COleClientItem *this_00;
  CWnd *pCVar1;
  ulong uVar2;
  CMDIChildWnd *pCVar3;
  int iVar4;
  
  this_00 = (COleClientItem *)(**(code **)(*(int *)this + 0x224))();
  if (this_00 == (COleClientItem *)0x0) {
LAB_100225e7:
    if (*(CWnd **)(this + 0x438) == (CWnd *)0x0) {
LAB_1002261e:
      if (*(int *)(this + 1000) == 0) goto LAB_1002264e;
      (**(code **)(*(int *)this + 0x70))(0);
      if (param_1 == (HMENU__ *)0x0) {
        param_1 = *(HMENU__ **)(this + 0x37c);
      }
      (**(code **)(**(int **)(this + 1000) + 0x430))(param_1,0,0);
    }
    else {
      uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 0x438));
      if ((uVar2 & 0x10000000) == 0) goto LAB_1002261e;
      (**(code **)(*(int *)this + 0x70))(0);
      pCVar3 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this,(int *)0x0);
      FUN_1006db08(*(void **)(this + 0x438),(int)pCVar3);
    }
    iVar4 = 1;
  }
  else {
    pCVar1 = COleClientItem::GetInPlaceWindow(this_00);
    if (pCVar1 == (CWnd *)0x0) goto LAB_100225e7;
LAB_1002264e:
    iVar4 = 0;
  }
  return iVar4;
}

