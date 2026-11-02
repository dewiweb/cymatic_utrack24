// rea decompile_all
// name: FUN_10074717
// address: 0x10074717
// body: available
// range: 0x10074717-0x10074831 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007482d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_10074717(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  HWND hWnd;
  bool bVar2;
  bool bVar3;
  HWND pHVar4;
  int iVar5;
  
  puVar1 = *(undefined4 **)((int)this + 0x27ec);
  bVar3 = true;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    hWnd = (HWND)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    if (hWnd == (HWND)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    if ((*(int *)((int)this + 0x21c) == 0) || (*(int *)((int)this + 0x240) != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (param_5 == 0) {
      if (!bVar2) {
        if (this == (void *)0xffffdf6c) {
          pHVar4 = (HWND)0x0;
        }
        else {
          pHVar4 = *(HWND *)((int)this + 0x20b4);
        }
        if (hWnd == pHVar4) goto LAB_100747fb;
      }
      if ((*(int *)((int)this + 0x244) != 0) && (bVar3)) goto LAB_100747fb;
      iVar5 = param_1;
      if ((((*(int *)((int)this + 0x208) != 0) || (*(int *)((int)this + 0x20c) != 0)) ||
          (*(int *)((int)this + 0x210) != 0)) && (bVar3)) {
        iVar5 = (*(int *)((int)this + 0x290) - param_3) + -1;
      }
      SetWindowPos(hWnd,(HWND)0x0,iVar5,param_2,param_3,param_4,0x14);
      if ((((*(int *)((int)this + 0x208) == 0) && (*(int *)((int)this + 0x20c) == 0)) &&
          (*(int *)((int)this + 0x210) == 0)) || (!bVar3)) {
        param_1 = param_1 + param_3 + param_6;
      }
    }
    else {
LAB_100747fb:
      SetWindowPos(hWnd,(HWND)0x0,0,0,0,0,0x14);
    }
    InvalidateRect(hWnd,(RECT *)0x0,1);
    UpdateWindow(hWnd);
    bVar3 = false;
  } while( true );
}

