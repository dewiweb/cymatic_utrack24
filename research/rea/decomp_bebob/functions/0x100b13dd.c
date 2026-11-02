// rea decompile_all
// name: CMFCTasksPaneFrameWnd::OnNeedTipText
// address: 0x100b13dd
// body: available
// range: 0x100b13dd-0x100b14ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b141b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    protected: int __thiscall CMFCTasksPaneFrameWnd::OnNeedTipText(unsigned int,struct tagNMHDR
   *,long *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCTasksPaneFrameWnd::OnNeedTipText
          (CMFCTasksPaneFrameWnd *this,uint param_1,tagNMHDR *param_2,long *param_3)

{
  undefined **ppuVar1;
  int iVar2;
  __POSITION *p_Var3;
  int iVar4;
  size_t sVar5;
  wchar_t *_Str;
  
  if ((_DAT_10168f74 & 1) == 0) {
    _DAT_10168f74 = _DAT_10168f74 | 1;
    ppuVar1 = FUN_1000ad47();
    FUN_10005e00(&DAT_10168f70,(int *)ppuVar1);
    _atexit((_func_4879 *)&LAB_1011aecd);
  }
  if (param_2 == (tagNMHDR *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  iVar4 = *(int *)(this + 0x118);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 0x20);
    }
    if (*(int *)param_2 == iVar2) {
      iVar4 = *(int *)(param_2 + 4);
      if (((iVar4 != 0) && (iVar4 <= *(int *)(this + 0x108))) &&
         (p_Var3 = CObList::FindIndex((CObList *)(this + 0xfc),iVar4 + -1),
         p_Var3 != (__POSITION *)0x0)) {
        iVar4 = FUN_100b954e(*(int *)(p_Var3 + 8));
        if (iVar4 == 0x17) {
          _Str = L"Back";
        }
        else if (iVar4 == 0x18) {
          _Str = L"Forward";
        }
        else {
          if (iVar4 != 0x19) goto LAB_100b14a2;
          _Str = L"Other Tasks Pane";
        }
        sVar5 = _wcslen(_Str);
        FUN_10002180(&DAT_10168f70,_Str,sVar5);
        *(undefined4 *)(param_2 + 0xc) = DAT_10168f70;
        return 1;
      }
LAB_100b14a2:
      iVar4 = CPaneFrameWnd::OnNeedTipText((CPaneFrameWnd *)this,param_1,param_2,param_3);
      return iVar4;
    }
  }
  return 0;
}

