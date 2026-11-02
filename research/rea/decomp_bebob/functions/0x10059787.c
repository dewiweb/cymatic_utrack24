// rea decompile_all
// name: CMDIChildWnd::PreTranslateMessage
// address: 0x10059787
// body: available
// range: 0x10059787-0x100597f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMDIChildWnd::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMDIChildWnd::PreTranslateMessage(CMDIChildWnd *this,tagMSG *param_1)

{
  int iVar1;
  HACCEL hAccTable;
  CMDIFrameWnd *pCVar2;
  
  if ((param_1->message == 0x201) || (param_1->message == 0xa1)) {
    AfxCancelModes(param_1->hwnd);
  }
  iVar1 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  if (iVar1 == 0) {
    if ((0xff < param_1->message) && (param_1->message < 0x10a)) {
      hAccTable = (HACCEL)(**(code **)(*(int *)this + 0x1a4))();
      if (hAccTable != (HACCEL)0x0) {
        pCVar2 = GetMDIFrame(this);
        iVar1 = TranslateAcceleratorW(*(HWND *)(pCVar2 + 0x20),hAccTable,param_1);
        if (iVar1 != 0) goto LAB_100597b7;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100597b7:
    iVar1 = 1;
  }
  return iVar1;
}

