// rea decompile_all
// name: FUN_10078eb5
// address: 0x10078eb5
// body: available
// range: 0x10078eb5-0x10078f88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078f84 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10078eb5(CWnd *param_1)

{
  LRESULT LVar1;
  uint uVar2;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(param_1 + 0x338) != 0) && (*(int *)(*(int *)(param_1 + 0x338) + 0x20) != 0)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
    CWnd::ScreenToClient(param_1,&local_18);
    uVar2 = 0;
    if (0 < *(int *)(param_1 + 0x328)) {
      do {
        LVar1 = SendMessageW(*(HWND *)(*(int *)(param_1 + 0x338) + 0x20),0x40d,0,0);
        if (LVar1 <= (int)uVar2) break;
        if (((int)uVar2 < 0) || (*(int *)(param_1 + 0x328) <= (int)uVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        (**(code **)(**(int **)(*(int *)(param_1 + 0x324) + uVar2 * 4) + 0xc))(&local_28);
        OffsetRect(&local_28,local_18.left,local_18.top);
        uVar2 = uVar2 + 1;
        CToolTipCtrl::SetToolRect(*(CToolTipCtrl **)(param_1 + 0x338),param_1,uVar2,&local_28);
      } while ((int)uVar2 < *(int *)(param_1 + 0x328));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

