// rea decompile_all
// name: CMFCRibbonButton::GetIntermediateSize
// address: 0x100bb118
// body: available
// range: 0x100bb118-0x100bb230 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bb215 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCRibbonButton::GetIntermediateSize(class CDC *)
   
   Library: Visual Studio 2010 Release */

CDC * __thiscall CMFCRibbonButton::GetIntermediateSize(CMFCRibbonButton *this,CDC *param_1)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  int iVar4;
  undefined4 in_stack_00000008;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(this + 0x158)) {
    do {
      if ((iVar4 < 0) || (*(int *)(this + 0x158) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      (**(code **)(**(int **)(*(int *)(this + 0x154) + iVar4 * 4) + 0xc4))
                (*(undefined4 *)(this + 0x2c));
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0x158));
  }
  if ((*(int *)(this + 0x68) == 0) && (*(int *)(this + 100) == 0)) {
    local_14 = 3;
    local_10 = 3;
    (**(code **)(*(int *)this + 0x1d8))(&local_14);
    iVar4 = (**(code **)(*(int *)this + 0x98))();
    if (iVar4 != 0) {
      iVar3 = (**(code **)(*(int *)this + 0x1a0))();
    }
    (**(code **)(*(int *)this + 0x70))(&local_c,1);
    if (local_8 < 0x10) {
      local_8 = 0x10;
    }
    iVar4 = *(int *)(this + 0xb0);
    if (*(int *)(this + 0xb0) < local_8) {
      iVar4 = local_8;
    }
    iVar1 = *(int *)(this + 0xc0);
    (**(code **)(*(int *)this + 0x1d4))();
    iVar2 = GetGroupButtonExtraWidth(this);
    iVar3 = extraout_EDX + iVar2 + *(int *)(this + 0xbc) * 2 + *(int *)(this + 0xac) + local_c + 1 +
            iVar3;
    if (*(int *)(this + 0x90) != 0) {
      iVar3 = iVar3 + 6;
    }
    *(int *)param_1 = iVar3;
    *(int *)(param_1 + 4) = iVar4 + iVar1 * 2;
  }
  else {
    (**(code **)(*(int *)this + 0x58))(param_1,in_stack_00000008);
  }
  return param_1;
}

