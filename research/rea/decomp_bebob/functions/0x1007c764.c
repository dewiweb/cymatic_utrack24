// rea decompile_all
// name: CDockablePane::OnNeedTipText
// address: 0x1007c764
// body: available
// range: 0x1007c764-0x1007c833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007c7a2 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    protected: int __thiscall CDockablePane::OnNeedTipText(unsigned int,struct tagNMHDR *,long *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CDockablePane::OnNeedTipText(CDockablePane *this,uint param_1,tagNMHDR *param_2,long *param_3)

{
  ushort uVar1;
  undefined **ppuVar2;
  int iVar3;
  HMODULE pHVar4;
  int iVar5;
  uint uVar6;
  
  if ((_DAT_10168824 & 1) == 0) {
    _DAT_10168824 = _DAT_10168824 | 1;
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(&DAT_10168820,(int *)ppuVar2);
    _atexit((_func_4879 *)&LAB_1011ad28);
  }
  if (param_2 == (tagNMHDR *)0x0) {
LAB_1007c7a2:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  iVar5 = *(int *)(this + 0x338);
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) {
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = *(int *)(iVar5 + 0x20);
    }
    if (*(int *)param_2 == iVar3) {
      iVar5 = *(int *)(param_2 + 4);
      if (iVar5 == 1) {
        uVar6 = 0x3ea0;
      }
      else if (iVar5 == 2) {
        uVar6 = 0x3ea1;
        uVar1 = GetAsyncKeyState(0x11);
        if (((uVar1 & 0x8000) != 0) && (iVar5 = (**(code **)(*(int *)this + 0x340))(), iVar5 != 0))
        {
          uVar6 = 0x3ea4;
        }
      }
      else {
        if (iVar5 != 3) {
          return 0;
        }
        uVar6 = 0x428e;
      }
      pHVar4 = (HMODULE)FUN_1000ac62();
      if ((pHVar4 != (HMODULE)0x0) && (iVar5 = FUN_10006200(&DAT_10168820,pHVar4,uVar6), iVar5 != 0)
         ) {
        *(undefined4 *)(param_2 + 0xc) = DAT_10168820;
        return 1;
      }
      goto LAB_1007c7a2;
    }
  }
  return 0;
}

