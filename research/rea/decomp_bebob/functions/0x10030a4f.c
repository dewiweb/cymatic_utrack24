// rea decompile_all
// name: CMFCVisualManager::OnDrawPaneDivider
// address: 0x10030a4f
// body: available
// range: 0x10030a4f-0x10030b40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawPaneDivider(class CDC *,class
   CPaneDivider *,class CRect,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawPaneDivider
          (CMFCVisualManager *this,CDC *param_1,CWnd *param_2,int param_4,LONG param_5,int param_6,
          LONG param_7,int param_8)

{
  uint uVar1;
  ulong uVar2;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_28.left = DAT_10166c04;
  local_28.top = DAT_10166c08;
  local_28.right = DAT_10166c0c;
  local_28.bottom = DAT_10166c10;
  CWnd::ScreenToClient(param_2,&local_28);
  local_18.left = param_4;
  local_18.top = param_5;
  local_18.right = param_6;
  local_18.bottom = param_7;
  if (local_28.left <= param_4) {
    local_18.left = local_28.left;
  }
  (**(code **)(*(int *)this + 0x34))
            (param_1,param_2,local_18.left,param_5,param_6,param_7,param_4,param_5,param_6,param_7,0
            );
  if (param_8 != 0) {
    uVar1 = (**(code **)(*(int *)param_2 + 400))();
    local_18.left = param_4;
    local_18.top = param_5;
    local_18.right = param_6;
    local_18.bottom = param_7;
    if ((uVar1 & 0x1000) == 0) {
      uVar2 = DAT_10166af4;
      if ((uVar1 & 0x4000) == 0) {
        if ((uVar1 & 0x2000) == 0) {
          if ((uVar1 & 0x8000) == 0) goto LAB_10030b30;
          local_18.bottom = param_5;
        }
        else {
          local_18.top = param_7;
          uVar2 = DAT_10166af8;
        }
      }
      else {
        local_18.right = param_4;
      }
    }
    else {
      local_18.left = param_6;
      uVar2 = DAT_10166af8;
    }
    CDC::Draw3dRect(param_1,&local_18,uVar2,uVar2);
  }
LAB_10030b30:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

