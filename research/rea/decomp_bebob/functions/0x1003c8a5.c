// rea decompile_all
// name: CPaneFrameWnd::OnNeedTipText
// address: 0x1003c8a5
// body: available
// range: 0x1003c8a5-0x1003c997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003c8e3 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    protected: int __thiscall CPaneFrameWnd::OnNeedTipText(unsigned int,struct tagNMHDR *,long *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CPaneFrameWnd::OnNeedTipText(CPaneFrameWnd *this,uint param_1,tagNMHDR *param_2,long *param_3)

{
  undefined **ppuVar1;
  int iVar2;
  __POSITION *p_Var3;
  uint uVar4;
  HMODULE pHVar5;
  int iVar6;
  
  if ((_DAT_101680b4 & 1) == 0) {
    _DAT_101680b4 = _DAT_101680b4 | 1;
    ppuVar1 = FUN_1000ad47();
    FUN_10005e00(&DAT_101680b0,(int *)ppuVar1);
    _atexit((_func_4879 *)&LAB_1011abc4);
  }
  if (param_2 == (tagNMHDR *)0x0) {
LAB_1003c8e3:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  iVar6 = *(int *)(this + 0x118);
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != 0)) {
    iVar2 = 0;
    if (iVar6 != 0) {
      iVar2 = *(int *)(iVar6 + 0x20);
    }
    if (((((*(int *)param_2 == iVar2) && (DAT_1016843c == 0)) &&
         (iVar6 = *(int *)(param_2 + 4), iVar6 != 0)) &&
        ((iVar6 <= *(int *)(this + 0x108) &&
         (p_Var3 = CObList::FindIndex((CObList *)(this + 0xfc),iVar6 + -1),
         p_Var3 != (__POSITION *)0x0)))) && (uVar4 = FUN_100b954e(*(int *)(p_Var3 + 8)), 7 < uVar4))
    {
      if (uVar4 < 10) {
        uVar4 = 0x3ea1;
      }
      else if (uVar4 == 0x14) {
        uVar4 = 0x3ee9;
      }
      else {
        if (uVar4 != 0x19) {
          return 0;
        }
        uVar4 = 0x4279;
      }
      pHVar5 = (HMODULE)FUN_1000ac62();
      if ((pHVar5 != (HMODULE)0x0) && (iVar6 = FUN_10006200(&DAT_101680b0,pHVar5,uVar4), iVar6 != 0)
         ) {
        *(undefined4 *)(param_2 + 0xc) = DAT_101680b0;
        return 1;
      }
      goto LAB_1003c8e3;
    }
  }
  return 0;
}

