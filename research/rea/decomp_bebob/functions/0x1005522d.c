// rea decompile_all
// name: CFrameWnd::OnActivate
// address: 0x1005522d
// body: available
// range: 0x1005522d-0x10055329 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10055275 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnActivate(unsigned int,class CWnd *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameWnd::OnActivate(CFrameWnd *this,uint param_1,CWnd *param_2,int param_3)

{
  bool bVar1;
  ulong uVar2;
  CFrameWnd *pCVar3;
  CFrameWnd *pCVar4;
  LRESULT LVar5;
  int iVar6;
  int *piVar7;
  
  CWnd::Default((CWnd *)this);
  if ((param_1 == 0) && (((byte)this[0xf0] & 1) == 0)) {
    (**(code **)(*(int *)this + 0x184))(2);
  }
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  pCVar3 = this;
  if ((uVar2 & 0x40000000) == 0) {
    pCVar3 = CWnd::GetTopLevelFrame((CWnd *)this);
  }
  if (pCVar3 != (CFrameWnd *)0x0) {
    if (param_1 != 0) {
      param_2 = (CWnd *)this;
    }
    if ((param_2 == (CWnd *)0x0) ||
       ((pCVar3 != (CFrameWnd *)param_2 &&
        ((pCVar4 = CWnd::GetTopLevelFrame(param_2), pCVar3 != pCVar4 ||
         (LVar5 = SendMessageW(*(HWND *)(param_2 + 0x20),0x36d,0x40,0), LVar5 == 0)))))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    *(uint *)(pCVar3 + 0x58) = *(uint *)(pCVar3 + 0x58) & 0xffffffdf;
    if (bVar1) {
      *(uint *)(pCVar3 + 0x58) = *(uint *)(pCVar3 + 0x58) | 0x20;
    }
    NotifyFloatingWindows(this,(uint)!bVar1 * 4 + 4);
    piVar7 = *(int **)(this + 0xd0);
    if (piVar7 == (int *)0x0) {
      iVar6 = (**(code **)(*(int *)this + 0x16c))();
      piVar7 = *(int **)(iVar6 + 0xd0);
      if (piVar7 == (int *)0x0) {
        return;
      }
    }
    if ((param_1 != 0) && (param_3 == 0)) {
      (**(code **)(*piVar7 + 0x18c))(1,piVar7,piVar7);
    }
    (**(code **)(*piVar7 + 400))(param_1,this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

