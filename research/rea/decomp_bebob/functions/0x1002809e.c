// rea decompile_all
// name: FUN_1002809e
// address: 0x1002809e
// body: available
// range: 0x1002809e-0x100281c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100281bd to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1002809e(CPane *param_1)

{
  int *piVar1;
  uint uVar2;
  HWND pHVar3;
  int iVar4;
  CWnd *pCVar5;
  undefined4 *puVar6;
  
  CPane::OnCancelMode(param_1);
  if (*(int *)(param_1 + 0xb30) != 0) {
    *(undefined4 *)(param_1 + 0xc98) = 0;
    *(undefined4 *)(param_1 + 0xb30) = 0;
    SetRectEmpty((LPRECT)(param_1 + 0xc68));
    ReleaseCapture();
    if (*(int *)(param_1 + 0xc90) != 0) {
      pHVar3 = SetCapture(*(HWND *)(*(int *)(param_1 + 0xc90) + 0x20));
      CWnd::FromHandle(pHVar3);
      *(undefined4 *)(param_1 + 0xc90) = 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb78);
  if (iVar4 < 0) {
    if (*(int *)(param_1 + 0xb7c) < 0) goto LAB_10028188;
    if (-1 < iVar4) goto LAB_10028110;
  }
  else {
LAB_10028110:
    iVar4 = FUN_100261ef(param_1,iVar4);
    if (iVar4 != 0) {
      uVar2 = *(uint *)(iVar4 + 0x24);
      pHVar3 = GetCapture();
      pCVar5 = CWnd::FromHandle(pHVar3);
      if (pCVar5 == (CWnd *)param_1) {
        ReleaseCapture();
        if (*(int *)(param_1 + 0xc90) != 0) {
          pHVar3 = SetCapture(*(HWND *)(*(int *)(param_1 + 0xc90) + 0x20));
          CWnd::FromHandle(pHVar3);
          *(undefined4 *)(param_1 + 0xc90) = 0;
        }
      }
      (**(code **)(*(int *)param_1 + 0x374))(*(undefined4 *)(param_1 + 0xb78),uVar2 & 0xfffdffff);
    }
  }
  *(undefined4 *)(param_1 + 0xb78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb7c) = 0xffffffff;
  (**(code **)(*(int *)param_1 + 0x3b0))(0xffffffff);
LAB_10028188:
  puVar6 = *(undefined4 **)(param_1 + 0xbcc);
  while( true ) {
    if (puVar6 == (undefined4 *)0x0) {
      RedrawWindow(*(HWND *)(param_1 + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
      return;
    }
    if (puVar6 == (undefined4 *)0x0) break;
    piVar1 = puVar6 + 2;
    puVar6 = (undefined4 *)*puVar6;
    if ((int *)*piVar1 == (int *)0x0) break;
    (**(code **)(*(int *)*piVar1 + 0x58))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

