// rea decompile_all
// name: CTagManager::ExcludeTag
// address: 0x100443da
// body: available
// range: 0x100443da-0x100446ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004456d to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CTagManager::ExcludeTag(wchar_t const *,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CTagManager::ExcludeTag
          (CTagManager *this,wchar_t *param_1,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2,int param_3)

{
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  size_t _MaxCount;
  int iVar4;
  int local_3c;
  int local_38;
  int local_34;
  size_t local_30;
  int local_2c;
  size_t local_28;
  int local_24;
  int local_20;
  uint local_1c;
  wchar_t *local_18;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x100443e6;
  this_00 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 4);
  local_2c = *(int *)(*(int *)this_00 + -0xc);
  local_1c = 0;
  FUN_10006ce0(local_14,(short *)&DAT_1011f32c);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)local_14,param_1);
  ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT<wchar_t,0> *)local_14,L'>');
  _MaxCount = *(size_t *)(local_14[0] + -6);
  local_30 = _MaxCount;
  local_34 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                       (this_00,local_14[0],0);
  if (-1 < local_34) {
    iVar4 = local_34 + _MaxCount;
    local_24 = iVar4;
    FUN_10006ce0(&local_18,(short *)&DAT_1011f320);
    local_8._0_1_ = 1;
    ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_18,param_1);
    ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT<wchar_t,0> *)&local_18,L'>');
    local_28 = *(size_t *)(local_18 + -6);
    iVar3 = local_2c - local_28;
    local_20 = 1;
    for (; iVar4 < iVar3 + 1; iVar4 = iVar4 + 1) {
      if ((iVar4 < 0) || (*(int *)(*(int *)this_00 + -0xc) < iVar4)) goto LAB_10044568;
      if (*(short *)(*(int *)this_00 + iVar4 * 2) == 0x3c) {
        if (iVar4 < (int)(local_2c - _MaxCount)) {
          puVar1 = (undefined4 *)
                   ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                             (this_00,(int)&local_38);
          local_1c = local_1c | 1;
          iVar2 = _wcsncmp((wchar_t *)*puVar1,local_14[0],_MaxCount);
          param_1 = (wchar_t *)CONCAT13(1,param_1._0_3_);
          if (iVar2 != 0) goto LAB_100444d5;
        }
        else {
LAB_100444d5:
          param_1 = (wchar_t *)((uint)param_1 & 0xffffff);
        }
        if ((local_1c & 1) != 0) {
          local_1c = local_1c & 0xfffffffe;
          FUN_10001030((undefined4 *)(local_38 + -0x10));
        }
        if (param_1._3_1_ == '\0') {
          puVar1 = (undefined4 *)
                   ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                             (this_00,(int)&local_3c);
          iVar2 = _wcsncmp((wchar_t *)*puVar1,local_18,local_28);
          FUN_10001030((undefined4 *)(local_3c + -0x10));
          _MaxCount = local_30;
          if (iVar2 == 0) {
            local_20 = local_20 + -1;
            if (local_20 == 0) {
              if ((iVar4 != -1) && (local_24 <= iVar4)) {
                puVar1 = (undefined4 *)
                         ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                         Mid(this_00,(int)&param_1,local_24);
                this_01 = param_2;
                local_8._0_1_ = 2;
                FUN_10007c90(param_2,puVar1);
                local_8._0_1_ = 1;
                FUN_10001030((undefined4 *)(param_1 + -8));
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimLeft
                          (this_01);
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimRight
                          (this_01);
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Delete
                          (this_00,local_34,(iVar4 - local_34) + local_28);
                if (param_3 != 0) {
                  iVar4 = *(int *)(*(short **)this_01 + -6);
                  if (1 < iVar4) {
                    if (iVar4 < 0) {
LAB_10044568:
                    /* WARNING: Subroutine does not return */
                      FUN_10001000((undefined4 *)0x80070057);
                    }
                    if (**(short **)this_01 == 0x22) {
                      puVar1 = (undefined4 *)
                               ATL::
                               CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                               Mid(this_01,(int)&param_1,1);
                      local_8._0_1_ = 3;
                      FUN_10007c90(this_01,puVar1);
                      local_8._0_1_ = 1;
                      FUN_10001030((undefined4 *)(param_1 + -8));
                    }
                  }
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                            (this_01,L"\\t",L"\t");
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                            (this_01,L"\\n",L"\n");
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                            (this_01,L"\\r",L"\r");
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                            (this_01,L"\\b",L"\b");
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                            (this_01,L"LT",L"<");
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                            (this_01,L"GT",L">");
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                            (this_01,L"AMP",L"&");
                }
                FUN_10001030((undefined4 *)(local_18 + -8));
                FUN_10001030((undefined4 *)(local_14[0] + -8));
                return 1;
              }
              break;
            }
            iVar4 = iVar4 + -1 + local_28;
          }
        }
        else {
          local_20 = local_20 + 1;
          iVar4 = iVar4 + -1 + _MaxCount;
        }
      }
    }
    FUN_10001030((undefined4 *)(local_18 + -8));
  }
  FUN_10001030((undefined4 *)(local_14[0] + -8));
  return 0;
}

