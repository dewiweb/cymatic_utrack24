// rea decompile_all
// name: CMenuImages::Draw
// address: 0x10037b8d
// body: available
// range: 0x10037b8d-0x10037c2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static void __stdcall CMenuImages::Draw(class CDC *,enum CMenuImages::IMAGES_IDS,class
   CPoint const &,enum CMenuImages::IMAGE_STATE,class CSize const &)
   
   Library: Visual Studio 2010 Release */

void CMenuImages::Draw(CDC *param_1,IMAGES_IDS param_2,CPoint *param_3,IMAGE_STATE param_4,
                      CSize *param_5)

{
  int iVar1;
  CMFCToolBarImages *this;
  tagAFXDrawState local_10 [12];
  
  iVar1 = Initialize();
  if (iVar1 != 0) {
    if (param_4 == 0) {
      this = (CMFCToolBarImages *)&DAT_101679b8;
    }
    else if (param_4 == 1) {
      this = (CMFCToolBarImages *)&DAT_10167bd8;
    }
    else if (param_4 == 4) {
      this = (CMFCToolBarImages *)&DAT_10167ac8;
    }
    else if (param_4 == 2) {
      this = (CMFCToolBarImages *)&DAT_10167ce8;
    }
    else {
      this = (CMFCToolBarImages *)&DAT_10167df8;
      if (param_4 != 3) {
        this = (CMFCToolBarImages *)&DAT_10167f08;
      }
    }
    CMFCToolBarImages::PrepareDrawImage
              (this,local_10,*(undefined4 *)param_5,*(undefined4 *)(param_5 + 4),0);
    CMFCToolBarImages::Draw
              (this,param_1,*(int *)param_3,*(int *)(param_3 + 4),param_2,0,0,0,0,0,0xff);
    CMFCToolBarImages::EndDrawImage(this,local_10);
  }
  return;
}

