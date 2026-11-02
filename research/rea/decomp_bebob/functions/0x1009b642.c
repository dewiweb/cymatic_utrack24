// rea decompile_all
// name: FUN_1009b642
// address: 0x1009b642
// body: available
// range: 0x1009b642-0x1009b777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009b65f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __cdecl FUN_1009b642(undefined4 *param_1,wchar_t *param_2,short *param_3)

{
  int iVar1;
  undefined **ppuVar2;
  AFX_MODULE_STATE *pAVar3;
  size_t sVar4;
  int *piVar5;
  wchar_t *local_18;
  int local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1009b64e;
  local_18 = (wchar_t *)0x0;
  if (param_2 != (wchar_t *)0x0) {
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar2);
    local_8 = 0;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      FUN_100022b0(local_14,param_3);
LAB_1009b754:
      piVar5 = FUN_10005e30((int *)(local_14[0] + -0x10));
      *param_1 = piVar5 + 4;
      FUN_10001030((int *)(local_14[0] + -0x10));
      return param_1;
    }
    pAVar3 = AfxGetModuleState();
    iVar1 = *(int *)(pAVar3 + 4);
    pAVar3 = AfxGetModuleState();
    if (*(int *)(*(int *)(pAVar3 + 4) + 0x58) != 0) {
      pAVar3 = AfxGetModuleState();
      if (*(int *)(*(int *)(pAVar3 + 4) + 0x6c) != 0) {
        sVar4 = _wcslen(L"SOFTWARE\\");
        FUN_10002180(local_14,L"SOFTWARE\\",sVar4);
        FUN_10006ce0(&local_18,*(short **)(iVar1 + 0x58));
        local_8._0_1_ = 1;
        if (*(int *)(local_18 + -6) != 0) {
          ATL::CSimpleStringT<wchar_t,0>::Append
                    ((CSimpleStringT<wchar_t,0> *)local_14,local_18,*(int *)(local_18 + -6));
          sVar4 = _wcslen(L"\\");
          ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)local_14,L"\\",sVar4);
        }
        ATL::CSimpleStringT<wchar_t,0>::Append
                  ((CSimpleStringT<wchar_t,0> *)local_14,*(wchar_t **)(iVar1 + 0x6c));
        sVar4 = _wcslen(L"\\");
        ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)local_14,L"\\",sVar4);
        ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)local_14,param_2);
        sVar4 = _wcslen(L"\\");
        ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)local_14,L"\\",sVar4);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_10001030((undefined4 *)(local_18 + -8));
        goto LAB_1009b754;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

