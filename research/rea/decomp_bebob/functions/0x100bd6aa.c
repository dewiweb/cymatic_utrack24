// rea decompile_all
// name: CMFCCaptionBar::OnDrawBackground
// address: 0x100bd6aa
// body: available
// range: 0x100bd6aa-0x100bd750 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCCaptionBar::OnDrawBackground(class CDC *,class CRect)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCCaptionBar::OnDrawBackground
          (CMFCCaptionBar *this,undefined4 param_1,LONG param_3,LONG param_4,int param_5,
          LONG param_6)

{
  CMFCVisualManager *pCVar1;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar1 = CMFCVisualManager::GetInstance();
  (**(code **)(*(int *)pCVar1 + 0x34))
            (param_1,this,param_3,param_4,param_5,param_6,param_3,param_4,param_5,param_6,0);
  if (*(int *)(this + 0x2b0) != 0) {
    local_18.left = param_3;
    local_18.top = param_4;
    local_18.right = param_5;
    local_18.bottom = param_6;
    InflateRect(&local_18,-4,-4);
    local_18.right = local_18.right + (*(int *)(this + 0x48c) - *(int *)(this + 0x494));
    pCVar1 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar1 + 0xd0))
              (param_1,this,local_18.left,local_18.top,local_18.right,local_18.bottom);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

