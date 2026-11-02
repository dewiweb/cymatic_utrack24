// rea decompile_all
// name: CMFCTabCtrl::GetTabFromPoint
// address: 0x100731b8
// body: available
// range: 0x100731b8-0x10073328 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100732c8 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCTabCtrl::GetTabFromPoint(class CPoint &)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCTabCtrl::GetTabFromPoint(CMFCTabCtrl *this,CPoint *param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  BVar1 = PtInRect((RECT *)(this + 0x290),*(POINT *)param_1);
  if (BVar1 != 0) {
    if (((*(int *)(this + 0x208) == 0) && (*(int *)(this + 0x20c) == 0)) &&
       (*(int *)(this + 0x210) == 0)) {
      FUN_10092950(this,(POINT *)param_1);
    }
    else {
      iVar2 = *(int *)(this + 0xa0);
      if (-1 < iVar2) {
        if (*(int *)(this + 0x90) <= iVar2) {
LAB_100732c8:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        iVar2 = *(int *)(*(int *)(this + 0x8c) + iVar2 * 4);
        local_18.left = *(int *)(iVar2 + 0x10);
        local_18.top = *(int *)(iVar2 + 0x14);
        local_18.right = *(LONG *)(iVar2 + 0x18);
        local_18.bottom = *(int *)(iVar2 + 0x1c);
        BVar1 = PtInRect(&local_18,*(POINT *)param_1);
        if (BVar1 != 0) {
          if (0 < *(int *)(this + 0xa0)) {
            iVar2 = local_18.bottom - local_18.top;
            if ((*(int *)param_1 < iVar2 + local_18.left) &&
               (iVar3 = *(int *)param_1 - local_18.left,
               (*(int *)(param_1 + 4) - local_18.top) * (*(int *)(param_1 + 4) - local_18.top) +
               iVar3 * iVar3 < (iVar2 * iVar2) / 2)) {
              iVar2 = *(int *)(this + 0xa0);
              do {
                iVar2 = iVar2 + -1;
                if (iVar2 < 0) break;
                if ((iVar2 < 0) || (*(int *)(this + 0x90) <= iVar2)) goto LAB_100732c8;
              } while (*(int *)(*(int *)(*(int *)(this + 0x8c) + iVar2 * 4) + 0x34) == 0);
            }
          }
          goto LAB_10073315;
        }
      }
      iVar2 = 0;
      if (0 < *(int *)(this + 0x9c)) {
        do {
          if ((iVar2 < 0) || (*(int *)(this + 0x90) <= iVar2)) goto LAB_100732c8;
          iVar3 = *(int *)(*(int *)(this + 0x8c) + iVar2 * 4);
        } while (((*(int *)(iVar3 + 0x34) == 0) ||
                 (BVar1 = PtInRect((RECT *)(iVar3 + 0x10),*(POINT *)param_1), BVar1 == 0)) &&
                (iVar2 = iVar2 + 1, iVar2 < *(int *)(this + 0x9c)));
      }
    }
  }
LAB_10073315:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

