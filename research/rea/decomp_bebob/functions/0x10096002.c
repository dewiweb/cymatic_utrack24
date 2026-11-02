// rea decompile_all
// name: FUN_10096002
// address: 0x10096002
// body: available
// range: 0x10096002-0x10096193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009618f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall FUN_10096002(void *this,CArchive *param_1)

{
  CArchive *pCVar1;
  int iVar2;
  CArchive *this_00;
  undefined **ppuVar3;
  int iVar4;
  CArchive aCStack_54 [16];
  undefined4 uStack_44;
  int local_2c;
  long local_28;
  long local_24;
  long local_20;
  long local_1c;
  long local_18;
  CArchive *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  this_00 = param_1;
  uStack_4 = 0x1c;
  local_8 = 0x1009600e;
  local_14[0] = (CArchive *)0x0;
  if (((byte)param_1[0x18] & 1) == 0) {
    pCVar1 = *(CArchive **)((int)this + 0x90);
    uStack_44 = 0x100960f9;
    local_14[0] = pCVar1;
    CArchive::operator<<(param_1,(long)pCVar1);
    param_1 = (CArchive *)0x0;
    if (0 < (int)pCVar1) {
      do {
        if (((int)param_1 < 0) || (*(int *)((int)this + 0x90) <= (int)param_1)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        iVar2 = *(int *)(*(int *)((int)this + 0x8c) + (int)param_1 * 4);
        uStack_44 = 0x10096147;
        CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (iVar2 + 4));
        uStack_44 = 0x10096151;
        CArchive::operator<<(this_00,*(long *)(iVar2 + 0x34));
        iVar4 = CWnd::GetDlgCtrlID(*(CWnd **)(iVar2 + 0x20));
        uStack_44 = 0x10096161;
        CArchive::operator<<(this_00,iVar4);
        uStack_44 = 0x1009616b;
        CArchive::operator<<(this_00,*(long *)(iVar2 + 0x44));
        uStack_44 = 0x10096175;
        CArchive::operator<<(this_00,*(long *)(iVar2 + 0x2c));
        uStack_44 = 0x1009617f;
        CArchive::operator<<(this_00,*(long *)(iVar2 + 0x30));
        param_1 = param_1 + 1;
      } while ((int)param_1 < (int)local_14[0]);
    }
    uStack_44 = 0x1009610f;
    CArchive::operator<<(this_00,*(long *)((int)this + 0xa0));
    uStack_44 = 0x1009611c;
    CArchive::operator<<(this_00,*(long *)((int)this + 0x84));
  }
  else {
    CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::RemoveAll
              ((CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo> *)((int)this + 0x158));
    uStack_44 = 0x10096037;
    CArchive::operator>>(this_00,(long *)local_14);
    if (0 < (int)local_14[0]) {
      param_1 = local_14[0];
      do {
        ppuVar3 = FUN_1000ad47();
        uStack_44 = 0x10096053;
        FUN_10005e00(&local_2c,(int *)ppuVar3);
        local_8 = 0;
        uStack_44 = 0x10096062;
        CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_2c);
        uStack_44 = 0x1009606d;
        CArchive::operator>>(this_00,&local_28);
        uStack_44 = 0x10096078;
        CArchive::operator>>(this_00,&local_24);
        uStack_44 = 0x10096083;
        CArchive::operator>>(this_00,&local_20);
        uStack_44 = 0x1009608e;
        CArchive::operator>>(this_00,&local_1c);
        uStack_44 = 0x10096099;
        CArchive::operator>>(this_00,&local_18);
        local_14[0] = aCStack_54;
        CMFCRestoredTabInfo::CMFCRestoredTabInfo
                  ((CMFCRestoredTabInfo *)aCStack_54,(CMFCRestoredTabInfo *)&local_2c);
        CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::AddTail
                  ((CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo> *)((int)this + 0x158));
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_2c + -0x10));
        param_1 = param_1 + -1;
      } while (param_1 != (CArchive *)0x0);
    }
    uStack_44 = 0x100960db;
    CArchive::operator>>(this_00,(long *)((int)this + 0x174));
    uStack_44 = 0x100960e6;
    CArchive::operator>>(this_00,(long *)&param_1);
  }
  return;
}

