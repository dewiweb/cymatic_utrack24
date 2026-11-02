// rea decompile_all
// name: CMDIFrameWnd::PreTranslateMessage
// address: 0x1005960a
// body: available
// range: 0x1005960a-0x100596dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMDIFrameWnd::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMDIFrameWnd::PreTranslateMessage(CMDIFrameWnd *this,tagMSG *param_1)

{
  int iVar1;
  CMDIChildWnd *pCVar2;
  BOOL BVar3;
  
  if ((param_1->message == 0x201) || (param_1->message == 0xa1)) {
    AfxCancelModes(param_1->hwnd);
  }
  iVar1 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  if (((iVar1 == 0) &&
      ((*(int *)(this + 0xa0) == 0 ||
       (iVar1 = (**(code **)(**(int **)(this + 0xa0) + 0x54))(param_1), iVar1 == 0)))) &&
     ((pCVar2 = MDIGetActive(this,(int *)0x0), pCVar2 == (CMDIChildWnd *)0x0 ||
      (iVar1 = (**(code **)(*(int *)pCVar2 + 0x10c))(param_1), iVar1 == 0)))) {
    if (((param_1->message < 0x100) || (0x109 < param_1->message)) ||
       (((*(HACCEL *)(this + 0x80) == (HACCEL)0x0 ||
         (iVar1 = TranslateAcceleratorW(*(HWND *)(this + 0x20),*(HACCEL *)(this + 0x80),param_1),
         iVar1 == 0)) &&
        ((iVar1 = FUN_10054804((int)this), iVar1 != 0 ||
         (((param_1->message != 0x100 && (param_1->message != 0x104)) ||
          (BVar3 = TranslateMDISysAccel(*(HWND *)(this + 0x110),param_1), BVar3 == 0)))))))) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}

