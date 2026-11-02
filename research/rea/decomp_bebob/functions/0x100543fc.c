// rea decompile_all
// name: CFrameWnd::PreTranslateMessage
// address: 0x100543fc
// body: available
// range: 0x100543fc-0x10054589 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005440c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CFrameWnd::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CFrameWnd::PreTranslateMessage(CFrameWnd *this,tagMSG *param_1)

{
  UINT UVar1;
  int iVar2;
  HACCEL hAccTable;
  
  if (param_1 == (tagMSG *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if ((param_1->message == 0x201) || (param_1->message == 0xa1)) {
    AfxCancelModes(param_1->hwnd);
  }
  if (((((byte)this[0xf0] & 4) != 0) && (param_1->message == 0x105)) && (param_1->wParam == 0x79)) {
    (**(code **)(*(int *)this + 0x184))(1);
  }
  if (((byte)this[0xf0] & 2) != 0) {
    if ((param_1->message == 0x105) && (param_1->wParam == 0x12)) {
      (**(code **)(*(int *)this + 0x184))((*(int *)(this + 0xf4) == 1) + '\x01');
    }
    else if ((param_1->message == 0x106) && (*(int *)(this + 0xf4) == 2)) {
      (**(code **)(*(int *)this + 0x184))(1);
      *(undefined4 *)(this + 0xfc) = 1;
    }
  }
  if ((((byte)this[0xf0] & 1) == 0) &&
     ((((UVar1 = param_1->message, UVar1 == 0x100 && (param_1->wParam == 0x1b)) ||
       ((UVar1 == 0x201 || (UVar1 == 0x204)))) ||
      (((UVar1 == 0xa1 || (UVar1 == 0xa4)) && (param_1->wParam != 5)))))) {
    (**(code **)(*(int *)this + 0x184))(2);
  }
  UVar1 = param_1->message;
  if ((UVar1 == 0xa1) || (UVar1 == 0xa4)) {
    *(uint *)(this + 0x100) = (uint)(param_1->wParam == 5);
  }
  else if (((UVar1 == 0xa2) || (UVar1 == 0xa5)) || ((UVar1 == 0x202 || (UVar1 == 0x205)))) {
    *(undefined4 *)(this + 0x100) = 0;
  }
  iVar2 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  if (iVar2 == 0) {
    if (*(int **)(this + 0xa0) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(this + 0xa0) + 0x54))(param_1);
      if (iVar2 != 0) goto LAB_1005453b;
    }
    if ((0xff < param_1->message) && (param_1->message < 0x10a)) {
      hAccTable = (HACCEL)(**(code **)(*(int *)this + 0x1a4))();
      if (hAccTable != (HACCEL)0x0) {
        iVar2 = TranslateAcceleratorW(*(HWND *)(this + 0x20),hAccTable,param_1);
        if (iVar2 != 0) goto LAB_1005453b;
      }
    }
    iVar2 = 0;
  }
  else {
LAB_1005453b:
    iVar2 = 1;
  }
  return iVar2;
}

