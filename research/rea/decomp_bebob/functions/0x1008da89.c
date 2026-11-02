// rea decompile_all
// name: CDockingPanesRow::CalcFixedLayout
// address: 0x1008da89
// body: available
// range: 0x1008da89-0x1008db7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008db63 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CDockingPanesRow::CalcFixedLayout(int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockingPanesRow::CalcFixedLayout(CDockingPanesRow *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_stack_0000000c;
  int local_14;
  int local_10;
  uint local_c;
  CDockingPanesRow *local_8;
  
  iVar5 = 0;
  if (*(int *)(this + 8) == 0) {
    if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)(param_1 + 4) = 0x7fff;
      return;
    }
    *(undefined4 *)param_1 = 0x7fff;
  }
  else {
    local_c = (uint)((*(uint *)(this + 0x40) & 0xa000) != 0);
    puVar2 = *(undefined4 **)(this + 0x28);
    iVar6 = 0;
    local_8 = this;
    while (puVar2 != (undefined4 *)0x0) {
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,(CObject *)*puVar1);
      iVar4 = (**(code **)(*(int *)pCVar3 + 0x178))();
      if ((iVar4 != 0) || (*(int *)(local_8 + 4) != 0)) {
        (**(code **)(*(int *)pCVar3 + 0x25c))(&local_14,param_2,in_stack_0000000c);
        if (local_c == 0) {
          if (iVar6 <= local_14) {
            iVar6 = local_14;
          }
          iVar5 = iVar5 + local_10;
        }
        else {
          iVar6 = iVar6 + local_14;
          if (iVar5 <= local_10) {
            iVar5 = local_10;
          }
        }
      }
    }
    if (local_c == 0) {
      if (0 < iVar6) {
        iVar6 = iVar6 + *(int *)(local_8 + 0x1c);
      }
    }
    else if (0 < iVar5) {
      iVar5 = iVar5 + *(int *)(local_8 + 0x1c);
    }
    *(int *)param_1 = iVar6;
  }
  *(int *)(param_1 + 4) = iVar5;
  return;
}

