// rea decompile_all
// name: CMFCMaskedEdit::OnCharPrintchar
// address: 0x1004db86
// body: available
// range: 0x1004db86-0x1004dfa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004de2d to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: void __thiscall CMFCMaskedEdit::OnCharPrintchar(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCMaskedEdit::OnCharPrintchar(CMFCMaskedEdit *this,uint param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  ulong uVar2;
  int iVar3;
  LPARAM *pLVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x1004db92;
  local_18 = param_1 & 0xffff;
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 0x10) != 0) {
      uVar1 = _towlower((wint_t)param_1);
      goto LAB_1004dbba;
    }
  }
  else {
    uVar1 = _towupper((wint_t)param_1);
LAB_1004dbba:
    local_18 = (uint)uVar1;
  }
  SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_1c,(LPARAM)local_14);
  GetGroupBounds(this,(int *)&local_20,(int *)&param_1,local_1c,1);
  if (((((int)local_1c < 0) && (*(int *)(*(int *)(this + 0x74) + -0xc) < (int)local_14[0])) ||
      ((int)local_1c < (int)local_20)) ||
     ((((int)param_1 < (int)local_1c || ((int)local_14[0] < (int)local_20)) ||
      ((int)param_1 < (int)local_14[0])))) {
    MessageBeep(0xffffffff);
    uVar8 = local_20;
    uVar9 = param_1;
LAB_1004df99:
    CEdit::SetSel((CEdit *)this,uVar8,uVar9,0);
  }
  else {
    if (local_1c == local_14[0]) {
      if (*(int *)(*(int *)(this + 0x78) + -0xc) == 0) {
        iVar3 = CheckChar(this,(wchar_t)local_18,local_1c);
        if (iVar3 != 0) {
          SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_28,(LPARAM)&param_1);
          CWnd::Default((CWnd *)this);
          local_34 = param_1;
LAB_1004dd77:
          DoUpdate(this,1,local_28,local_34);
          return;
        }
      }
      else {
        if (local_14[0] == param_1) {
          if (((*(int *)(*(int *)(this + 0x74) + -0xc) + -1 <= (int)local_14[0]) ||
              (GetGroupBounds(this,(int *)&local_20,(int *)&param_1,local_14[0] + 1,1),
              local_20 == 0xffffffff)) || ((int)local_20 <= (int)local_14[0])) goto LAB_1004dc4d;
          CEdit::SetSel((CEdit *)this,local_20,local_20,0);
          local_1c = local_20;
          local_14[0] = local_20;
        }
        iVar3 = CheckChar(this,(wchar_t)local_18,local_1c);
        if (iVar3 != 0) {
          CEdit::SetSel((CEdit *)this,local_1c,local_14[0] + 1,0);
          pLVar4 = (LPARAM *)
                   ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                   CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                             ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_28,(wchar_t)local_18,1);
          SendMessageW(*(HWND *)(this + 0x20),0xc2,1,*pLVar4);
          FUN_10001030((undefined4 *)(local_28 - 0x10));
          FUN_10015578(this + 0x74,local_14[0],(wchar_t)local_18);
          CEdit::SetSel((CEdit *)this,local_14[0] + 1,local_14[0] + 1,0);
          SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_1c,(LPARAM)local_14);
          if (local_14[0] != param_1) {
            return;
          }
          if ((int)local_14[0] < *(int *)(*(int *)(this + 0x74) + -0xc) + -1) {
            GetGroupBounds(this,(int *)&local_20,(int *)&param_1,local_14[0] + 1,1);
          }
          if (local_20 == 0xffffffff) {
            return;
          }
          uVar8 = local_20;
          uVar9 = local_20;
          if ((int)local_20 <= (int)local_14[0]) {
            return;
          }
          goto LAB_1004df99;
        }
      }
    }
    else {
      iVar3 = CheckChar(this,(wchar_t)local_18,local_1c);
      if (iVar3 != 0) {
        if (*(int *)(*(int *)(this + 0x7c) + -0xc) == 0) {
          SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_30,(LPARAM)&local_34);
          CWnd::Default((CWnd *)this);
          local_28 = local_30;
          goto LAB_1004dd77;
        }
        local_20 = 1;
        local_24 = local_1c;
        if ((int)local_1c < 0) {
LAB_1004de28:
                    /* WARNING: Subroutine does not return */
          FUN_10001000((undefined4 *)0x80070057);
        }
        local_2c = *(int *)(*(int *)(this + 0x78) + -0xc);
        if (local_2c < (int)local_1c) goto LAB_1004de28;
        puVar5 = (ushort *)(*(int *)(this + 0x78) + local_1c * 2);
        uVar1 = *puVar5;
        local_30 = (uint)uVar1;
        local_28 = 1;
        iVar3 = local_1c + 1;
        puVar5 = puVar5 + 1;
        do {
          if ((int)param_1 <= iVar3) break;
          if ((iVar3 < 0) || (local_2c < iVar3)) goto LAB_1004de28;
          local_34 = (uint)*puVar5;
          if (*puVar5 == uVar1) {
            local_20 = local_20 + 1;
            iVar3 = iVar3 + 1;
            puVar5 = puVar5 + 1;
          }
          else {
            local_28 = 0;
          }
        } while (local_28 != 0);
        uVar9 = local_20;
        if ((int)(local_14[0] - local_1c) <= (int)local_20) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (this + 0x74),(int)&param_1,local_1c);
          local_8 = 0;
          uVar8 = param_1;
          if (0 < (int)uVar9) {
            iVar3 = local_14[0] - local_1c;
            puVar6 = (undefined4 *)
                     ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Right
                               ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                 *)&param_1,(int)&local_34);
            local_8._0_1_ = 1;
            FUN_10007c90(&param_1,puVar6);
            local_8._0_1_ = 0;
            FUN_10001030((undefined4 *)(local_34 - 0x10));
            puVar6 = (undefined4 *)
                     ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                     CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                               ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                 *)&local_34,*(wchar_t *)(this + 0x80),iVar3 + -1);
            local_8._0_1_ = 2;
            ATL::CSimpleStringT<wchar_t,0>::Append
                      ((CSimpleStringT<wchar_t,0> *)&param_1,(wchar_t *)*puVar6,
                       *(int *)((wchar_t *)*puVar6 + -6));
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_10001030((undefined4 *)(local_34 - 0x10));
            local_34 = *(uint *)(param_1 - 0xc);
            if ((int)local_34 < 1) goto LAB_1004de28;
            if (1 < *(int *)(param_1 - 4)) {
              FUN_10001130(&param_1,local_34);
            }
            uVar8 = param_1;
            *(undefined2 *)param_1 = (undefined2)local_18;
            FUN_100010c0(&param_1,local_34);
          }
          CEdit::SetSel((CEdit *)this,local_24,local_20 + local_24,0);
          SendMessageW(*(HWND *)(this + 0x20),0xc2,1,uVar8);
          iVar7 = 0;
          CEdit::SetSel((CEdit *)this,local_24,local_24,0);
          iVar3 = *(int *)(uVar8 - 0xc);
          if (0 < iVar3) {
            do {
              if ((iVar7 < 0) || (iVar3 < iVar7)) goto LAB_1004de28;
              FUN_10015578(this + 0x74,local_24 + iVar7,*(wchar_t *)(uVar8 + iVar7 * 2));
              iVar3 = *(int *)(uVar8 - 0xc);
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar3);
          }
          CEdit::SetSel((CEdit *)this,local_1c + 1,local_1c + 1,0);
          FUN_10001030((undefined4 *)(uVar8 - 0x10));
          return;
        }
        MessageBeep(0xffffffff);
        uVar8 = local_24;
        uVar9 = local_24 + uVar9;
        goto LAB_1004df99;
      }
    }
LAB_1004dc4d:
    MessageBeep(0xffffffff);
  }
  return;
}

