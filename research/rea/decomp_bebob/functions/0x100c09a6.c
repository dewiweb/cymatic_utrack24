// rea decompile_all
// name: CMFCOutlookBarPane::OnEraseWorkArea
// address: 0x100c09a6
// body: available
// range: 0x100c09a6-0x100c0a69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCOutlookBarPane::OnEraseWorkArea(class CDC *,class CRect)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCOutlookBarPane::OnEraseWorkArea
          (CMFCOutlookBarPane *this,CDC *param_1,int param_3,int param_4,int param_5,int param_6)

{
  CMFCToolBarImages *this_00;
  int iVar1;
  tagAFXDrawState local_28 [12];
  int local_1c;
  undefined **local_14;
  CDC *local_10;
  int local_c;
  int local_8;
  
  local_10 = param_1;
  if (*(int *)(this + 0xcd8) == 0) {
    CBrush::CBrush((CBrush *)&local_14,*(ulong *)(this + 0xcd0));
    FillRect((HDC)*(int *)(param_1 + 4),(RECT *)&param_3,(HBRUSH)local_10);
    local_14 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_14);
  }
  else {
    this_00 = (CMFCToolBarImages *)(this + 0xcd4);
    CMFCToolBarImages::PrepareDrawImage(this_00,local_28,0,0,0);
    local_1c = *(int *)(this + 0xd24);
    iVar1 = *(int *)(this + 0xd28);
    for (local_c = param_3; local_c < param_5; local_c = local_c + local_1c) {
      for (local_8 = param_4; local_8 < param_6; local_8 = local_8 + iVar1) {
        CMFCToolBarImages::Draw(this_00,local_10,local_c,local_8,0,0,0,0,0,0,0xff);
      }
    }
    CMFCToolBarImages::EndDrawImage(this_00,local_28);
  }
  return;
}

