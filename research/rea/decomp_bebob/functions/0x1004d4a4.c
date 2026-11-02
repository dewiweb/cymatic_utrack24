// rea decompile_all
// name: CMFCMaskedEdit::SetValue
// address: 0x1004d4a4
// body: available
// range: 0x1004d4a4-0x1004d727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004d4c0 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1004d528 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall CMFCMaskedEdit::SetValue(wchar_t const *,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCMaskedEdit::SetValue(CMFCMaskedEdit *this,wchar_t *param_1,int param_2)

{
  wchar_t wVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  wchar_t *pwVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int local_18;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1004d4b0;
  iVar6 = 0;
  if (param_1 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  FUN_10006ce0(&param_1,param_1);
  iVar3 = *(int *)(*(int *)(this + 0x78) + -0xc);
  local_8 = 0;
  pwVar5 = param_1;
  if (iVar3 != 0) {
    if (param_2 == 0) {
      iVar3 = 0;
      if (0 < *(int *)(*(int *)(this + 0x7c) + -0xc)) {
        do {
          if ((iVar3 < 0) || (*(int *)(*(int *)(this + 0x7c) + -0xc) < iVar3)) goto LAB_1004d523;
          if (*(short *)(*(int *)(this + 0x7c) + iVar3 * 2) == 0x5f) {
            iVar6 = iVar6 + 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(*(int *)(this + 0x7c) + -0xc));
      }
      bVar9 = SBORROW4(*(int *)(param_1 + -6),iVar6);
      iVar6 = *(int *)(param_1 + -6) - iVar6;
      bVar8 = iVar6 == 0;
    }
    else {
      iVar7 = *(int *)(param_1 + -6);
      bVar9 = SBORROW4(iVar7,iVar3);
      iVar6 = iVar7 - iVar3;
      bVar8 = iVar7 == iVar3;
    }
    if (!bVar8 && bVar9 == iVar6 < 0) {
LAB_1004d4ed:
      FUN_10001030((undefined4 *)(pwVar5 + -8));
      return 0;
    }
  }
  if (*(int *)(*(int *)(this + 0x84) + -0xc) == 0) {
LAB_1004d5bf:
    iVar6 = 0;
    if (*(int *)(*(int *)(this + 0x78) + -0xc) == 0) {
      FUN_10007c90(this + 0x74,&param_1);
    }
    else {
      piVar4 = FUN_10005e30((int *)(*(int *)(this + 0x7c) + -0x10));
      local_14[0] = piVar4 + 4;
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0 < piVar4[1]) {
        do {
          if ((iVar6 < 0) || (*(int *)(*(int *)(this + 0x7c) + -0xc) < iVar6)) goto LAB_1004d523;
          if (*(short *)(*(int *)(this + 0x7c) + iVar6 * 2) == 0x5f) {
            FUN_10015578(local_14,iVar6,*(wchar_t *)(this + 0x80));
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_14[0][-3]);
      }
      iVar3 = *(int *)(param_1 + -6);
      iVar6 = 0;
      iVar7 = 0;
      local_18 = 0;
      pwVar5 = param_1;
      if (0 < iVar3) {
LAB_1004d633:
        iVar2 = *(int *)(this + 0x7c);
        if (*(int *)(iVar2 + -0xc) <= iVar7) goto LAB_1004d6d7;
        if ((iVar7 < 0) || (*(int *)(iVar2 + -0xc) < iVar7)) goto LAB_1004d523;
        wVar1 = *(wchar_t *)(iVar2 + iVar7 * 2);
        if (wVar1 != L'_') goto LAB_1004d6ab;
        if ((iVar6 < 0) || (iVar3 < iVar6)) goto LAB_1004d523;
        wVar1 = pwVar5[iVar6];
        if (wVar1 != *(wchar_t *)(this + 0x80)) {
          if (*(int *)(*(int *)(this + 0x78) + -0xc) < iVar7) goto LAB_1004d523;
          iVar6 = (**(code **)(*(int *)this + 0x160))
                            (wVar1,*(undefined2 *)(*(int *)(this + 0x78) + iVar7 * 2));
          if (iVar6 == 0) {
LAB_1004d6f0:
            FUN_10001030(local_14[0] + -4);
            pwVar5 = param_1;
            goto LAB_1004d4ed;
          }
        }
        FUN_10015578(local_14,iVar7,wVar1);
        iVar6 = local_18 + 1;
        pwVar5 = param_1;
        local_18 = iVar6;
        goto LAB_1004d6cb;
      }
LAB_1004d6d7:
      FUN_10007c90(this + 0x74,local_14);
      FUN_10001030(local_14[0] + -4);
    }
    FUN_10001030((undefined4 *)(param_1 + -8));
    return 1;
  }
  bVar8 = true;
  iVar6 = 0;
LAB_1004d547:
  iVar3 = *(int *)(pwVar5 + -6);
  if (iVar3 <= iVar6) {
    if (bVar8) goto LAB_1004d5bf;
    goto LAB_1004d4ed;
  }
  iVar7 = *(int *)(this + 0x7c);
  if (*(int *)(iVar7 + -0xc) != 0) {
    if ((iVar6 < 0) || (*(int *)(iVar7 + -0xc) < iVar6)) goto LAB_1004d523;
    if (*(short *)(iVar7 + iVar6 * 2) != 0x5f) goto LAB_1004d5a9;
    if (*(int *)(iVar7 + -0xc) != 0) {
      if ((-1 < iVar6) && (iVar6 <= iVar3)) {
        if (pwVar5[iVar6] == *(wchar_t *)(this + 0x80)) goto LAB_1004d5a9;
        goto LAB_1004d581;
      }
      goto LAB_1004d523;
    }
  }
LAB_1004d581:
  if ((iVar6 < 0) || (iVar3 < iVar6)) goto LAB_1004d523;
  iVar3 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (this + 0x84),pwVar5[iVar6],0);
  bVar8 = iVar3 != -1;
  pwVar5 = param_1;
LAB_1004d5a9:
  iVar6 = iVar6 + 1;
  if (!bVar8) goto LAB_1004d4ed;
  goto LAB_1004d547;
LAB_1004d6ab:
  if (param_2 != 0) {
    if ((iVar6 < 0) || (iVar3 < iVar6)) {
LAB_1004d523:
                    /* WARNING: Subroutine does not return */
      FUN_10001000((undefined4 *)0x80070057);
    }
    if (wVar1 != pwVar5[iVar6]) goto LAB_1004d6f0;
    iVar6 = iVar6 + 1;
    local_18 = iVar6;
  }
LAB_1004d6cb:
  iVar3 = *(int *)(pwVar5 + -6);
  iVar7 = iVar7 + 1;
  if (iVar3 <= iVar6) goto LAB_1004d6d7;
  goto LAB_1004d633;
}

