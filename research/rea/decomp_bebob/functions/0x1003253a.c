// rea decompile_all
// name: OnDrawScrollButtons
// address: 0x1003253a
// body: available
// range: 0x1003253a-0x100325e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCVisualManager::OnDrawScrollButtons(class CDC *,class CRect
   const &,int,int,int)
    public: virtual void __thiscall CMFCVisualManagerWindows::OnDrawScrollButtons(class CDC *,class
   CRect const &,int,int,int)
   
   Library: Visual Studio 2010 Release */

void OnDrawScrollButtons(CDC *param_1,tagRECT *param_2,int param_3,IMAGES_IDS param_4,int param_5)

{
  undefined4 local_38;
  undefined4 local_34;
  CDrawingManager local_30 [8];
  tagRECT *local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x10032546;
  local_28 = param_2;
  FUN_10037b18((undefined4 *)local_30);
  local_24.left = param_2->left;
  local_24.right = param_2->right;
  local_24.bottom = param_2->bottom;
  local_24.top = param_2->top - param_3;
  FillRect(*(HDC *)(param_1 + 4),&local_24,DAT_10166b6c);
  if (param_5 != 0) {
    CDrawingManager::CDrawingManager(local_30,param_1);
    local_8 = 0;
    CDrawingManager::HighlightRect
              (local_30,local_28->left,local_28->top,local_28->right,local_28->bottom,0xffffffff,
               0xffffffff,0,0xffffffff);
    CDC::Draw3dRect(param_1,local_28,DAT_10166af4,DAT_10166af8);
    local_8 = 0xffffffff;
    FUN_1009c588((undefined4 *)local_30);
  }
  local_38 = 0;
  local_34 = 0;
  CMenuImages::Draw(param_1,param_4,(CRect *)local_28,0,(CSize *)&local_38);
  FUN_100f90cf();
  return;
}

