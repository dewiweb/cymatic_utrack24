// rea decompile_all
// name: CMFCMaskedEdit::OnCharDelete
// address: 0x1004e3da
// body: available
// range: 0x1004e3da-0x1004e7ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004e4ef to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: void __thiscall CMFCMaskedEdit::OnCharDelete(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCMaskedEdit::OnCharDelete(CMFCMaskedEdit *this,uint param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint local_38;
  uint local_34;
  uint local_30;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x1004e3e6;
  SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_30,(LPARAM)&local_24);
  SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_1c,(LPARAM)local_14);
  GetGroupBounds(this,(int *)&local_1c,(int *)local_14,local_1c,1);
  if ((((((int)local_30 < 0) && (*(int *)(*(int *)(this + 0x74) + -0xc) < (int)local_24)) ||
       ((int)local_30 < (int)local_1c)) ||
      (((int)local_14[0] < (int)local_30 || ((int)local_24 < (int)local_1c)))) ||
     ((int)local_14[0] < (int)local_24)) {
    MessageBeep(0xffffffff);
LAB_1004e7e1:
    CEdit::SetSel((CEdit *)this,local_1c,local_14[0],0);
    return;
  }
  if (local_30 == local_24) {
    iVar6 = *(int *)(this + 0x78);
    if (*(int *)(iVar6 + -0xc) == 0) {
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_34,(LPARAM)&local_38);
      CWnd::Default((CWnd *)this);
LAB_1004e61e:
      DoUpdate(this,1,local_34,local_38);
      return;
    }
    if (local_24 == local_14[0]) {
LAB_1004e477:
      MessageBeep(0xffffffff);
      return;
    }
    local_18 = 1;
    local_28 = local_30;
    if ((-1 < (int)local_30) && (local_20 = *(int *)(iVar6 + -0xc), (int)local_30 <= local_20)) {
      puVar5 = (ushort *)(iVar6 + local_30 * 2);
      uVar1 = *puVar5;
      local_34 = (uint)uVar1;
      local_2c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x1;
      iVar6 = local_30 + 1;
      puVar5 = puVar5 + 1;
      do {
        if ((int)local_14[0] <= iVar6) break;
        if ((iVar6 < 0) || (local_20 < iVar6)) goto LAB_1004e4ea;
        local_38 = (uint)*puVar5;
        if (*puVar5 == uVar1) {
          local_18 = local_18 + 1;
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 1;
        }
        else {
          local_2c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0;
        }
      } while (local_2c != (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0
              );
      uVar3 = local_30 + local_18;
      uVar7 = local_18;
      uVar9 = local_30;
      local_34 = uVar3;
      while ((int)uVar3 < (int)local_14[0]) {
        if ((int)uVar9 < 0) goto LAB_1004e4ea;
        local_38 = *(uint *)(*(int *)(this + 0x74) + -0xc);
        if ((int)local_38 < (int)uVar9) goto LAB_1004e4ea;
        sVar2 = *(short *)(*(int *)(this + 0x74) + uVar9 * 2);
        if (sVar2 != *(short *)(this + 0x80)) {
          if ((*(int *)(*(int *)(this + 0x78) + -0xc) < (int)uVar9) || ((int)local_38 < (int)uVar9))
          goto LAB_1004e4ea;
          iVar6 = (**(code **)(*(int *)this + 0x160))
                            (sVar2,*(undefined2 *)(*(int *)(this + 0x78) + uVar9 * 2));
          uVar7 = local_18;
          if (iVar6 == 0) goto LAB_1004e477;
        }
        uVar9 = uVar9 + 1;
        uVar3 = uVar9 + uVar7;
      }
      local_2c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0x74)
      ;
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                (local_2c,(int)&local_20,local_28);
      local_8 = 0;
      if (0 < (int)local_18) {
        puVar4 = (undefined4 *)
                 ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Right
                           ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            &local_20,(int)&local_38);
        local_8._0_1_ = 1;
        FUN_10007c90(&local_20,puVar4);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_10001030((undefined4 *)(local_38 - 0x10));
        ATL::CSimpleStringT<wchar_t,0>::AppendChar
                  ((CSimpleStringT<wchar_t,0> *)&local_20,*(wchar_t *)(this + 0x80));
      }
      CEdit::SetSel((CEdit *)this,local_28,local_34,0);
      iVar10 = local_20;
      SendMessageW(*(HWND *)(this + 0x20),0xc2,1,local_20);
      uVar3 = local_28;
      CEdit::SetSel((CEdit *)this,local_28,local_28,0);
      iVar6 = *(int *)(iVar10 + -0xc);
      iVar8 = 0;
      if (0 < iVar6) {
        do {
          if ((iVar8 < 0) || (iVar6 < iVar8)) goto LAB_1004e4ea;
          FUN_10015578(local_2c,iVar8 + uVar3,*(wchar_t *)(iVar10 + iVar8 * 2));
          iVar6 = *(int *)(iVar10 + -0xc);
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar6);
      }
