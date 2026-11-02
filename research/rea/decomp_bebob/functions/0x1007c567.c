// rea decompile_all
// name: CDockablePane::DrawCaption
// address: 0x1007c567
// body: available
// range: 0x1007c567-0x1007c763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007c5f0 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CDockablePane::DrawCaption(class CDC *,class CRect)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDockablePane::DrawCaption
          (CDockablePane *this,CDC *param_1,LONG param_3,int param_4,LONG param_5,LONG param_6)

{
  int iVar1;
  CDC *this_00;
  int iVar2;
  LONG *pLVar3;
  undefined4 *puVar4;
  CMFCVisualManager *pCVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  LONG local_50;
  LONG local_4c;
  LONG local_48;
  LONG local_44;
  int local_3c;
  CDC *local_38;
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 uStack_20;
  LONG local_1c;
  undefined4 uStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x1007c573;
  local_38 = param_1;
  local_50 = param_5;
  local_48 = param_5;
  local_4c = param_6;
  local_44 = param_6;
  iVar2 = *(int *)(this + 0x328);
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) goto LAB_1007c5bb;
    if ((iVar2 < 0) || (*(int *)(this + 0x328) <= iVar2)) goto LAB_1007c5f0;
    iVar1 = *(int *)(*(int *)(this + 0x324) + iVar2 * 4);
  } while ((*(int *)(iVar1 + 0x18) != 0) || (*(int *)(iVar1 + 0xc) != 0));
  if (iVar2 < *(int *)(this + 0x328)) {
    pLVar3 = (LONG *)(**(code **)(**(int **)(*(int *)(this + 0x324) + iVar2 * 4) + 0xc))(&local_24);
    local_50 = *pLVar3;
    local_4c = pLVar3[1];
    local_48 = pLVar3[2];
    local_44 = pLVar3[3];
LAB_1007c5bb:
    local_1c = param_3;
    iVar2 = *(int *)(this + 0x328);
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) goto LAB_1007c642;
      if ((iVar2 < 0) || (*(int *)(this + 0x328) <= iVar2)) goto LAB_1007c5f0;
      iVar1 = *(int *)(*(int *)(this + 0x324) + iVar2 * 4);
    } while ((*(int *)(iVar1 + 0x18) == 0) || (*(int *)(iVar1 + 0xc) != 0));
    if (iVar2 < *(int *)(this + 0x328)) {
      puVar4 = (undefined4 *)
               (**(code **)(**(int **)(*(int *)(this + 0x324) + iVar2 * 4) + 0xc))(local_34);
      local_24 = *puVar4;
      uStack_20 = puVar4[1];
      local_1c = puVar4[2];
      uStack_18 = puVar4[3];
LAB_1007c642:
      pCVar5 = CMFCVisualManager::GetInstance();
      this_00 = local_38;
      uVar6 = (**(code **)(*(int *)pCVar5 + 0x50))
                        (local_38,this,*(undefined4 *)(this + 0x2c8),param_3,param_4,param_5,param_6
                         ,local_50,local_4c,local_48,local_44);
      iVar2 = 0;
      if (0 < *(int *)(this + 0x328)) {
        do {
          if ((iVar2 < 0) || (*(int *)(this + 0x328) <= iVar2)) goto LAB_1007c5f0;
          iVar1 = iVar2 * 4;
          iVar2 = iVar2 + 1;
          *(undefined4 *)(*(int *)(*(int *)(this + 0x324) + iVar1) + 0x20) = uVar6;
        } while (iVar2 < *(int *)(this + 0x328));
      }
      local_38 = (CDC *)CDC::SetBkMode(this_00,1);
      uVar6 = (**(code **)(*(int *)this_00 + 0x30))(uVar6);
      iVar2 = (**(code **)(*(int *)this_00 + 0x28))(&DAT_10166bb4);
      if (iVar2 != 0) {
        ppuVar7 = FUN_1000ad47();
        FUN_10005e00(&local_3c,(int *)ppuVar7);
        local_8 = 0;
        CWnd::GetWindowTextW
                  ((CWnd *)this,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c);
        param_4 = param_4 + 1;
        param_5 = local_50;
        param_3 = local_1c;
        InflateRect((LPRECT)&param_3,DAT_10161384 * -2,0);
        (**(code **)(*(int *)this_00 + 0x68))
                  (local_3c,*(undefined4 *)(local_3c + -0xc),&param_3,0x8024);
        (**(code **)(*(int *)this_00 + 0x28))(iVar2);
        CDC::SetBkMode(this_00,(int)local_38);
        (**(code **)(*(int *)this_00 + 0x30))(uVar6);
        FUN_10001030((undefined4 *)(local_3c + -0x10));
        FUN_100f90cf();
        return;
      }
    }
  }
LAB_1007c5f0:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

