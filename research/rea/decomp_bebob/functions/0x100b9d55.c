// rea decompile_all
// name: CMFCShowAllButton::OnDraw
// address: 0x100b9d55
// body: available
// range: 0x100b9d55-0x100b9e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCShowAllButton::OnDraw(class CDC *,class CRect const &,class
   CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCShowAllButton::OnDraw
          (CMFCShowAllButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  CMFCVisualManager *pCVar1;
  undefined4 uVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = *(LONG *)param_2;
  local_18.top = *(LONG *)(param_2 + 4);
  local_18.right = *(LONG *)(param_2 + 8);
  local_18.bottom = *(LONG *)(param_2 + 0xc);
  InflateRect(&local_18,-1,-1);
  uVar2 = 0;
  CMFCToolBarButton::FillInterior((CMFCToolBarButton *)this,param_1,param_2,param_6,0);
  if (param_6 == 0) {
    if ((*(uint *)(this + 0x24) & 0x30000) != 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 2;
  }
  pCVar1 = CMFCVisualManager::GetInstance();
  (**(code **)(*(int *)pCVar1 + 0x2f0))
            (param_1,local_18.left,local_18.top,local_18.right,local_18.bottom,uVar2);
  if ((*(uint *)(this + 0x24) & 0x30000) == 0) {
    if (param_6 == 0) goto LAB_100b9e0f;
    pCVar1 = CMFCVisualManager::GetInstance();
    uVar2 = 2;
  }
  else {
    pCVar1 = CMFCVisualManager::GetInstance();
    uVar2 = 1;
  }
  (**(code **)(*(int *)pCVar1 + 0x88))
            (param_1,this,local_18.left,local_18.top,local_18.right,local_18.bottom,uVar2);
LAB_100b9e0f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

