// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonCategoryCaption
// address: 0x100366e9
// body: available
// range: 0x100366e9-0x1003675f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::OnDrawRibbonCategoryCaption(class
   CDC *,class CMFCRibbonContextCaption *)
   
   Library: Visual Studio 2010 Release */

ulong __thiscall
CMFCVisualManager::OnDrawRibbonCategoryCaption
          (CMFCVisualManager *this,CDC *param_1,CMFCRibbonContextCaption *param_2)

{
  ulong uVar1;
  undefined **local_20;
  HBRUSH local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  uVar1 = (**(code **)(*(int *)this + 0x27c))(*(undefined4 *)(param_2 + 0x164));
  local_18.left = *(LONG *)(param_2 + 0x18);
  local_18.top = *(LONG *)(param_2 + 0x1c);
  local_18.right = *(LONG *)(param_2 + 0x20);
  local_18.bottom = *(LONG *)(param_2 + 0x24);
  if (uVar1 != 0xffffffff) {
    CBrush::CBrush((CBrush *)&local_20,uVar1);
    FillRect(*(HDC *)(param_1 + 4),&local_18,local_1c);
    local_20 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_20);
  }
  uVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar1;
}

