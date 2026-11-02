// rea decompile_all
// name: CMFCShellListCtrl::OnGetItemText
// address: 0x10043ffb
// body: available
// range: 0x10043ffb-0x1004417f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10044025 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CMFCShellListCtrl::OnGetItemText(int,int,struct
   _AFX_SHELLITEMINFO *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCShellListCtrl::OnGetItemText
          (CMFCShellListCtrl *this,int param_1,int param_2,_AFX_SHELLITEMINFO *param_3)

{
  DWORD_PTR DVar1;
  BOOL BVar2;
  int iVar3;
  int *piVar4;
  int in_stack_00000010;
  undefined **ppuVar5;
  int local_700;
  SHFILEINFOW local_6fc;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  byte local_428;
  WCHAR local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6f0;
  local_8 = 0x1004400a;
  local_700 = 0;
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if (param_3 == (_AFX_SHELLITEMINFO *)0x0) {
    DVar1 = SHGetFileInfoW(*(LPCWSTR *)(in_stack_00000010 + 4),0,&local_6fc,0x2b4,0x208);
    if (DVar1 == 0) goto LAB_1004403e;
    ppuVar5 = (undefined **)local_6fc.szDisplayName;
  }
  else {
    if (param_3 == (_AFX_SHELLITEMINFO *)0x1) {
LAB_1004407c:
      BVar2 = SHGetPathFromIDListW(*(LPCITEMIDLIST *)(in_stack_00000010 + 4),local_21c);
      if (BVar2 != 0) {
        local_448 = 0;
        local_444 = 0;
        local_440 = 0;
        local_43c = 0;
        local_438 = 0;
        local_434 = 0;
        iVar3 = CFile::GetStatus(local_21c,(CFileStatus *)&local_448,(CAtlTransactionManager *)0x0);
        if (iVar3 != 0) {
          ppuVar5 = FUN_1000ad47();
          FUN_10005e00(&local_700,(int *)ppuVar5);
          local_8 = 0;
          if (param_3 == (_AFX_SHELLITEMINFO *)0x1) {
            if ((local_428 & 0x18) == 0) {
              (**(code **)(*(int *)this + 0x19c))(local_430,local_42c,&local_700);
            }
          }
          else {
            (**(code **)(*(int *)this + 0x1a0))(&local_440,&local_700);
          }
          piVar4 = FUN_10005e30((int *)(local_700 + -0x10));
          *(int **)param_1 = piVar4 + 4;
          FUN_10001030((undefined4 *)(local_700 + -0x10));
          goto LAB_1004404a;
        }
      }
    }
    else if (param_3 == (_AFX_SHELLITEMINFO *)0x2) {
      DVar1 = SHGetFileInfoW(*(LPCWSTR *)(in_stack_00000010 + 4),0,&local_6fc,0x2b4,0x408);
      if (DVar1 != 0) {
        ppuVar5 = (undefined **)local_6fc.szTypeName;
        goto LAB_10044043;
      }
    }
    else if (param_3 == (_AFX_SHELLITEMINFO *)0x3) goto LAB_1004407c;
LAB_1004403e:
    ppuVar5 = &PTR_1011d390;
  }
LAB_10044043:
  FUN_10006ce0((void *)param_1,(short *)ppuVar5);
LAB_1004404a:
  FUN_100f90cf();
  return;
}

