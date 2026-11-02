// rea decompile_all
// name: FUN_10074833
// address: 0x10074833
// body: available
// range: 0x10074833-0x1007499b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074997 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10074833(int param_1)

{
  HWND hWnd;
  int iVar1;
  IMAGE_STATE IVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x218) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x204) != 0) {
    return;
  }
  if (((*(int *)(param_1 + 0x208) == 0) && (*(int *)(param_1 + 0x20c) == 0)) &&
     (*(int *)(param_1 + 0x210) == 0)) {
    CWnd::EnableWindow((CWnd *)(param_1 + 0x354),(uint)(0 < *(int *)(param_1 + 600)));
    if (*(int *)(param_1 + 0x244) == 0) {
      bVar5 = SBORROW4(*(int *)(param_1 + 600),*(int *)(param_1 + 0x25c));
      iVar1 = *(int *)(param_1 + 600) - *(int *)(param_1 + 0x25c);
LAB_1007490f:
      if (bVar5 == iVar1 < 0) {
LAB_10074911:
        iVar1 = 0;
        goto LAB_10074919;
      }
    }
LAB_10074915:
    iVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x90) != 0) {
      CWnd::EnableWindow((CWnd *)(param_1 + 0x354),(uint)(0 < *(int *)(param_1 + 0x264)));
      iVar1 = *(int *)(param_1 + 0x90) + -1;
      if ((iVar1 < 0) || (*(int *)(param_1 + 0x90) <= iVar1)) goto LAB_10074997;
      if (*(int *)(param_1 + 0x244) == 0) {
        if (*(int *)(param_1 + 0x298) <
            *(int *)(*(int *)(*(int *)(param_1 + 0x8c) + iVar1 * 4) + 0x18)) {
          bVar5 = SBORROW4(*(int *)(param_1 + 0x264),iVar1);
          iVar1 = *(int *)(param_1 + 0x264) - iVar1;
          goto LAB_1007490f;
        }
        goto LAB_10074911;
      }
      goto LAB_10074915;
    }
    CWnd::EnableWindow((CWnd *)(param_1 + 0x354),0);
    iVar1 = 0;
  }
LAB_10074919:
  CWnd::EnableWindow((CWnd *)(param_1 + 0xaa4),iVar1);
  if (*(int *)(param_1 + 0x244) != 0) {
    if (((*(int *)(param_1 + 0x208) == 0) && (*(int *)(param_1 + 0x20c) == 0)) &&
       (*(int *)(param_1 + 0x210) == 0)) {
      IVar2 = 4;
    }
    else {
      IVar2 = 0;
    }
    CMFCButton::SetStdImage
              ((CMFCButton *)(param_1 + 0xaa4),
               (-(uint)(*(int *)(param_1 + 0x248) != 0) & 0x14) + 0xd,IVar2,0xd);
  }
  puVar4 = *(undefined4 **)(param_1 + 0x27ec);
  while( true ) {
    if (puVar4 == (undefined4 *)0x0) {
      return;
    }
    hWnd = (HWND)puVar4[2];
    puVar4 = (undefined4 *)*puVar4;
    if (hWnd == (HWND)0x0) break;
    BVar3 = IsWindowEnabled(hWnd);
    if (BVar3 == 0) {
      SendMessageW(hWnd,0x1f,0,0);
    }
  }
LAB_10074997:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

