// rea decompile_all
// name: CDockablePane::OnUpdateToolTips
// address: 0x1007b266
// body: available
// range: 0x1007b266-0x1007b2da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CDockablePane::OnUpdateToolTips(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall CDockablePane::OnUpdateToolTips(CDockablePane *this,uint param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((param_1 & 0x10) != 0) {
    CTooltipManager::CreateToolTip((CToolTipCtrl **)(this + 0x338),(CWnd *)this,0x10);
    uVar2 = 0;
    do {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      SetRectEmpty(&local_18);
      uVar2 = uVar2 + 1;
      CToolTipCtrl::AddTool
                (*(CToolTipCtrl **)(this + 0x338),(CWnd *)this,(wchar_t *)0xffffffff,&local_18,uVar2
                );
    } while ((int)uVar2 < 3);
    FUN_10078eb5((CWnd *)this);
  }
  lVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar1;
}

