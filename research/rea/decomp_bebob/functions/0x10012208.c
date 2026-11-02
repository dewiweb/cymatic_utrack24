// rea decompile_all
// name: FUN_10012208
// address: 0x10012208
// body: available
// range: 0x10012208-0x100122cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001223b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100122cc to 0x100122f7 FUN_100122f7 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */

void FUN_10012208(CWnd *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
                 )

{
  CWnd *pCVar1;
  CNoTrackObject *pCVar2;
  int iVar3;
  CNoTrackObject *pCVar4;
  undefined4 *puVar5;
  undefined4 local_54 [7];
  undefined4 local_38;
  CNoTrackObject *local_30;
  CWnd *local_2c;
  tagRECT local_28 [2];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x10012214;
  local_2c = param_1;
  pCVar2 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)&DAT_10164b18,(_func_CNoTrackObject_ptr *)&LAB_10009084)
  ;
  local_30 = pCVar2;
  if (pCVar2 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  pCVar4 = pCVar2 + 0x58;
  puVar5 = local_54;
  for (iVar3 = 7; pCVar1 = local_2c, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *(undefined4 *)pCVar4;
    pCVar4 = pCVar4 + 4;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(pCVar2 + 0x60) = param_4;
  *(undefined4 *)(pCVar2 + 0x58) = param_2;
  *(int *)(pCVar2 + 0x5c) = param_3;
  *(undefined4 *)(pCVar2 + 100) = param_5;
  local_8 = 0;
  if ((param_3 == 2) && (*(int *)(local_2c + 0x68) != 0)) {
    (**(code **)(**(int **)(local_2c + 0x68) + 0x60))(0);
  }
  local_28[0].left = 0;
  local_28[0].top = 0;
  local_28[0].right = 0;
  local_28[0].bottom = 0;
  local_2c = (CWnd *)0x0;
  if (param_3 == 0x110) {
    _AfxPreInitDialog(pCVar1,local_28,(ulong *)&local_2c);
  }
  local_38 = (**(code **)(*(int *)pCVar1 + 0x114))(param_3,param_4,param_5);
  if (param_3 == 0x110) {
    _AfxPostInitDialog(pCVar1,local_28,(ulong)local_2c);
    FUN_100122f7();
    return;
  }
  puVar5 = local_54;
  pCVar2 = pCVar2 + 0x58;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    pCVar2 = pCVar2 + 4;
  }
  FUN_100f90de();
  return;
}

