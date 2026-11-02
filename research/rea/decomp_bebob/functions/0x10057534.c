// rea decompile_all
// name: CFrameWnd::UpdateFrameTitleForDocument
// address: 0x10057534
// body: available
// range: 0x10057534-0x10057645 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CFrameWnd::UpdateFrameTitleForDocument(wchar_t const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameWnd::UpdateFrameTitleForDocument(CFrameWnd *this,wchar_t *param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  wchar_t *local_58;
  wchar_t local_54 [38];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x10057540;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(&local_58,(int *)ppuVar1);
  local_8 = 0;
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar2 & 0x4000) == 0) {
    ATL::CSimpleStringT<wchar_t,0>::Append
              ((CSimpleStringT<wchar_t,0> *)&local_58,*(wchar_t **)(this + 0xe4),
               *(int *)(*(wchar_t **)(this + 0xe4) + -6));
    if (param_1 == (wchar_t *)0x0) goto LAB_1005762a;
    sVar3 = _wcslen(L" - ");
    ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_58,L" - ",sVar3);
    ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_58,param_1);
    if (*(int *)(this + 0x78) < 1) goto LAB_1005762a;
    _swprintf_s(local_54,0x20,L":%d",*(int *)(this + 0x78));
    sVar3 = _wcslen(local_54);
    pwVar4 = local_54;
  }
  else {
    if (param_1 != (wchar_t *)0x0) {
      ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_58,param_1);
      if (0 < *(int *)(this + 0x78)) {
        _swprintf_s(local_54,0x20,L":%d",*(int *)(this + 0x78));
        sVar3 = _wcslen(local_54);
        ATL::CSimpleStringT<wchar_t,0>::Append
                  ((CSimpleStringT<wchar_t,0> *)&local_58,local_54,sVar3);
      }
      sVar3 = _wcslen(L" - ");
      ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_58,L" - ",sVar3);
    }
    pwVar4 = *(wchar_t **)(this + 0xe4);
    sVar3 = *(size_t *)(pwVar4 + -6);
  }
  ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_58,pwVar4,sVar3);
LAB_1005762a:
  AfxSetWindowText(*(HWND__ **)(this + 0x20),local_58);
  FUN_10001030((undefined4 *)(local_58 + -8));
  FUN_100f90cf();
  return;
}

