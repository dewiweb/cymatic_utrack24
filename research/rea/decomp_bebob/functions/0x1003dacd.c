// rea decompile_all
// name: CDockingManager::IsPointNearDockSite
// address: 0x1003dacd
// body: available
// range: 0x1003dacd-0x1003db9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CDockingManager::IsPointNearDockSite(class CPoint,unsigned long &,int
   &)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall
CDockingManager::IsPointNearDockSite
          (CDockingManager *this,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
          undefined4 *param_5)

{
  int iVar1;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *param_4 = 0;
  local_18.left = *(LONG *)(this + 0x108);
  local_18.top = *(LONG *)(this + 0x10c);
  local_18.right = *(LONG *)(this + 0x110);
  local_18.bottom = *(LONG *)(this + 0x114);
  CWnd::ClientToScreen(*(CWnd **)(this + 0xe4),&local_18);
  *param_5 = 1;
  iVar1 = CGlobalUtils::CheckAlignment
                    ((CGlobalUtils *)&PTR_vftable_10160f68,param_2,param_3,0,DAT_10160710,this,1,
                     param_4,*(undefined4 *)(this + 0x118),&local_18);
  if (iVar1 == 0) {
    local_18.left = *(LONG *)(this + 0xf8);
    local_18.top = *(LONG *)(this + 0xfc);
    local_18.right = *(LONG *)(this + 0x100);
    local_18.bottom = *(LONG *)(this + 0x104);
    CWnd::ClientToScreen(*(CWnd **)(this + 0xe4),&local_18);
    *param_5 = 0;
    CGlobalUtils::CheckAlignment
              ((CGlobalUtils *)&PTR_vftable_10160f68,param_2,param_3,0,DAT_10160710,this,0,param_4,
               *(undefined4 *)(this + 0x118),&local_18);
  }
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

