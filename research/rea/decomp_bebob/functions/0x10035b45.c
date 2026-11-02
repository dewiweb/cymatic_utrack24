// rea decompile_all
// name: CMFCVisualManager::OnDrawCaptionBarBorder
// address: 0x10035b45
// body: available
// range: 0x10035b45-0x10035bd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawCaptionBarBorder(class CDC *,class
   CMFCCaptionBar *,class CRect,unsigned long,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCVisualManager::OnDrawCaptionBarBorder(undefined4 param_1_00,CDC *param_1)

{
  HBRUSH pHVar1;
  COLORREF in_stack_0000001c;
  int in_stack_00000020;
  undefined **local_18;
  HBRUSH local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10035b51;
  if (in_stack_0000001c == 0xffffffff) {
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x0000000c,DAT_10166b6c);
  }
  else {
    local_14 = (HBRUSH)0x0;
    local_18 = CBrush::vftable;
    local_8 = 0;
    pHVar1 = CreateSolidBrush(in_stack_0000001c);
    CMenu::Attach((CMenu *)&local_18,(HMENU__ *)pHVar1);
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x0000000c,local_14);
    local_8 = 0xffffffff;
    local_18 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_18);
  }
  if (in_stack_00000020 == 0) {
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,DAT_10166af4,DAT_10166af0);
  }
  return;
}

