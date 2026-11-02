// rea decompile_all
// name: CMFCShadowWnd::Create
// address: 0x1005f741
// body: available
// range: 0x1005f741-0x1005f817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCShadowWnd::Create(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCShadowWnd::Create(CMFCShadowWnd *this)

{
  int iVar1;
  HCURSOR pHVar2;
  _AFX_THREAD_STATE *p_Var3;
  ulong uVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  HBRUSH pHVar7;
  HICON pHVar8;
  _AFX_THREAD_STATE *local_28;
  int local_24 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x1005f74d;
  if (8 < DAT_10166c4c) {
    pHVar8 = (HICON)0x0;
    pHVar7 = (HBRUSH)0x10;
    pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    p_Var3 = AfxRegisterWndClass(0x800,pHVar2,pHVar7,pHVar8);
    FUN_10006ce0(&local_28,(short *)p_Var3);
    local_8 = 0;
    local_24[0] = 0;
    local_24[1] = 0;
    local_24[2] = 0;
    local_24[3] = 0;
    uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 0x120));
    if ((uVar4 & 0x400000) != 0) {
      *(undefined4 *)(this + 0x290) = 1;
    }
    pHVar5 = GetParent(*(HWND *)(*(int *)(this + 0x120) + 0x20));
    pCVar6 = CWnd::FromHandle(pHVar5);
    iVar1 = CreateEx(this,0x80080,local_28,(wchar_t *)&PTR_1011d390,0x80000000,local_24,(int)pCVar6,
                     (HMENU__ *)0x0);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(this + 0x128) + 0x2c))(*(undefined4 *)(this + 0x124),0x5a5a5a,0,0x32);
    }
    FUN_10001030((undefined4 *)(local_28 + -0x10));
  }
  iVar1 = FUN_100f90cf();
  return iVar1;
}

