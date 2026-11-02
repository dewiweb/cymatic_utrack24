// rea decompile_all
// name: CMFCToolBar::DrawDragCursor
// address: 0x100264bc
// body: available
// range: 0x100264bc-0x1002669f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCToolBar::DrawDragCursor(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::DrawDragCursor(CMFCToolBar *this,CDC *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  CPen *local_8;
  
  uVar1 = (**(code **)(*(int *)this + 400))();
  local_8 = CDC::SelectObject(param_1,(CPen *)(this + 0xc78));
  iVar4 = 0;
  do {
    if ((uVar1 & 0xa000) == 0) {
      CDC::MoveTo(param_1,(int)local_28,*(int *)(this + 0xc58));
      CDC::LineTo(param_1,*(int *)(this + 0xc60),
                  (*(int *)(this + 0xc64) - *(int *)(this + 0xc5c)) / 2 + *(int *)(this + 0xc5c) +
                  -1 + iVar4);
      CDC::MoveTo(param_1,(int)local_30,*(int *)(this + 0xc58) + iVar4);
      CDC::LineTo(param_1,*(int *)(this + 0xc58) + iVar4,*(int *)(this + 0xc64) - iVar4);
      CDC::MoveTo(param_1,(int)local_38,(*(int *)(this + 0xc60) - iVar4) + -1);
      iVar2 = *(int *)(this + 0xc64) - iVar4;
      iVar3 = (*(int *)(this + 0xc60) - iVar4) + -1;
    }
    else {
      CDC::MoveTo(param_1,(int)local_10,
                  (*(int *)(this + 0xc60) - *(int *)(this + 0xc58)) / 2 + *(int *)(this + 0xc58) +
                  -1 + iVar4);
      CDC::LineTo(param_1,(*(int *)(this + 0xc60) - *(int *)(this + 0xc58)) / 2 +
                          *(int *)(this + 0xc58) + -1 + iVar4,*(int *)(this + 0xc64));
      CDC::MoveTo(param_1,(int)local_18,*(int *)(this + 0xc58) + iVar4);
      CDC::LineTo(param_1,*(int *)(this + 0xc60) - iVar4,*(int *)(this + 0xc5c) + iVar4);
      CDC::MoveTo(param_1,(int)local_20,*(int *)(this + 0xc58) + iVar4);
      iVar2 = (*(int *)(this + 0xc64) - iVar4) + -1;
      iVar3 = *(int *)(this + 0xc60) - iVar4;
    }
    CDC::LineTo(param_1,iVar3,iVar2);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  CDC::SelectObject(param_1,local_8);
  return;
}

