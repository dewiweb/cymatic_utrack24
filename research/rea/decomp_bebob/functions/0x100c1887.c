// rea decompile_all
// name: FUN_100c1887
// address: 0x100c1887
// body: available
// range: 0x100c1887-0x100c19a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c199c to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_100c1887(CSimpleStringT<wchar_t,0> *param_1,uint param_2,int param_3)

{
  WCHAR ch;
  undefined **ppuVar1;
  size_t sVar2;
  HKL dwhkl;
  UINT UVar3;
  uint lParam;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *local_80;
  WCHAR local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x74;
  local_8 = 0x100c1893;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(&local_80,(int *)ppuVar1);
  iVar6 = 0;
  local_8 = 0;
  if (param_2 == 0x13) {
    sVar2 = _wcslen(L"Pause");
    pwVar7 = L"Pause";
  }
  else {
    _memset(local_7c,0,0x66);
    dwhkl = GetKeyboardLayout(0);
    UVar3 = MapVirtualKeyExW(param_2,0,dwhkl);
    lParam = UVar3 << 0x10 | 1;
    if (((0x20 < param_2) && (param_2 < 0x30)) || (param_2 == 0x6f)) {
      lParam = UVar3 << 0x10 | 0x1000001;
    }
    GetKeyNameTextW(lParam,local_7c,0x32);
    sVar2 = _wcslen(local_7c);
    pwVar7 = local_7c;
  }
  FUN_10002180(&local_80,pwVar7,sVar2);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::MakeLower
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_80);
  pwVar7 = local_80;
  iVar5 = *(int *)(local_80 + -6);
  if (0 < iVar5) {
    do {
      if ((iVar6 < 0) || (iVar5 < iVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_10001000((undefined4 *)0x80070057);
      }
      ch = pwVar7[iVar6];
      BVar4 = IsCharLowerW(ch);
      if (BVar4 != 0) {
        iVar5 = _toupper((uint)(ushort)ch);
        FUN_10015578(&local_80,iVar6,(wchar_t)iVar5);
        pwVar7 = local_80;
        break;
      }
      iVar5 = *(int *)(pwVar7 + -6);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  ATL::CSimpleStringT<wchar_t,0>::Append(param_1,pwVar7,*(int *)(pwVar7 + -6));
  if (param_3 == 0) {
    ATL::CSimpleStringT<wchar_t,0>::AppendChar(param_1,L'+');
  }
  FUN_10001030((undefined4 *)(pwVar7 + -8));
  FUN_100f90cf();
  return;
}

