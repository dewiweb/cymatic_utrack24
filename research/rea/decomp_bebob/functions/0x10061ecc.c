// rea decompile_all
// name: CFrameImpl::OnTrackCaptionButtons
// address: 0x10061ecc
// body: available
// range: 0x10061ecc-0x10061f79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::OnTrackCaptionButtons(class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CFrameImpl::OnTrackCaptionButtons(CFrameImpl *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  CMFCCaptionButtonEx *pCVar3;
  undefined4 uVar4;
  HWND pHVar5;
  
  if (DAT_1016843c == 0) {
    iVar1 = *(int *)(this + 0x10);
    uVar2 = OnNcHitTest(this,param_2,param_3);
    pCVar3 = (CMFCCaptionButtonEx *)FUN_100600e1(this,uVar2);
    if ((pCVar3 == (CMFCCaptionButtonEx *)0x0) || (*(int *)(pCVar3 + 0x10) == 0)) {
      *(undefined4 *)(this + 0x10) = 0;
    }
    else {
      uVar4 = FUN_100b954e((int)pCVar3);
      *(undefined4 *)(this + 0x10) = uVar4;
      *(undefined4 *)(pCVar3 + 8) = 1;
    }
    if (*(int *)(this + 0x10) != iVar1) {
      RedrawCaptionButton(this,pCVar3);
      pCVar3 = (CMFCCaptionButtonEx *)FUN_100600e1(this,iVar1);
      if (pCVar3 != (CMFCCaptionButtonEx *)0x0) {
        *(undefined4 *)(pCVar3 + 8) = 0;
        RedrawCaptionButton(this,pCVar3);
      }
    }
    if (*(int *)(this + 0x14) == 0) {
      if (iVar1 == 0) {
        if (*(int *)(this + 0x10) != 0) {
          pHVar5 = SetCapture(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
          CWnd::FromHandle(pHVar5);
        }
      }
      else if (*(int *)(this + 0x10) == 0) {
        ReleaseCapture();
      }
    }
  }
  return;
}

