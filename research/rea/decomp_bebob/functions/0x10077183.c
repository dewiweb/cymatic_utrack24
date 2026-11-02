// rea decompile_all
// name: CMFCTabCtrl::EnableTabDocumentsMenu
// address: 0x10077183
// body: available
// range: 0x10077183-0x1007724c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100771ef to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    public: void __thiscall CMFCTabCtrl::EnableTabDocumentsMenu(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTabCtrl::EnableTabDocumentsMenu(CMFCTabCtrl *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined **ppuVar3;
  HMODULE pHVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x1007718f;
  puVar6 = auStack_20;
  if ((*(int *)(this + 0x204) != 0) && (*(int *)(this + 0x218) == 0)) {
LAB_10077245:
    *(undefined4 *)(puVar6 + -4) = 0x1007724a;
    return;
  }
  *(int *)(this + 0x244) = param_1;
  ppuVar3 = FUN_1000ad47();
  FUN_10005e00(&param_1,(int *)ppuVar3);
  iVar1 = *(int *)(this + 0x244);
  local_8 = 0;
  pHVar4 = (HMODULE)FUN_1000ac62();
  if (pHVar4 != (HMODULE)0x0) {
    iVar5 = FUN_10006200(&param_1,pHVar4,(-(uint)(iVar1 != 0) & 0x3f0) + 0x3ea3);
    iVar1 = param_1;
    if (iVar5 != 0) {
      if (*(int *)(this + 0x218) != 0) {
        SetTooltip(this + 0xaa4,(wchar_t *)param_1);
      }
      SetScrollButtons(this);
      puVar6 = &stack0xffffffdc;
      (**(code **)(*(int *)this + 0x180))();
      *(undefined4 *)(this + 600) = 0;
      *(undefined4 *)(this + 0x264) = 0;
      if (-1 < *(int *)(this + 0xa0)) {
        iVar5 = *(int *)this;
        *(int *)(puVar6 + -4) = *(int *)(this + 0xa0);
        pcVar2 = *(code **)(iVar5 + 0x220);
        puVar7 = (undefined4 *)(puVar6 + -8);
        puVar6 = puVar6 + -8;
        *puVar7 = 0x1007723d;
        (*pcVar2)();
      }
      *(undefined4 *)(puVar6 + -4) = 0x10077245;
      FUN_10001030((undefined4 *)(iVar1 + -0x10));
      goto LAB_10077245;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

