// rea decompile_all
// name: CMFCVisualManager::OnDrawBrowseButton
// address: 0x1003294f
// body: available
// range: 0x1003294f-0x100329e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCVisualManager::OnDrawBrowseButton(class CDC *,class
   CRect,class CMFCEditBrowseCtrl *,enum CMFCVisualManager::AFX_BUTTON_STATE,unsigned long &)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCVisualManager::OnDrawBrowseButton
          (undefined4 param_1_00,CDC *param_1,LONG param_3,int param_4,int param_5,int param_6,
          undefined4 param_7,int param_8)

{
  int iVar1;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,DAT_10166b34);
  local_18.left = param_3;
  local_18.top = param_4 + -1;
  local_18.right = param_5 + 1;
  local_18.bottom = param_6 + 1;
  CDC::Draw3dRect(param_1,&local_18,DAT_10166ac8,DAT_10166ac8);
  InflateRect(&local_18,-1,-1);
  DrawEdge(*(HDC *)(param_1 + 4),&local_18,(uint)(param_8 == 1) * 4 + 4,0xf);
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

