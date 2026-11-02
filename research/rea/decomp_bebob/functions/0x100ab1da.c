// rea decompile_all
// name: CMFCRibbonCategory::OnDrawImage
// address: 0x100ab1da
// body: available
// range: 0x100ab1da-0x100ab2ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonCategory::OnDrawImage(class CDC *,class CRect,class
   CMFCRibbonBaseElement *,int,int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCRibbonCategory::OnDrawImage
          (CMFCRibbonCategory *this,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          int *param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  CMFCRibbonCategory *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar uVar5;
  tagAFXDrawState local_20 [16];
  int local_10;
  int local_c;
  int local_8;
  
  this_00 = this + 0x504;
  if (param_8 == 0) {
    this_00 = this + 0x3f8;
  }
  if (param_9 < *(int *)(this_00 + 4)) {
    local_10 = param_4;
    GetImageSize(this,(int)&local_c);
    if (param_10 != 0) {
      param_8 = 0;
      iVar1 = ((param_6 - param_4) - local_8) / 2;
      if (-1 < iVar1) {
        param_8 = iVar1;
      }
      iVar1 = ((param_5 - param_3) - local_c) / 2;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      param_3 = iVar1 + param_3;
      local_10 = local_10 + param_8;
    }
    CMFCToolBarImages::SetTransparentColor((CMFCToolBarImages *)this_00,DAT_10166ab4);
    CMFCToolBarImages::PrepareDrawImage((CMFCToolBarImages *)this_00,local_20,local_c,local_8,0);
    uVar5 = 0xff;
    iVar4 = 0;
    iVar3 = 0;
    iVar2 = 0;
    iVar1 = (**(code **)(*param_7 + 0x38))();
    CMFCToolBarImages::Draw
              ((CMFCToolBarImages *)this_00,param_1,param_3,local_10,param_9,0,iVar1,iVar2,iVar3,
               iVar4,uVar5);
    CMFCToolBarImages::EndDrawImage((CMFCToolBarImages *)this_00,local_20);
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

