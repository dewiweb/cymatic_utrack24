// rea decompile_all
// name: CMFCRibbonButton::GetRegularSize
// address: 0x100bacd5
// body: available
// range: 0x100bacd5-0x100baf30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bad46 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCRibbonButton::GetRegularSize(class CDC *)
   
   Library: Visual Studio 2010 Release */

CDC * __thiscall CMFCRibbonButton::GetRegularSize(CMFCRibbonButton *this,CDC *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_stack_00000008;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
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
  if ((*(int *)(this + 0x68) != 0) || (*(int *)(this + 100) != 0)) {
    (**(code **)(*(int *)this + 0x58))(param_1,in_stack_00000008);
    return param_1;
  }
  iVar4 = (**(code **)(*(int *)this + 0x60))();
  if (iVar4 == 0) {
    (**(code **)(*(int *)this + 0x5c))(param_1,in_stack_00000008);
    return param_1;
  }
  (**(code **)(*(int *)this + 0x70))(&local_c,0);
  (**(code **)(*(int *)this + 0x70))(&local_14,1);
  iVar4 = (**(code **)(*(int *)this + 0x1ac))();
  if (iVar4 != 0) {
    *(int *)param_1 = local_c;
LAB_100bad7d:
    *(int *)(param_1 + 4) = local_8;
    return param_1;
  }
  iVar4 = GetGroupButtonExtraWidth(this);
  if ((local_c == 0) && (local_8 == 0)) {
    if (*(int *)(this + 0x54) == 0) goto LAB_100bae62;
  }
  else if (*(int *)(this + 0x54) == 0) {
    local_1c = 5;
    local_18 = 1;
    (**(code **)(*(int *)this + 0x1d8))(&local_1c);
    iVar1 = (**(code **)(*(int *)this + 0x1a8))();
    if (iVar1 != 0) {
      local_c = local_c + 2 + *(int *)(this + 0xbc) * 2;
    }
    iVar1 = local_c + *(int *)(this + 0xbc) * 2;
    if (iVar1 <= *(int *)(this + 0xb4) + 5) {
      iVar1 = *(int *)(this + 0xb4) + 5;
    }
    iVar2 = (**(code **)(*(int *)this + 0x1a8))();
    if (iVar2 != 0) {
      iVar1 = iVar1 + 2;
    }
    if (*(int *)(this + 0x90) != 0) {
      iVar1 = iVar1 + 6;
    }
    iVar2 = *(int *)(this + 0xb8);
    if (*(int *)(this + 0xb8) <= local_8 + 1) {
      iVar2 = local_8 + 1;
    }
    *(int *)param_1 = iVar1 + iVar4;
    local_8 = iVar2 + 1 + local_8;
    goto LAB_100bad7d;
  }
  if ((local_c != 0) || (local_8 != 0)) {
    local_14 = local_c + 2;
    local_10 = local_8 + 2;
    *(undefined4 *)(this + 0xc0) = 5;
  }
LAB_100bae62:
  iVar2 = *(int *)(this + 0xbc);
  iVar1 = local_14 + iVar2 * 2;
  if ((0 < *(int *)(this + 0xac)) &&
     (((iVar1 = iVar1 + *(int *)(this + 0xac) + iVar2, local_c != 0 || (local_8 != 0)) &&
      (*(int *)(this + 0x54) != 0)))) {
    iVar1 = iVar1 + iVar2;
  }
  if (((local_c != 0) || (local_8 != 0)) && (*(int *)(this + 0x54) != 0)) {
    iVar1 = iVar1 + iVar2;
  }
  iVar2 = *(int *)(this + 0xb0);
  if (*(int *)(this + 0xb0) < local_10) {
    iVar2 = local_10;
  }
  iVar2 = *(int *)(this + 0xc0) * 2 + iVar2;
  if (local_10 == 0) {
    iVar2 = iVar2 + *(int *)(this + 0xc0) * 2;
  }
  iVar3 = (**(code **)(*(int *)this + 0x98))();
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*(int *)this + 0x1a0))();
    iVar1 = iVar1 + iVar3;
    if (((*(int *)(this + 0x108) != 0) && (*(int *)(this + 0x48) != -1)) &&
       ((*(int *)(this + 0x48) != 0 && (0 < *(int *)(this + 0xac))))) {
      iVar1 = iVar1 + *(int *)(this + 0xec);
    }
  }
  if ((*(int *)(this + 0x90) != 0) && (*(int *)(this + 0x68) == 0)) {
    iVar1 = iVar1 + 6;
  }
  *(int *)param_1 = iVar1 + iVar4;
  *(int *)(param_1 + 4) = iVar2;
  return param_1;
}

