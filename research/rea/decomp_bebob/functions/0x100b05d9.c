// rea decompile_all
// name: CMFCRibbonGallery::CreateIcons
// address: 0x100b05d9
// body: available
// range: 0x100b05d9-0x100b07fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b0764 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonGallery::CreateIcons(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonGallery::CreateIcons(CMFCRibbonGallery *this)

{
  CMFCRibbonGalleryIcon *pCVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *this_00;
  CMFCRibbonButton *pCVar5;
  int iVar6;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x100b05e5;
  local_14 = 0;
  local_1c = 0;
  if (0 < *(int *)(this + 0x2e0)) {
    do {
      if (local_14 < *(int *)(this + 0x194)) {
        if ((local_14 < 0) || (*(int *)(this + 0x194) <= local_14)) {
LAB_100b0764:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        if (local_1c == *(int *)(*(int *)(this + 400) + local_14 * 4)) {
          if (*(int *)(this + 0x180) <= local_14) goto LAB_100b0764;
          piVar3 = FUN_10005e30((int *)(*(int *)(*(int *)(this + 0x17c) + local_14 * 4) + -0x10));
          local_18 = piVar3 + 4;
          local_8 = 0;
          local_14 = local_14 + 1;
          if (piVar3[1] != 0) {
            puVar4 = (undefined4 *)
                     ATL::operator+((char *)&local_20,
                                    (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>
                                     *)&DAT_10132b54);
            local_8._0_1_ = 1;
            FUN_10007c90(&local_18,puVar4);
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_10001030((undefined4 *)(local_20 + -0x10));
          }
          piVar3 = local_18;
          this_00 = FUN_1000858a(0x164);
          local_8._0_1_ = 2;
          if (this_00 == (void *)0x0) {
            pCVar5 = (CMFCRibbonButton *)0x0;
          }
          else {
            pCVar5 = CMFCRibbonLabel(this_00,(short *)piVar3,0);
          }
          *(CMFCRibbonButton **)(pCVar5 + 0x44) = pCVar5;
          local_8 = (uint)local_8._1_3_ << 8;
          CArray<int,int>::SetAtGrow
                    ((CArray<int,int> *)(this + 0x164),*(int *)(this + 0x16c),(int)pCVar5);
          local_8 = 0xffffffff;
          FUN_10001030(piVar3 + -4);
        }
      }
      iVar2 = local_1c;
      pCVar1 = FUN_1000858a(0x17c);
      local_8 = 3;
      if (pCVar1 == (CMFCRibbonGalleryIcon *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = CMFCRibbonGalleryIcon::CMFCRibbonGalleryIcon(pCVar1,this,iVar2);
      }
      local_8 = 0xffffffff;
      if (iVar2 == *(int *)(this + 0x2d8)) {
        *(undefined4 *)(iVar6 + 0x7c) = 1;
      }
      CArray<int,int>::SetAtGrow((CArray<int,int> *)(this + 0x164),*(int *)(this + 0x16c),iVar6);
      local_1c = iVar2 + 1;
    } while (local_1c < *(int *)(this + 0x2e0));
  }
  pCVar1 = FUN_1000858a(0x17c);
  local_8 = 4;
  if (pCVar1 == (CMFCRibbonGalleryIcon *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = CMFCRibbonGalleryIcon::CMFCRibbonGalleryIcon(pCVar1,this,-1);
  }
  local_8 = 0xffffffff;
  CArray<int,int>::SetAtGrow((CArray<int,int> *)(this + 0x164),*(int *)(this + 0x16c),iVar2);
  pCVar1 = FUN_1000858a(0x17c);
  local_8 = 5;
  if (pCVar1 == (CMFCRibbonGalleryIcon *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = CMFCRibbonGalleryIcon::CMFCRibbonGalleryIcon(pCVar1,this,-2);
  }
  local_8 = 0xffffffff;
  CArray<int,int>::SetAtGrow((CArray<int,int> *)(this + 0x164),*(int *)(this + 0x16c),iVar2);
  pCVar1 = FUN_1000858a(0x17c);
  local_8 = 6;
  if (pCVar1 == (CMFCRibbonGalleryIcon *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = CMFCRibbonGalleryIcon::CMFCRibbonGalleryIcon(pCVar1,this,-3);
  }
  local_8 = 0xffffffff;
  CArray<int,int>::SetAtGrow((CArray<int,int> *)(this + 0x164),*(int *)(this + 0x16c),iVar2);
  return;
}

