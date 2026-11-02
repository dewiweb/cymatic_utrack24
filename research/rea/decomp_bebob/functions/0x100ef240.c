// rea decompile_all
// name: CMFCTasksPane::OnVScroll
// address: 0x100ef240
// body: available
// range: 0x100ef240-0x100ef307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPane::OnVScroll(unsigned int,unsigned int,class CScrollBar
   *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCTasksPane::OnVScroll(CMFCTasksPane *this,uint param_1,uint param_2,CScrollBar *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x380);
  switch(param_1) {
  case 0:
    param_2 = iVar1 - 1;
    break;
  case 1:
    param_2 = iVar1 + 1;
    break;
  case 2:
    param_2 = iVar1 - *(int *)(this + 0x388);
    break;
  case 3:
    *(int *)(this + 0x380) = *(int *)(this + 0x388) + iVar1;
    goto LAB_100ef29c;
  case 4:
  case 5:
    break;
  case 6:
    *(undefined4 *)(this + 0x380) = 0;
    goto LAB_100ef29c;
  case 7:
    param_2 = *(uint *)(this + 900);
    break;
  default:
    goto switchD_100ef25d_default;
  }
  *(uint *)(this + 0x380) = param_2;
LAB_100ef29c:
  iVar2 = *(int *)(this + 0x380);
  iVar4 = iVar2;
  if (iVar2 < 0) {
    iVar4 = 0;
  }
  iVar3 = (*(int *)(this + 900) - *(int *)(this + 0x388)) + 1;
  if ((iVar4 < iVar3) && (iVar3 = iVar2, iVar2 < 0)) {
    iVar3 = 0;
  }
  *(int *)(this + 0x380) = iVar3;
  if (iVar3 != iVar1) {
    CWnd::SetScrollPos((CWnd *)this,1,iVar3,1);
    AdjustScroll(this);
    (**(code **)(*(int *)this + 0x3e4))(0);
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
switchD_100ef25d_default:
  return;
}

