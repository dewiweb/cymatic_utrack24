// rea decompile_all
// name: CChevronOwnerDrawMenu::MeasureItem
// address: 0x10016518
// body: available
// range: 0x10016518-0x10016660 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CChevronOwnerDrawMenu::MeasureItem(struct tagMEASUREITEMSTRUCT
   *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CChevronOwnerDrawMenu::MeasureItem(CChevronOwnerDrawMenu *this,tagMEASUREITEMSTRUCT *param_1)

{
  tagMEASUREITEMSTRUCT *ptVar1;
  undefined **ppuVar2;
  BOOL BVar3;
  CPen *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  tagMENUITEMINFOW local_64;
  undefined1 local_34 [4];
  int local_30;
  int local_2c;
  int local_1c;
  int local_18;
  CChevronOwnerDrawMenu *local_14;
  int local_8;
  undefined4 uStack_4;
  
  ptVar1 = param_1;
  uStack_4 = 0x54;
  local_8 = 0x10016524;
  local_14 = this;
  if (*(int *)(param_1 + 0x14) == 0) {
    local_1c = GetSystemMetrics(0x32);
    local_1c = local_1c + 2;
    iVar6 = GetSystemMetrics(0x31);
  }
  else {
    GetObjectW(*(HANDLE *)(*(int *)(param_1 + 0x14) + 4),0x18,local_34);
    local_1c = local_2c + 2;
    iVar6 = local_30;
  }
  iVar7 = iVar6 + 2;
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(&param_1,(int *)ppuVar2);
  local_8 = 0;
  _memset(&local_64,0,0x30);
  local_64.cbSize = 0x30;
  local_64.fMask = 0x40;
  BVar3 = GetMenuItemInfoW(*(HMENU *)(local_14 + 4),*(UINT *)(ptVar1 + 8),0,&local_64);
  if (BVar3 != 0) {
    local_64.dwTypeData = (LPWSTR)FUN_10002140(&param_1,local_64.cch);
    local_64.cch = local_64.cch + 1;
    BVar3 = GetMenuItemInfoW(*(HMENU *)(local_14 + 4),*(UINT *)(ptVar1 + 8),0,&local_64);
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)&param_1,-1);
    if (BVar3 != 0) {
      CWindowDC::CWindowDC((CWindowDC *)&local_30,(CWnd *)0x0);
      local_8._0_1_ = 1;
      pCVar4 = CDC::SelectObject((CDC *)&local_30,(CPen *)(local_14 + 8));
      CDC::GetTextExtent((CDC *)&local_30,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_18);
      CDC::SelectObject((CDC *)&local_30,pCVar4);
      iVar7 = iVar6 + 5 + local_18;
      local_8 = (uint)local_8._1_3_ << 8;
      CWindowDC::~CWindowDC((CWindowDC *)&local_30);
    }
  }
  iVar5 = GetSystemMetrics(0xf);
  iVar6 = local_1c;
  if (local_1c < iVar5) {
    iVar6 = GetSystemMetrics(0xf);
  }
  *(int *)(ptVar1 + 0x10) = iVar6;
  *(int *)(ptVar1 + 0xc) = iVar7;
  FUN_10001030((undefined4 *)(param_1 + -0x10));
  return;
}

