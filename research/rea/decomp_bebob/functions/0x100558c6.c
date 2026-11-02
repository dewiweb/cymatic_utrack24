// rea decompile_all
// name: CFrameWnd::OnMenuSelect
// address: 0x100558c6
// body: available
// range: 0x100558c6-0x10055a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100558df to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnMenuSelect(unsigned int,unsigned int,struct HMENU__ *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameWnd::OnMenuSelect(CFrameWnd *this,uint param_1,uint param_2,HMENU__ *param_3)

{
  SHORT SVar1;
  CFrameWnd *pCVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  
  pCVar2 = CWnd::GetTopLevelFrame((CWnd *)this);
  if (pCVar2 == (CFrameWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if ((*(int **)(this + 0xa0) != (int *)0x0) &&
     (iVar3 = (**(code **)(**(int **)(this + 0xa0) + 0x7c))(param_1,param_2,param_3), iVar3 != 0)) {
    return;
  }
  if (param_2 == 0xffff) {
    *(uint *)(this + 0x58) = *(uint *)(this + 0x58) & 0xffffffbf;
    if (*(int *)(pCVar2 + 0x88) == 0) {
      *(undefined4 *)(this + 200) = 0xe001;
    }
    else {
      *(undefined4 *)(this + 200) = 0xe002;
    }
    SendMessageW(*(HWND *)(this + 0x20),0x362,*(WPARAM *)(this + 200),0);
    iVar3 = (**(code **)(*(int *)this + 400))();
    if (iVar3 != 0) {
      UpdateWindow(*(HWND *)(iVar3 + 0x20));
    }
    if (((param_3 == (HMENU__ *)0x0) && (((byte)this[0xf0] & 1) == 0)) &&
       ((SVar1 = GetKeyState(0x79), -1 < SVar1 &&
        ((SVar1 = GetKeyState(0x12), -1 < SVar1 && (*(int *)(this + 0x100) == 0)))))) {
      (**(code **)(*(int *)this + 0x184))(2);
    }
    goto LAB_10055a36;
  }
  if (((*(int *)(this + 0xfc) != 0) && (*(undefined4 *)(this + 0xfc) = 0, (param_2 & 0x2000) != 0))
     && (((byte)this[0xf0] & 1) == 0)) {
    (**(code **)(*(int *)this + 0x184))(2);
  }
  if ((param_1 == 0) || ((param_2 & 0x810) != 0)) {
    *(undefined4 *)(this + 200) = 0;
  }
  else {
    if (param_1 - 0xf000 < 0x1f0) {
      param_1 = (param_1 - 0xf000 >> 4) + 0xef00;
    }
    else if (0xfeff < param_1) {
      *(undefined4 *)(this + 200) = 0xef1f;
      goto LAB_10055a32;
    }
    *(uint *)(this + 200) = param_1;
  }
LAB_10055a32:
  *(uint *)(pCVar2 + 0x58) = *(uint *)(pCVar2 + 0x58) | 0x40;
LAB_10055a36:
  if (*(int *)(this + 200) != *(int *)(this + 0xcc)) {
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    if (pCVar5 != (CWnd *)0x0) {
      PostMessageW(*(HWND *)(this + 0x20),0x36a,0,0);
    }
  }
  return;
}

