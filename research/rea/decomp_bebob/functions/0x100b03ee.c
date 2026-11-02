// rea decompile_all
// name: CMFCRibbonGallery::OnClickPaletteIcon
// address: 0x100b03ee
// body: available
// range: 0x100b03ee-0x100b0535 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b04f4 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonGallery::OnClickPaletteIcon(class
   CMFCRibbonGalleryIcon *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCRibbonGallery::OnClickPaletteIcon(CMFCRibbonGallery *this,CMFCRibbonGalleryIcon *param_1)

{
  CMFCRibbonGalleryIcon *pCVar1;
  CObject *pCVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  pCVar1 = param_1;
  iVar7 = *(int *)(param_1 + 0x168);
  if (iVar7 != -3) {
    if (iVar7 == -2) {
      iVar7 = *(int *)(this + 0x2d0) + 1;
      if (*(int *)(this + 0x2d4) < *(int *)(this + 0x2d0) + 1) {
        iVar7 = *(int *)(this + 0x2d4);
      }
    }
    else {
      if (iVar7 != -1) {
        iVar7 = 0;
        param_1 = (CMFCRibbonGalleryIcon *)0x0;
        if (0 < *(int *)(this + 0x16c)) {
          do {
            if ((iVar7 < 0) || (*(int *)(this + 0x16c) <= iVar7)) {
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
            pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734,
                                        *(CObject **)(*(int *)(this + 0x168) + iVar7 * 4));
            if (pCVar2 != (CObject *)0x0) {
              if (*(int *)(pCVar2 + 0x7c) != 0) {
                *(undefined4 *)(pCVar2 + 0x7c) = 0;
              }
              if (pCVar2 == (CObject *)pCVar1) {
                *(CMFCRibbonGalleryIcon **)(this + 0x2d8) = param_1;
                *(undefined4 *)(pCVar1 + 0x7c) = 1;
                BVar3 = IsRectEmpty((RECT *)(pCVar1 + 0x18));
                if ((BVar3 != 0) && (0 < *(int *)(this + 0x2c4))) {
                  iVar4 = (int)param_1 / *(int *)(this + 0x2c4);
                  *(int *)(this + 0x2d0) = iVar4;
                  if (*(int *)(this + 0x2d4) < iVar4) {
                    iVar4 = *(int *)(this + 0x2d4);
                  }
                  *(int *)(this + 0x2d0) = iVar4;
                  FUN_100af9b1((int *)this);
                }
              }
              param_1 = param_1 + 1;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(this + 0x16c));
        }
        (**(code **)(*(int *)this + 0x118))();
        uVar5 = *(uint *)(this + 0x2c0);
        if (uVar5 == 0) {
          uVar5 = *(uint *)(this + 0x48);
        }
        iVar7 = *(int *)(pCVar1 + 0x168);
        piVar6 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                           ((CMap<unsigned_int,unsigned_int,int,int> *)&PTR_vftable_10161f68,uVar5);
        *piVar6 = iVar7;
        return;
      }
      iVar7 = *(int *)(this + 0x2d0) + -1;
      if (*(int *)(this + 0x2d0) + -1 < 0) {
        iVar7 = 0;
      }
    }
    *(int *)(this + 0x2d0) = iVar7;
    FUN_100af9b1((int *)this);
    (**(code **)(*(int *)this + 0x118))();
  }
  return;
}

