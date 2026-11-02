// rea decompile_all
// name: RegisterWindowClass
// address: 0x1001934d
// body: available
// range: 0x1001934d-0x10019419 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001936d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   __thiscall AFX_GLOBAL_DATA::RegisterWindowClass(char const *)
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   > __thiscall AFX_GLOBAL_DATA::RegisterWindowClass(wchar_t const *)
   
   Library: Visual Studio 2010 Release */

undefined4 * RegisterWindowClass(undefined4 *param_1,int param_2)

{
  HINSTANCE hInstance;
  AFX_MODULE_STATE *pAVar1;
  undefined **ppuVar2;
  BOOL BVar3;
  int iVar4;
  tagWNDCLASSW local_40;
  undefined4 local_18;
  HCURSOR local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0;
  local_18 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  pAVar1 = AfxGetModuleState();
  hInstance = *(HINSTANCE *)(pAVar1 + 8);
  local_14 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(param_1,(int *)ppuVar2);
  local_8 = 0;
  local_18 = 1;
  FUN_100022f0(param_1,L"%s:%x:%x:%x:%x");
  BVar3 = GetClassInfoW(hInstance,(LPCWSTR)*param_1,&local_40);
  if (BVar3 == 0) {
    local_40.lpfnWndProc = DefWindowProcW_exref;
    local_40.hCursor = local_14;
    local_40.lpszClassName = (LPCWSTR)*param_1;
    local_40.style = 8;
    local_40.cbWndExtra = 0;
    local_40.cbClsExtra = 0;
    local_40.hIcon = (HICON)0x0;
    local_40.hbrBackground = (HBRUSH)0x10;
    local_40.lpszMenuName = (LPCWSTR)0x0;
    local_40.hInstance = hInstance;
    iVar4 = AfxRegisterClass(&local_40);
    if (iVar4 == 0) {
      FUN_100170f3();
    }
  }
  return param_1;
}

