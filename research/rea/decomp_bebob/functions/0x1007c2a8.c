// rea decompile_all
// name: CDockablePane::OnTrackCaptionButtons
// address: 0x1007c2a8
// body: available
// range: 0x1007c2a8-0x1007c375 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CDockablePane::OnTrackCaptionButtons(class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockablePane::OnTrackCaptionButtons(CDockablePane *this,LONG param_2,LONG param_3)

{
  int iVar1;
  CMFCCaptionButton *pCVar2;
  int iVar3;
  HWND pHVar4;
  
  if (DAT_1016843c == 0) {
    iVar1 = *(int *)(this + 0x344);
    pCVar2 = (CMFCCaptionButton *)FUN_1007ac48(this,param_2,param_3);
    if (pCVar2 == (CMFCCaptionButton *)0x0) {
      *(undefined4 *)(this + 0x344) = 0;
    }
    else {
      iVar3 = FUN_100b954e((int)pCVar2);
      *(int *)(this + 0x344) = iVar3;
      if ((*(int *)(this + 0x348) == 0) || (*(int *)(this + 0x348) == iVar3)) {
        *(undefined4 *)(pCVar2 + 8) = 1;
      }
    }
    if (*(int *)(this + 0x344) != iVar1) {
      RedrawButton(this,pCVar2);
      pCVar2 = (CMFCCaptionButton *)FUN_1007ad08(this,iVar1);
      if (pCVar2 != (CMFCCaptionButton *)0x0) {
        *(undefined4 *)(pCVar2 + 8) = 0;
        RedrawButton(this,pCVar2);
      }
    }
    if (*(int *)(this + 0x348) == 0) {
      if (iVar1 == 0) {
        if (*(int *)(this + 0x344) != 0) {
          pHVar4 = SetCapture(*(HWND *)(this + 0x20));
          CWnd::FromHandle(pHVar4);
          *(undefined4 *)(this + 0x34c) = 1;
        }
      }
      else if (*(int *)(this + 0x344) == 0) {
        ReleaseCapture();
        *(undefined4 *)(this + 0x34c) = 0;
      }
    }
  }
  return;
}

