// rea decompile_all
// name: CFileDialog::GetPathName
// address: 0x1001d3e9
// body: available
// range: 0x1001d3e9-0x1001d5b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   > __thiscall CFileDialog::GetPathName(void)const 
   
   Library: Visual Studio 2010 Release */

undefined4 * __thiscall CFileDialog::GetPathName(CFileDialog *this)

{
  undefined **ppuVar1;
  int iVar2;
  int *piVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  LRESULT LVar6;
  undefined4 *in_stack_00000004;
  LPARAM local_20;
  int *local_1c;
  short *local_18;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x1001d3f5;
  local_20 = 0;
  if (*(int *)(this + 0x98) == 1) {
    if (*(int *)(this + 0x20) != 0) {
      ppuVar1 = FUN_1000ad47();
      FUN_10005e00(&local_1c,(int *)ppuVar1);
      local_8 = 0;
      iVar2 = (**(code **)(**(int **)(this + 0xa4) + 0x38))(*(int **)(this + 0xa4),local_14);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*local_14[0] + 0x18))(local_14[0],0x400000,&local_20);
        if ((iVar2 != 1) ||
           (iVar2 = (**(code **)(*local_14[0] + 0x18))(local_14[0],0x20000000,&local_20), iVar2 != 0
           )) {
          local_18 = (short *)0x0;
          iVar2 = (**(code **)(*local_14[0] + 0x14))(local_14[0],0x80058000,&local_18);
          if (-1 < iVar2) {
            FUN_100022b0(&local_1c,local_18);
            ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)&local_1c,-1)
            ;
            CoTaskMemFree(local_18);
          }
        }
        (**(code **)(*local_14[0] + 8))(local_14[0]);
      }
LAB_1001d4a8:
      piVar3 = FUN_10005e30(local_1c + -4);
      *in_stack_00000004 = piVar3 + 4;
      FUN_10001030(local_1c + -4);
      return in_stack_00000004;
    }
  }
  else if (((*(uint *)(*(int *)(this + 0x94) + 0x34) & 0x80000) != 0) &&
          (*(int *)(this + 0x20) != 0)) {
    ppuVar1 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar1);
    local_8 = 1;
    local_20 = FUN_10002140(local_14,0x104);
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    LVar6 = SendMessageW(*(HWND *)(pCVar5 + 0x20),0x464,0x104,local_20);
    if (LVar6 < 0) {
      ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)local_14);
    }
    else {
      ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)local_14,-1);
    }
    if (local_14[0][-3] != 0) {
      local_20 = FUN_10002140(local_14,0x104);
      pHVar4 = GetParent(*(HWND *)(this + 0x20));
      pCVar5 = CWnd::FromHandle(pHVar4);
      LVar6 = SendMessageW(*(HWND *)(pCVar5 + 0x20),0x465,0x104,local_20);
      if (-1 < LVar6) {
        ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)local_14,-1);
        local_1c = local_14[0];
        goto LAB_1001d4a8;
      }
      ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)local_14);
    }
    local_8 = 0xffffffff;
    FUN_10001030(local_14[0] + -4);
  }
  FUN_10006ce0(in_stack_00000004,*(short **)(*(int *)(this + 0x94) + 0x1c));
  return in_stack_00000004;
}

