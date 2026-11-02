// rea decompile_all
// name: FUN_100b07fb
// address: 0x100b07fb
// body: available
// range: 0x100b07fb-0x100b09a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b099d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100b07fb(void *this,CObject *param_1)

{
  int iVar1;
  
  FUN_100bb925(this,(CMFCRibbonBaseElement *)param_1);
  iVar1 = CObject::IsKindOf(param_1,(CRuntimeClass *)&PTR_s_CMFCRibbonGallery_10132750);
  if (iVar1 != 0) {
    FUN_100af852((int)this);
    CMFCToolBarImages::CopyTo
              ((CMFCToolBarImages *)(param_1 + 0x1a0),(CMFCToolBarImages *)((int)this + 0x1a0));
    *(undefined4 *)((int)this + 0x2ec) = *(undefined4 *)(param_1 + 0x2ec);
    *(undefined4 *)((int)this + 0x2d8) = *(undefined4 *)(param_1 + 0x2d8);
    *(undefined4 *)((int)this + 0x2f0) = *(undefined4 *)(param_1 + 0x2f0);
    *(undefined4 *)((int)this + 0x2f4) = *(undefined4 *)(param_1 + 0x2f4);
    *(undefined4 *)((int)this + 0x2c0) = *(undefined4 *)(param_1 + 0x2c0);
    *(undefined4 *)((int)this + 0x2e4) = *(undefined4 *)(param_1 + 0x2e4);
    *(undefined4 *)((int)this + 0x2dc) = *(undefined4 *)(param_1 + 0x2dc);
    *(undefined4 *)((int)this + 0x2c8) = *(undefined4 *)(param_1 + 0x2c8);
    *(undefined4 *)((int)this + 0x2f8) = *(undefined4 *)(param_1 + 0x2f8);
    *(undefined4 *)((int)this + 0x2fc) = *(undefined4 *)(param_1 + 0x2fc);
    *(undefined4 *)((int)this + 0x2e0) = *(undefined4 *)(param_1 + 0x2e0);
    iVar1 = 0;
    *(undefined4 *)((int)this + 0x300) = *(undefined4 *)(param_1 + 0x300);
    CStringArray::SetSize((CStringArray *)((int)this + 0x178),0,-1);
    CArray<int,int>::SetSize((CArray<int,int> *)((int)this + 0x18c),0,-1);
    if (0 < *(int *)(param_1 + 0x180)) {
      do {
        if ((iVar1 < 0) || (*(int *)(param_1 + 0x180) <= iVar1)) goto LAB_100b099d;
        SetAtGrow((void *)((int)this + 0x178),*(int *)((int)this + 0x180),
                  (undefined4 *)(*(int *)(param_1 + 0x17c) + iVar1 * 4));
        if (*(int *)(param_1 + 0x194) <= iVar1) goto LAB_100b099d;
        CArray<int,int>::SetAtGrow
                  ((CArray<int,int> *)((int)this + 0x18c),*(int *)((int)this + 0x194),
                   *(int *)(*(int *)(param_1 + 400) + iVar1 * 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x180));
    }
    CStringArray::SetSize((CStringArray *)((int)this + 0x2ac),0,-1);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x2b4)) {
      do {
        if ((iVar1 < 0) || (*(int *)(param_1 + 0x2b4) <= iVar1)) {
LAB_100b099d:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        SetAtGrow((void *)((int)this + 0x2ac),*(int *)((int)this + 0x2b4),
                  (undefined4 *)(*(int *)(param_1 + 0x2b0) + iVar1 * 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x2b4));
    }
    CMFCRibbonGallery::CreateIcons(this);
  }
  return;
}

