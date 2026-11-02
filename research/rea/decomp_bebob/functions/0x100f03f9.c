// rea decompile_all
// name: CMFCTasksPane::OnNeedTipText
// address: 0x100f03f9
// body: available
// range: 0x100f03f9-0x100f04b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f0437 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    protected: int __thiscall CMFCTasksPane::OnNeedTipText(unsigned int,struct tagNMHDR *,long *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCTasksPane::OnNeedTipText(CMFCTasksPane *this,uint param_1,tagNMHDR *param_2,long *param_3)

{
  undefined **ppuVar1;
  int iVar2;
  HMODULE pHVar3;
  int iVar4;
  uint uVar5;
  
  if ((_DAT_10169ef0 & 1) == 0) {
    _DAT_10169ef0 = _DAT_10169ef0 | 1;
    ppuVar1 = FUN_1000ad47();
    FUN_10005e00(&DAT_10169eec,(int *)ppuVar1);
    _atexit((_func_4879 *)&LAB_1011b0a4);
  }
  if (param_2 == (tagNMHDR *)0x0) {
LAB_100f0437:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  iVar4 = *(int *)(this + 0x338);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 0x20);
    }
    if (*(int *)param_2 == iVar2) {
      iVar4 = *(int *)(param_2 + 4);
      if (iVar4 == 4) {
        uVar5 = 0x427c;
      }
      else if (iVar4 == 5) {
        uVar5 = 0x427d;
      }
      else {
        if (iVar4 != 6) {
          iVar4 = CDockablePane::OnNeedTipText((CDockablePane *)this,param_1,param_2,param_3);
          return iVar4;
        }
        uVar5 = 0x4280;
      }
      pHVar3 = (HMODULE)FUN_1000ac62();
      if ((pHVar3 != (HMODULE)0x0) && (iVar4 = FUN_10006200(&DAT_10169eec,pHVar3,uVar5), iVar4 != 0)
         ) {
        *(undefined4 *)(param_2 + 0xc) = DAT_10169eec;
        return 1;
      }
      goto LAB_100f0437;
    }
  }
  return 0;
}

