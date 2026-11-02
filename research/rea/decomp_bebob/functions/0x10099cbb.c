// rea decompile_all
// name: CMFCCustomizeButton::OnCalculateSize
// address: 0x10099cbb
// body: available
// range: 0x10099cbb-0x10099db5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10099d07 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual struct tagSIZE __thiscall CMFCCustomizeButton::OnCalculateSize(class CDC *,class
   CSize const &,int)
   
   Library: Visual Studio 2010 Release */

tagSIZE __thiscall
CMFCCustomizeButton::OnCalculateSize
          (CMFCCustomizeButton *this,CDC *param_1,CSize *param_2,int param_3)

{
  undefined4 uVar1;
  HMODULE pHVar2;
  int iVar3;
  CMFCVisualManager *pCVar4;
  int iVar5;
  LONG LVar6;
  int iVar7;
  undefined8 uVar8;
  tagSIZE tVar9;
  int in_stack_00000010;
  CMFCCustomizeButton *local_c;
  CMFCCustomizeButton *pCStack_8;
  
  if (*(int *)(this + 0xfc) == 0) {
    local_c = this;
    pCStack_8 = this;
    if ((*(int *)(*(int *)(this + 0x2c) + -0xc) == 0) &&
       (((pHVar2 = (HMODULE)FUN_1000ac62(), pHVar2 == (HMODULE)0x0 ||
         (iVar3 = FUN_10006200(this + 0x2c,pHVar2,0x4279), iVar3 == 0)) ||
        (*(int *)(*(int *)(this + 0x2c) + -0xc) == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    if ((*(int *)(this + 0xf8) == 0) ||
       (iVar3 = (**(code **)(**(int **)(this + 0xf8) + 0x164))(), iVar3 != 0)) {
      pCVar4 = CMFCVisualManager::GetInstance();
      iVar3 = (**(code **)(*(int *)pCVar4 + 0x2dc))();
      if ((DAT_10166e5c == 0) || (DAT_10168c40 != 0)) {
        iVar7 = 1;
      }
      else {
        iVar7 = 2;
      }
      if (in_stack_00000010 == 0) {
        iVar5 = FUN_10037b18(&local_c);
        iVar5 = *(int *)(iVar5 + 4);
        LVar6 = *(LONG *)param_3;
        *(LONG *)param_1 = LVar6;
        *(int *)(param_1 + 4) = iVar5 * iVar7 + iVar3 * 2;
      }
      else {
        uVar1 = *(undefined4 *)(param_3 + 4);
        uVar8 = FUN_10037b18(&local_c);
        LVar6 = (LONG)((ulonglong)uVar8 >> 0x20);
        *(int *)param_1 = *(int *)uVar8 * iVar7 + iVar3 * 2;
        *(undefined4 *)(param_1 + 4) = uVar1;
      }
    }
    else {
      LVar6 = 0;
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else {
    LVar6 = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  tVar9.cy = LVar6;
  tVar9.cx = (LONG)param_1;
  return tVar9;
}

