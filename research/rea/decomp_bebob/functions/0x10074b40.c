// rea decompile_all
// name: FUN_10074b40
// address: 0x10074b40
// body: available
// range: 0x10074b40-0x10074c24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074c20 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10074b40(void *this,byte param_1)

{
  CToolTipCtrl **ppCVar1;
  CToolTipCtrl *this_00;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((param_1 & 4) != 0) {
    ppCVar1 = (CToolTipCtrl **)((int)this + 0xd8);
    CTooltipManager::CreateToolTip(ppCVar1,this,4);
    if ((*ppCVar1 != (CToolTipCtrl *)0x0) && (*(int *)(*ppCVar1 + 0x20) != 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      CTooltipManager::CreateToolTip((CToolTipCtrl **)((int)this + 0xdc),this,4);
      this_00 = *(CToolTipCtrl **)((int)this + 0xdc);
      if ((this_00 != (CToolTipCtrl *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
        CToolTipCtrl::AddTool(this_00,this,(wchar_t *)0xffffffff,&local_18,1);
      }
      iVar4 = 0;
      if (0 < *(int *)((int)this + 0x9c)) {
        do {
          if ((iVar4 < 0) || (*(int *)((int)this + 0x90) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          iVar2 = *(int *)(*(int *)((int)this + 0x8c) + iVar4 * 4);
          if (*(int *)((int)this + 0xe0) == 0) {
            pwVar3 = *(wchar_t **)(iVar2 + 4);
          }
          else {
            pwVar3 = (wchar_t *)0xffffffff;
          }
          CToolTipCtrl::AddTool(*ppCVar1,this,pwVar3,&local_18,*(uint *)(iVar2 + 0x28));
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((int)this + 0x9c));
      }
      (**(code **)(*(int *)this + 0x180))();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

