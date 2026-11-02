// rea decompile_all
// name: CMFCMaskedEdit::OnCharBackspace
// address: 0x1004dfa8
// body: available
// range: 0x1004dfa8-0x1004e3d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004e0db to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: void __thiscall CMFCMaskedEdit::OnCharBackspace(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCMaskedEdit::OnCharBackspace(CMFCMaskedEdit *this,uint param_1,uint param_2,uint param_3)

{
  short sVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x1004dfb4;
  SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_24,(LPARAM)&local_1c);
  GetGroupBounds(this,&local_18,local_14,local_24,1);
  if (((((-1 < local_24) || (local_1c <= *(int *)(*(int *)(this + 0x74) + -0xc))) &&
       (local_18 <= local_24)) && ((local_24 <= local_14[0] && (local_18 <= local_1c)))) &&
     (local_1c <= local_14[0])) {
    if (local_24 == local_1c) {
      iVar4 = *(int *)(this + 0x78);
      if (*(int *)(iVar4 + -0xc) != 0) {
        if (local_1c != local_18) {
          iVar9 = local_24 + -1;
          local_18 = 1;
          if ((-1 < iVar9) &&
             (local_20 = *(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> **)
                          (iVar4 + -0xc), iVar9 <= (int)local_20)) {
            puVar6 = (ushort *)(iVar4 + iVar9 * 2);
            local_28 = 1;
            puVar3 = puVar6 + 1;
            do {
              if (local_14[0] <= local_24) break;
              if ((local_24 < 0) || ((int)local_20 < local_24)) goto LAB_1004e0d6;
              local_2c = (uint)*puVar3;
              if (*puVar3 == *puVar6) {
                local_18 = local_18 + 1;
                puVar3 = puVar3 + 1;
                local_24 = local_24 + 1;
              }
              else {
                local_28 = 0;
              }
            } while (local_28 != 0);
            iVar4 = iVar9 + local_18;
            iVar8 = local_18;
            iVar7 = iVar9;
            local_28 = iVar4;
            while (iVar4 < local_14[0]) {
              if (iVar7 < 0) goto LAB_1004e0d6;
              local_2c = *(uint *)(*(int *)(this + 0x74) + -0xc);
              if ((int)local_2c < iVar7) goto LAB_1004e0d6;
              sVar1 = *(short *)(*(int *)(this + 0x74) + iVar7 * 2);
              if (sVar1 != *(short *)(this + 0x80)) {
                if ((*(int *)(*(int *)(this + 0x78) + -0xc) < iVar7) || ((int)local_2c < iVar7))
                goto LAB_1004e0d6;
                iVar4 = (**(code **)(*(int *)this + 0x160))
                                  (sVar1,*(undefined2 *)(*(int *)(this + 0x78) + iVar7 * 2));
                iVar8 = local_18;
                if (iVar4 == 0) goto LAB_1004e06a;
              }
              iVar7 = iVar7 + 1;
              iVar4 = iVar7 + iVar8;
            }
            local_20 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x74);
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                      (local_20,(int)local_14,iVar9);
            local_8 = 0;
            if (0 < local_18) {
              puVar5 = (undefined4 *)
                       ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                       Right((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             local_14,(int)&local_2c);
              local_8._0_1_ = 1;
              FUN_10007c90(local_14,puVar5);
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_10001030((undefined4 *)(local_2c - 0x10));
              ATL::CSimpleStringT<wchar_t,0>::AppendChar
                        ((CSimpleStringT<wchar_t,0> *)local_14,*(wchar_t *)(this + 0x80));
            }
            CEdit::SetSel((CEdit *)this,iVar9,local_28,0);
            SendMessageW(*(HWND *)(this + 0x20),0xc2,1,local_14[0]);
            CEdit::SetSel((CEdit *)this,iVar9,iVar9,0);
            iVar4 = *(int *)(local_14[0] + -0xc);
            iVar8 = 0;
            if (0 < iVar4) {
              do {
                if ((iVar8 < 0) || (iVar4 < iVar8)) goto LAB_1004e0d6;
                FUN_10015578(local_20,iVar8 + iVar9,*(wchar_t *)(local_14[0] + iVar8 * 2));
                iVar4 = *(int *)(local_14[0] + -0xc);
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar4);
            }
LAB_1004e394:
            FUN_10001030((undefined4 *)(local_14[0] + -0x10));
            return;
          }
          goto LAB_1004e0d6;
        }
        if (1 < local_1c) {
          GetGroupBounds(this,&local_18,local_14,local_1c + -1,0);
        }
        if ((local_18 == -1) || (iVar4 = local_14[0], local_1c <= local_14[0])) {
LAB_1004e06a:
          MessageBeep(0xffffffff);
          return;
        }
        goto LAB_1004e3cb;
      }
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_28,(LPARAM)&local_2c);
      CWnd::Default((CWnd *)this);
    }
    else {
      if (*(int *)(*(int *)(this + 0x7c) + -0xc) != 0) {
        iVar4 = 1;
        local_28 = local_24;
        if (-1 < local_24) {
          local_20 = *(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> **)
                      (*(int *)(this + 0x78) + -0xc);
          if (local_24 <= (int)local_20) {
            puVar6 = (ushort *)(*(int *)(this + 0x78) + local_24 * 2);
            uVar2 = *puVar6;
            local_2c = (uint)uVar2;
            local_18 = 1;
            iVar9 = local_24 + 1;
            puVar6 = puVar6 + 1;
            do {
              if (local_14[0] <= iVar9) break;
              if ((iVar9 < 0) || ((int)local_20 < iVar9)) goto LAB_1004e0d6;
              local_30 = (uint)*puVar6;
              if (*puVar6 == uVar2) {
                iVar4 = iVar4 + 1;
                iVar9 = iVar9 + 1;
                puVar6 = puVar6 + 1;
              }
              else {
                local_18 = 0;
              }
            } while (local_18 != 0);
            if (local_1c - local_24 <= iVar4) {
              local_20 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (this + 0x74);
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                        (local_20,(int)&local_18,local_24);
              local_8 = 2;
              if (0 < iVar4) {
                puVar5 = (undefined4 *)
                         ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                         Right((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_18,(int)&local_30);
                local_8._0_1_ = 3;
                FUN_10007c90(&local_18,puVar5);
                local_8._0_1_ = 2;
                FUN_10001030((undefined4 *)(local_30 - 0x10));
                puVar5 = (undefined4 *)
                         ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                         CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                   ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                     *)&local_30,*(wchar_t *)(this + 0x80),local_1c - local_24);
                local_8._0_1_ = 4;
                ATL::CSimpleStringT<wchar_t,0>::Append
                          ((CSimpleStringT<wchar_t,0> *)&local_18,(wchar_t *)*puVar5,
                           *(int *)((wchar_t *)*puVar5 + -6));
                local_8 = CONCAT31(local_8._1_3_,2);
                FUN_10001030((undefined4 *)(local_30 - 0x10));
              }
              CEdit::SetSel((CEdit *)this,local_28,local_28 + iVar4,0);
              iVar8 = local_18;
              SendMessageW(*(HWND *)(this + 0x20),0xc2,1,local_18);
              iVar9 = local_28;
              CEdit::SetSel((CEdit *)this,local_28,local_28,0);
              iVar4 = *(int *)(iVar8 + -0xc);
              iVar7 = 0;
              local_14[0] = iVar8;
              if (0 < iVar4) {
                do {
                  if ((iVar7 < 0) || (iVar4 < iVar7)) goto LAB_1004e0d6;
                  FUN_10015578(local_20,iVar7 + iVar9,*(wchar_t *)(iVar8 + iVar7 * 2));
                  iVar4 = *(int *)(iVar8 + -0xc);
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar4);
              }
              goto LAB_1004e394;
            }
            MessageBeep(0xffffffff);
            local_14[0] = local_28 + iVar4;
            iVar4 = local_28;
            goto LAB_1004e3cb;
          }
        }
LAB_1004e0d6:
                    /* WARNING: Subroutine does not return */
        FUN_10001000((undefined4 *)0x80070057);
      }
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_34,(LPARAM)&local_30);
      CWnd::Default((CWnd *)this);
      local_28 = local_34;
      local_2c = local_30;
    }
    DoUpdate(this,1,local_28,local_2c);
    return;
  }
  MessageBeep(0xffffffff);
  iVar4 = local_18;
LAB_1004e3cb:
  CEdit::SetSel((CEdit *)this,iVar4,local_14[0],0);
  return;
}