LAB_1004e7a7:
      FUN_10001030((undefined4 *)(iVar10 + -0x10));
      return;
    }
  }
  else {
    if (*(int *)(*(int *)(this + 0x7c) + -0xc) == 0) {
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_18,(LPARAM)&local_28);
      CWnd::Default((CWnd *)this);
      local_34 = local_18;
      local_38 = local_28;
      goto LAB_1004e61e;
    }
    iVar6 = 1;
    local_28 = local_30;
    if (-1 < (int)local_30) {
      local_20 = *(int *)(*(int *)(this + 0x78) + -0xc);
      if ((int)local_30 <= local_20) {
        puVar5 = (ushort *)(*(int *)(this + 0x78) + local_30 * 2);
        uVar1 = *puVar5;
        local_38 = (uint)uVar1;
        local_2c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x1;
        iVar10 = local_30 + 1;
        puVar5 = puVar5 + 1;
        do {
          if ((int)local_14[0] <= iVar10) break;
          if ((iVar10 < 0) || (local_20 < iVar10)) goto LAB_1004e4ea;
          local_34 = (uint)*puVar5;
          if (*puVar5 == uVar1) {
            iVar6 = iVar6 + 1;
            iVar10 = iVar10 + 1;
            puVar5 = puVar5 + 1;
          }
          else {
            local_2c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0;
          }
        } while (local_2c !=
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0);
        if ((int)(local_24 - local_30) <= iVar6) {
          local_2c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (this + 0x74);
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                    (local_2c,(int)&local_20,local_30);
          local_8 = 2;
          if (0 < iVar6) {
            puVar4 = (undefined4 *)
                     ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Right
                               ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                 *)&local_20,(int)&local_38);
            local_8._0_1_ = 3;
            FUN_10007c90(&local_20,puVar4);
            local_8._0_1_ = 2;
            FUN_10001030((undefined4 *)(local_38 - 0x10));
            puVar4 = (undefined4 *)
                     ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                     CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                               ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                 *)&local_38,*(wchar_t *)(this + 0x80),local_24 - local_30);
            local_8._0_1_ = 4;
            ATL::CSimpleStringT<wchar_t,0>::Append
                      ((CSimpleStringT<wchar_t,0> *)&local_20,(wchar_t *)*puVar4,
                       *(int *)((wchar_t *)*puVar4 + -6));
            local_8 = CONCAT31(local_8._1_3_,2);
            FUN_10001030((undefined4 *)(local_38 - 0x10));
          }
          CEdit::SetSel((CEdit *)this,local_28,local_28 + iVar6,0);
          iVar10 = local_20;
          SendMessageW(*(HWND *)(this + 0x20),0xc2,1,local_20);
          uVar3 = local_28;
          CEdit::SetSel((CEdit *)this,local_28,local_28,0);
          iVar6 = *(int *)(iVar10 + -0xc);
          iVar8 = 0;
          if (0 < iVar6) {
            do {
              if ((iVar8 < 0) || (iVar6 < iVar8)) goto LAB_1004e4ea;
              FUN_10015578(local_2c,iVar8 + uVar3,*(wchar_t *)(iVar10 + iVar8 * 2));
              iVar6 = *(int *)(iVar10 + -0xc);
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar6);
          }
          goto LAB_1004e7a7;
        }
        MessageBeep(0xffffffff);
        local_14[0] = local_28 + iVar6;
        local_1c = local_28;
        goto LAB_1004e7e1;
      }
    }
  }
LAB_1004e4ea:
                    /* WARNING: Subroutine does not return */
  FUN_10001000((undefined4 *)0x80070057);
}

