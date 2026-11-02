// rea decompile_all
// name: CMFCRibbonColorButton::OnDrawPaletteIcon
// address: 0x100eca71
// body: available
// range: 0x100eca71-0x100ecbb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ecb88 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonColorButton::OnDrawPaletteIcon(class CDC *,class
   CRect,int,class CMFCRibbonGalleryIcon *,unsigned long)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCRibbonColorButton::OnDrawPaletteIcon
          (CMFCRibbonColorButton *this,undefined4 param_1,LONG param_3,int param_4,LONG param_5,
          int param_6,int param_7,int *param_8)

{
  ushort *puVar1;
  int *piVar2;
  CMFCVisualManager *pCVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  ulong local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  piVar2 = param_8;
  local_10 = 0;
  bVar7 = true;
  local_8 = 1;
  if (*(int *)(this + 0x348) < 1) {
    iVar5 = 2;
  }
  else {
    iVar5 = 0;
  }
  if (param_8 == (int *)0x0) {
    local_14 = *(ulong *)(this + 0x314);
    bVar6 = *(int *)(this + 0x30c) == -1;
    iVar5 = 2;
  }
  else {
    local_14 = GetColorByIndex(this,param_7);
    bVar6 = *(ulong *)(this + 0x30c) == local_14;
    local_10 = (**(code **)(*piVar2 + 0x2c))();
    if ((param_7 < *(int *)(this + 800)) && (iVar4 = 0, 0 < *(int *)(this + 0x348))) {
      do {
        if ((iVar4 < 0) || (*(int *)(this + 0x348) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        puVar1 = (ushort *)(*(int *)(this + 0x344) + iVar4 * 4);
        if (((int)(uint)*puVar1 <= param_7) && (param_7 <= (int)(uint)puVar1[1])) {
          iVar5 = 0;
          local_8 = 0;
          bVar7 = piVar2[0x5d] != 0;
          if (bVar7) {
            param_4 = param_4 + 1;
          }
          if (piVar2[0x5e] != 0) goto LAB_100ecb3c;
          goto LAB_100ecb3f;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 0x348));
    }
    if (0 < *(int *)(this + 0x348)) {
LAB_100ecb3c:
      local_8 = 1;
      param_6 = param_6 + -1;
    }
  }
LAB_100ecb3f:
  InflateRect((LPRECT)&param_3,-2,-iVar5);
  pCVar3 = CMFCVisualManager::GetInstance();
  (**(code **)(*(int *)pCVar3 + 0x2c0))
            (param_1,this,piVar2,local_14,param_3,param_4,param_5,param_6,bVar7,local_8,local_10,
             bVar6,0);
  return;
}

