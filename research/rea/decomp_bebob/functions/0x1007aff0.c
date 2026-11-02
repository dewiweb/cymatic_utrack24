// rea decompile_all
// name: CDockablePane::GetDockingStatus
// address: 0x1007aff0
// body: available
// range: 0x1007aff0-0x1007b152 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual enum AFX_CS_STATUS __thiscall CDockablePane::GetDockingStatus(class CPoint,int)
   
   Library: Visual Studio 2010 Release */

AFX_CS_STATUS __thiscall
CDockablePane::GetDockingStatus(CDockablePane *this,LONG param_2,LONG param_3,int param_4)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  char cVar1;
  CWnd *pCVar2;
  CDockingManager *this_00;
  CSmartDockingManager *pCVar3;
  int iVar4;
  BOOL BVar5;
  AFX_CS_STATUS AVar6;
  int local_3c;
  RECT local_38;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  cVar1 = (**(code **)(*(int *)this + 0x1b4))();
  pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
  this_00 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar2);
  local_3c = -1;
  if ((((cVar1 < '\0') && (this_00 != (CDockingManager *)0x0)) &&
      (pCVar3 = CDockingManager::GetSmartDockingManager(this_00),
      pCVar3 != (CSmartDockingManager *)0x0)) &&
     ((*(int *)(pCVar3 + 8) != 0 && (*(int *)(pCVar3 + 4) != 0)))) {
    local_3c = *(int *)(pCVar3 + 0x100);
  }
  iVar4 = (**(code **)(*(int *)this + 0x334))(param_2,param_3,1);
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  (**(code **)(*(int *)this + 0x32c))(&local_28,&local_38);
  if (((iVar4 != 2) && (pt.y = param_3, pt.x = param_2, BVar5 = PtInRect(&local_28,pt), BVar5 == 0))
     && ((pt_00.y = param_3, pt_00.x = param_2, BVar5 = PtInRect(&local_38,pt_00), BVar5 == 0 &&
         (local_3c != 8)))) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    iVar4 = (**(code **)(*(int *)this + 0x1a0))();
    local_18.top = local_18.top + iVar4 + (local_28.bottom - local_28.top);
    local_18.bottom = local_18.bottom + (local_38.top - local_38.bottom);
    if (param_4 == -1) {
      pt_01.y = param_3;
      pt_01.x = param_2;
      PtInRect(&local_18,pt_01);
    }
    else {
      InflateRect(&local_18,-param_4,-param_4);
      pt_02.y = param_3;
      pt_02.x = param_2;
      PtInRect(&local_18,pt_02);
    }
  }
  AVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return AVar6;
}

