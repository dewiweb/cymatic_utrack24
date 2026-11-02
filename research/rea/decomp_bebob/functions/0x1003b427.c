// rea decompile_all
// name: CPaneFrameWnd::OnTrackCaptionButtons
// address: 0x1003b427
// body: available
// range: 0x1003b427-0x1003b51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CPaneFrameWnd::OnTrackCaptionButtons(class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CPaneFrameWnd::OnTrackCaptionButtons(CPaneFrameWnd *this,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  CMFCCaptionButton *pCVar3;
  int iVar4;
  undefined4 uVar5;
  HWND pHVar6;
  bool bVar7;
  
  bVar7 = false;
  if (DAT_1016843c != 0) {
    return;
  }
  uVar1 = *(uint *)(this + 0xa8);
  pCVar3 = FindButton(this,param_2,param_3);
  if (pCVar3 != (CMFCCaptionButton *)0x0) {
    iVar2 = *(int *)(pCVar3 + 0x10);
    if (((DAT_10166e54 == 0) || (iVar4 = FUN_100b954e((int)pCVar3), iVar4 == 0x14)) ||
       (iVar4 = FUN_100b954e((int)pCVar3), iVar4 == 0x13)) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
    bVar7 = iVar4 != iVar2;
    *(int *)(pCVar3 + 0x10) = iVar4;
    if (iVar4 != 0) {
      uVar5 = FUN_100b954e((int)pCVar3);
      *(undefined4 *)(this + 0xa8) = uVar5;
      *(undefined4 *)(pCVar3 + 8) = 1;
      goto LAB_1003b4b2;
    }
  }
  *(undefined4 *)(this + 0xa8) = 0;
LAB_1003b4b2:
  if ((*(uint *)(this + 0xa8) != uVar1) || (bVar7)) {
    RedrawCaptionButton(this,pCVar3);
    pCVar3 = FindButton(this,uVar1);
    if (pCVar3 != (CMFCCaptionButton *)0x0) {
      *(undefined4 *)(pCVar3 + 8) = 0;
      RedrawCaptionButton(this,pCVar3);
    }
  }
  if (*(int *)(this + 0xa4) == 0) {
    if (uVar1 == 0) {
      if (*(int *)(this + 0xa8) != 0) {
        pHVar6 = SetCapture(*(HWND *)(this + 0x20));
        CWnd::FromHandle(pHVar6);
      }
    }
    else if (*(int *)(this + 0xa8) == 0) {
      ReleaseCapture();
    }
  }
  return;
}

