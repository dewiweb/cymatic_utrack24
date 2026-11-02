// rea decompile_all
// name: CMFCAutoHideButton::GetTextSize
// address: 0x100c172b
// body: available
// range: 0x100c172b-0x100c1846 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c17b8 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCAutoHideButton::GetTextSize(void)const 
   
   Library: Visual Studio 2010 Release */

int * __thiscall CMFCAutoHideButton::GetTextSize(CMFCAutoHideButton *this)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  CPen *pCVar5;
  int *piVar6;
  int *in_stack_00000004;
  CWindowDC local_2c [20];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_18 [16];
  int local_8;
  undefined4 uStack_4;
  
  piVar2 = in_stack_00000004;
  uStack_4 = 0x1c;
  local_8 = 0x100c1737;
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  if ((*(int *)(this + 0x2c) != 0) && (*(int *)(this + 0x28) != 0)) {
    ppuVar3 = FUN_1000ad47();
    FUN_10005e00(&stack0x00000004,(int *)ppuVar3);
    local_8 = 0;
    CWnd::GetWindowTextW
              (*(CWnd **)(this + 0x2c),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               &stack0x00000004);
    if (in_stack_00000004[-3] != 0) {
      CWindowDC::CWindowDC(local_2c,*(CWnd **)(this + 0x28));
      local_8._0_1_ = 1;
      iVar4 = IsHorizontal(this);
      pCVar5 = (CPen *)&DAT_10166bb4;
      if (iVar4 == 0) {
        pCVar5 = (CPen *)&DAT_10166be4;
      }
      pCVar5 = CDC::SelectObject((CDC *)local_2c,pCVar5);
      if (pCVar5 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      piVar6 = (int *)CDC::GetTextExtent((CDC *)local_2c,local_18);
      iVar4 = *piVar6;
      piVar2[1] = piVar6[1];
      iVar1 = DAT_10162220;
      piVar2[1] = piVar2[1] + DAT_10162220;
      *piVar2 = iVar4;
      *piVar2 = *piVar2 + iVar1;
      CDC::SelectObject((CDC *)local_2c,pCVar5);
      iVar4 = IsHorizontal(this);
      if (iVar4 == 0) {
        iVar4 = piVar2[1];
        piVar2[1] = *piVar2;
        *piVar2 = iVar4;
      }
      local_8 = (uint)local_8._1_3_ << 8;
      CWindowDC::~CWindowDC(local_2c);
    }
    if ((*(int *)(*(int *)(this + 0x28) + 0x10c) == 0) && (DAT_1016222c != 0)) {
      iVar4 = IsHorizontal(this);
      if (iVar4 == 0) {
        piVar2[1] = 0;
      }
      else {
        *piVar2 = 0;
      }
    }
    FUN_10001030(in_stack_00000004 + -4);
  }
  return piVar2;
}

