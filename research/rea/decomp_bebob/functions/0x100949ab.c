// rea decompile_all
// name: CMFCBaseTabCtrl::SetTabsOrder
// address: 0x100949ab
// body: available
// range: 0x100949ab-0x10094ab4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10094a30 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCBaseTabCtrl::SetTabsOrder(class CArray<int,int> const &)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCBaseTabCtrl::SetTabsOrder(CMFCBaseTabCtrl *this,CArray<int,int> *param_1)

{
  int iVar1;
  CPtrArray local_2c [4];
  int local_28;
  int local_24;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100949b7;
  if (*(int *)(param_1 + 8) == *(int *)(this + 0x9c)) {
    CPtrArray::CPtrArray(local_2c);
    iVar1 = 0;
    local_8 = 0;
    if (0 < *(int *)(this + 0x9c)) {
      do {
        if ((iVar1 < 0) || (*(int *)(this + 0x90) <= iVar1)) goto LAB_10094a30;
        CObArray::SetAtGrow((CObArray *)local_2c,local_24,
                            *(CObject **)(*(int *)(this + 0x8c) + iVar1 * 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x9c));
    }
    CUIntArray::SetSize((CUIntArray *)(this + 0x88),0,-1);
    local_18 = 0;
    local_14 = 0;
    if (0 < *(int *)(this + 0x9c)) {
      do {
        if ((((local_14 < 0) || (*(int *)(param_1 + 8) <= local_14)) ||
            (iVar1 = *(int *)(*(int *)(param_1 + 4) + local_14 * 4), iVar1 < 0)) ||
           (local_24 <= iVar1)) {
LAB_10094a30:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        CObArray::SetAtGrow((CObArray *)(this + 0x88),*(int *)(this + 0x90),
                            *(CObject **)(local_28 + iVar1 * 4));
        if ((iVar1 == *(int *)(this + 0xa0)) && (local_18 == 0)) {
          *(int *)(this + 0xa0) = local_14;
          local_18 = 1;
        }
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(this + 0x9c));
    }
    local_8 = 0xffffffff;
    CPtrArray::~CPtrArray(local_2c);
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

