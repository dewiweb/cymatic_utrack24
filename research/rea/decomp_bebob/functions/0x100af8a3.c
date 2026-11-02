// rea decompile_all
// name: FUN_100af8a3
// address: 0x100af8a3
// body: available
// range: 0x100af8a3-0x100af9af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100af9ab to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100af8a3(void *this,CDC *param_1)

{
  int iVar1;
  CMFCVisualManager *pCVar2;
  tagAFXDrawState local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  CDC *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  iVar1 = CMFCRibbonGallery::IsButtonLook(this);
  if (iVar1 == 0) {
    local_18.left = *(LONG *)((int)this + 0x18);
    local_18.top = *(LONG *)((int)this + 0x1c);
    local_18.right = *(int *)((int)this + 0x20);
    local_18.bottom = *(LONG *)((int)this + 0x24);
    InflateRect(&local_18,-1,-3);
    local_18.right = local_18.right + -2;
    pCVar2 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar2 + 0x278))
              (local_1c,this,local_18.left,local_18.top,local_18.right,local_18.bottom);
    (**(code **)(*(int *)this + 0x1e4))(&local_24);
    if (0 < *(int *)((int)this + 0x1a4)) {
      CMFCToolBarImages::SetTransparentColor((CMFCToolBarImages *)((int)this + 0x1a0),DAT_10166ab4);
      CMFCToolBarImages::PrepareDrawImage
                ((CMFCToolBarImages *)((int)this + 0x1a0),local_30,local_24,local_20,0);
    }
    iVar1 = 0;
    if (0 < *(int *)((int)this + 0x16c)) {
      do {
        if ((iVar1 < 0) || (*(int *)((int)this + 0x16c) <= iVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        (**(code **)(**(int **)(*(int *)((int)this + 0x168) + iVar1 * 4) + 0xdc))(local_1c);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((int)this + 0x16c));
    }
    if (0 < *(int *)((int)this + 0x1a4)) {
      CMFCToolBarImages::EndDrawImage((CMFCToolBarImages *)((int)this + 0x1a0),local_30);
    }
  }
  else {
    FUN_100bcbd5(this,param_1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

