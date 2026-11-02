// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonCategoryScroll
// address: 0x10032ab5
// body: available
// range: 0x10032ab5-0x10032b81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonCategoryScroll(class CDC *,class
   CRibbonCategoryScroll *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonCategoryScroll
          (CMFCVisualManager *this,CDC *param_1,CRibbonCategoryScroll *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_38;
  undefined4 local_34;
  CDrawingManager local_30 [8];
  CDC *local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x10032ac1;
  local_24.left = *(LONG *)(param_2 + 0x18);
  local_24.top = *(LONG *)(param_2 + 0x1c);
  local_24.right = *(LONG *)(param_2 + 0x20);
  local_24.bottom = *(int *)(param_2 + 0x24) + -1;
  local_28 = param_1;
  FillRect(*(HDC *)(param_1 + 4),&local_24,DAT_10166b6c);
  iVar1 = (**(code **)(*(int *)param_2 + 0x2c))();
  if (iVar1 != 0) {
    CDrawingManager::CDrawingManager(local_30,local_28);
    local_8 = 0;
    CDrawingManager::HighlightRect
              (local_30,local_24.left,local_24.top,local_24.right,local_24.bottom,0xffffffff,
               0xffffffff,0,0xffffffff);
    local_8 = 0xffffffff;
    FUN_1009c588((undefined4 *)local_30);
  }
  uVar2 = *(uint *)(param_2 + 0x164);
  if (DAT_10166c38 != 0) {
    uVar2 = (uint)(uVar2 == 0);
  }
  local_38 = 0;
  local_34 = 0;
  CMenuImages::Draw(local_28,(-(uint)(uVar2 != 0) & 3) + 0xe,(CRect *)&local_24,0,(CSize *)&local_38
                   );
  CDC::Draw3dRect(local_28,&local_24,DAT_10166af0,DAT_10166af0);
  FUN_100f90cf();
  return;
}

