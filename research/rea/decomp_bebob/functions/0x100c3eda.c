// rea decompile_all
// name: FUN_100c3eda
// address: 0x100c3eda
// body: available
// range: 0x100c3eda-0x100c3f87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c3f83 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_100c3eda(void *this,int param_1)

{
  undefined4 *puVar1;
  CObject *pCVar2;
  undefined4 *puVar3;
  CObList local_40 [4];
  undefined4 *local_3c;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x100c3ee6;
  FUN_10088268(this,param_1);
  if (param_1 != 0) {
    CObList::CObList(local_40,10);
    local_8 = 0;
    CDockingPanesRow::GetGroupFromPane(*(CDockingPanesRow **)((int)this + 0xb0),this,local_40);
    puVar3 = local_3c;
    while (puVar3 != (undefined4 *)0x0) {
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = puVar3 + 2;
      puVar3 = (undefined4 *)*puVar3;
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,(CObject *)*puVar1);
      if (pCVar2 != this) {
        (**(code **)(*(int *)pCVar2 + 0x290))(0);
      }
    }
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    SetRectEmpty(&local_24);
    (**(code **)(**(int **)((int)this + 0xac) + 0x294))(&local_24);
    local_8 = 0xffffffff;
    FUN_1001e259(local_40);
  }
  FUN_100f90cf();
  return;
}

