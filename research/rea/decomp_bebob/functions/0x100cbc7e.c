// rea decompile_all
// name: CMFCOutlookBar::GetDockingStatus
// address: 0x100cbc7e
// body: available
// range: 0x100cbc7e-0x100cbd9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual enum AFX_CS_STATUS __thiscall CMFCOutlookBar::GetDockingStatus(class CPoint,int)
   
   Library: Visual Studio 2010 Release */

AFX_CS_STATUS __thiscall
CMFCOutlookBar::GetDockingStatus(CMFCOutlookBar *this,LONG param_2,LONG param_3,int param_4)

{
  POINT pt;
  POINT pt_00;
  int iVar1;
  BOOL BVar2;
  AFX_CS_STATUS AVar3;
  RECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (((*(int **)(this + 0x358) != (int *)0x0) &&
      (iVar1 = (**(code **)(**(int **)(this + 0x358) + 0x1a8))(), iVar1 != 0)) &&
     (iVar1 = (**(code **)(**(int **)(this + 0x358) + 0x1a0))(), iVar1 != 0)) {
    iVar1 = (**(code **)(*(int *)this + 0x334))(param_2,param_3,1);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    (**(code **)(*(int *)this + 0x32c))(&local_18,&local_28);
    BVar2 = IsRectEmpty(&local_18);
    if (BVar2 == 0) {
      local_18.bottom = local_18.bottom + param_4;
    }
    BVar2 = IsRectEmpty(&local_28);
    if (BVar2 == 0) {
      local_28.top = local_28.top - param_4;
    }
    if (((iVar1 != 2) &&
        (pt.y = param_3, pt.x = param_2, BVar2 = PtInRect(&local_18,pt), BVar2 == 0)) &&
       (pt_00.y = param_3, pt_00.x = param_2, BVar2 = PtInRect(&local_28,pt_00), BVar2 == 0)) {
      CDockablePane::GetDockingStatus((CDockablePane *)this,param_2,param_3,param_4);
      (**(code **)(*(int *)this + 0x1c8))();
    }
  }
  AVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return AVar3;
}

