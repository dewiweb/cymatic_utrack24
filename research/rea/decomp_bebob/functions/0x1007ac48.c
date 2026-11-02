// rea decompile_all
// name: FUN_1007ac48
// address: 0x1007ac48
// body: available
// range: 0x1007ac48-0x1007ad06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007ad02 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_1007ac48(void *this,LONG param_1,LONG param_2)

{
  POINT pt;
  BOOL BVar1;
  int iVar2;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)((int)this + 0x20),&local_18);
  CWnd::ScreenToClient(this,&local_18);
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x328)) {
    do {
      if ((iVar2 < 0) || (*(int *)((int)this + 0x328) <= iVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      (**(code **)(**(int **)(*(int *)((int)this + 0x324) + iVar2 * 4) + 0xc))(&local_28);
      OffsetRect(&local_28,local_18.left,local_18.top);
      CWnd::ClientToScreen(this,&local_28);
      pt.y = param_2;
      pt.x = param_1;
      BVar1 = PtInRect(&local_28,pt);
    } while ((BVar1 == 0) && (iVar2 = iVar2 + 1, iVar2 < *(int *)((int)this + 0x328)));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

