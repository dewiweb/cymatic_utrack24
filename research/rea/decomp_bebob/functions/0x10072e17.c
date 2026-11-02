// rea decompile_all
// name: CMFCTabCtrl::Draw3DTab
// address: 0x10072e17
// body: available
// range: 0x10072e17-0x10072ec9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTabCtrl::Draw3DTab(class CDC *,class CMFCTabInfo *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCTabCtrl::Draw3DTab(CMFCTabCtrl *this,CDC *param_1,CMFCTabInfo *param_2,int param_3)

{
  BOOL BVar1;
  CMFCVisualManager *pCVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (((((*(int *)(this + 0x208) == 0) && (*(int *)(this + 0x20c) == 0)) &&
       (*(int *)(this + 0x210) == 0)) || (*(int *)(this + 0x290) <= *(int *)(param_2 + 0x10))) &&
     (*(int *)(param_2 + 0x34) != 0)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    BVar1 = IsRectEmpty((RECT *)(this + 0x280));
    if (BVar1 == 0) {
      BVar1 = IntersectRect(&local_18,(RECT *)(param_2 + 0x10),(RECT *)(this + 0x280));
      if (BVar1 == 0) goto LAB_10072eb9;
    }
    pCVar2 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar2 + 0xf4))
              (param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
               *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
               *(undefined4 *)(this + 0xe4),param_3,this);
  }
LAB_10072eb9:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

