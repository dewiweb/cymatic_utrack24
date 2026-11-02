// rea decompile_all
// name: FUN_100ae7c8
// address: 0x100ae7c8
// body: available
// range: 0x100ae7c8-0x100ae8e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ae8e4 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall FUN_100ae7c8(void *this,ushort *param_1)

{
  CWnd *this_00;
  int iVar1;
  CMFCRibbonBar *this_01;
  CObject *this_02;
  int *piVar2;
  undefined **local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  int local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0;
  iVar1 = FUN_10005720((void *)((int)this + 0x18c),param_1);
  if (iVar1 != 0) {
    FUN_10007c90((void *)((int)this + 0x18c),&param_1);
    this_00 = *(CWnd **)((int)this + 400);
    if ((this_00 != (CWnd *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
      CWnd::SetWindowTextW(this_00,*(wchar_t **)((int)this + 0x18c));
    }
    (**(code **)(*(int *)this + 0x118))();
  }
  if ((*(int *)((int)this + 0x58) == 0) &&
     (this_01 = CMFCRibbonBaseElement::GetTopLevelRibbonBar(this), this_01 != (CMFCRibbonBar *)0x0))
  {
    local_2c = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
    local_28 = 0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_1006d515(this_01,*(int *)((int)this + 0x48),(CArray<int,int> *)&local_2c);
    local_14 = 0;
    if (0 < local_24) {
      do {
        if ((local_14 < 0) || (local_24 <= local_14)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        this_02 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonEdit_10131fa4,
                                     *(CObject **)(local_28 + local_14 * 4));
        if ((this_02 != (CObject *)0x0) && (this_02 != this)) {
          *(undefined4 *)(this_02 + 0x58) = 1;
          local_18 = &stack0xffffffc0;
          piVar2 = FUN_10005e30((int *)(param_1 + -8));
          FUN_100ae7c8(this_02,(ushort *)(piVar2 + 4));
          *(undefined4 *)(this_02 + 0x58) = 0;
        }
        local_14 = local_14 + 1;
      } while (local_14 < local_24);
    }
    local_8 = local_8 & 0xffffff00;
    FUN_1006d033(&local_2c);
  }
  FUN_10001030((undefined4 *)(param_1 + -8));
  return;
}

