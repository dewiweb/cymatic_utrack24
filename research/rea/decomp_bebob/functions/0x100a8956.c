// rea decompile_all
// name: FUN_100a8956
// address: 0x100a8956
// body: available
// range: 0x100a8956-0x100a8ace inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a8aca to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100a8956(void *this,int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  CObject *pCVar4;
  BOOL BVar5;
  bool bVar6;
  int local_8;
  
  if ((*(int *)((int)this + 0xdd0) != param_1) &&
     (*(int *)((int)this + 0xdd0) = param_1, *(int *)((int)this + 0x20) != 0)) {
    if ((*(int *)((int)this + 0xdd4) == -1) || (bVar2 = false, param_1 != -1)) {
      bVar2 = true;
    }
    *(undefined4 *)((int)this + 0xb7c) = 0xffffffff;
    bVar6 = false;
    local_8 = 0;
    puVar3 = *(undefined4 **)((int)this + 0xbcc);
    while (puVar3 != (undefined4 *)0x0) {
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = (undefined4 *)*puVar3;
      if ((((((byte)((CObject *)puVar3[2])[0x24] & 1) == 0) &&
           (pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarColorButton_10161ca4,
                                        (CObject *)puVar3[2]), pCVar4 != (CObject *)0x0)) &&
          (*(int *)(pCVar4 + 0x7c) == 0)) && (*(int *)(pCVar4 + 0x80) == 0)) {
        if (*(int *)(pCVar4 + 0x74) != 0) {
          *(undefined4 *)(pCVar4 + 0x74) = 0;
          InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)(pCVar4 + 0x54),1);
        }
        if ((*(int *)(pCVar4 + 0x78) == 0) || (param_1 != -1)) {
          if (*(int *)(pCVar4 + 0x70) == param_1) {
            *(undefined4 *)(pCVar4 + 0x74) = 1;
            *(int *)((int)this + 0xb7c) = local_8;
            InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)(pCVar4 + 0x54),1);
            bVar2 = false;
          }
        }
        else {
          *(undefined4 *)(pCVar4 + 0x74) = 1;
          *(int *)((int)this + 0xb7c) = local_8;
          InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)(pCVar4 + 0x54),1);
        }
        if (*(int *)(pCVar4 + 0x88) != 0) {
          *(undefined4 *)(pCVar4 + 0x70) = *(undefined4 *)((int)this + 0xdd0);
          *(undefined4 *)(pCVar4 + 0x74) = 1;
          InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)(pCVar4 + 0x54),1);
          BVar5 = IsRectEmpty((RECT *)(pCVar4 + 0x54));
          bVar6 = BVar5 == 0;
        }
      }
      local_8 = local_8 + 1;
      puVar3 = puVar1;
    }
    if (bVar6 != bVar2) {
      (**(code **)(*(int *)this + 0x3e0))();
      InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)0x0,1);
    }
    UpdateWindow(*(HWND *)((int)this + 0x20));
  }
  return;
}

