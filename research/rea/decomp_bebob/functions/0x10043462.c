// rea decompile_all
// name: CMFCShellListCtrl::OnCompareItems
// address: 0x10043462
// body: available
// range: 0x10043462-0x100436a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004348b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCShellListCtrl::OnCompareItems(long,long,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCShellListCtrl::OnCompareItems(CMFCShellListCtrl *this,long param_1,long param_2,int param_3)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  DWORD_PTR DVar4;
  SHFILEINFOW local_dd8;
  SHFILEINFOW local_b24;
  undefined4 local_870;
  undefined4 local_86c;
  undefined4 local_868;
  undefined4 local_864;
  undefined4 local_860;
  undefined4 local_85c;
  undefined4 local_644;
  undefined4 local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_634;
  undefined4 local_630;
  WCHAR local_418 [260];
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((param_1 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  local_870 = 0;
  local_86c = 0;
  local_868 = 0;
  local_864 = 0;
  local_860 = 0;
  local_85c = 0;
  local_644 = 0;
  local_640 = 0;
  local_63c = 0;
  local_638 = 0;
  local_634 = 0;
  local_630 = 0;
  if (param_3 == 0) {
    (**(code **)(**(int **)param_1 + 0x1c))
              (*(int **)param_1,0,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
    goto LAB_10043693;
  }
  if (param_3 != 1) {
    if (param_3 == 2) {
      DVar4 = SHGetFileInfoW(*(LPCWSTR *)(param_1 + 4),0,&local_b24,0x2b4,0x408);
      if ((DVar4 != 0) &&
         (DVar4 = SHGetFileInfoW(*(LPCWSTR *)(param_2 + 4),0,&local_dd8,0x2b4,0x408), DVar4 != 0)) {
        lstrcmpiW(local_b24.szTypeName,local_dd8.szTypeName);
      }
      goto LAB_10043693;
    }
    if (param_3 != 3) goto LAB_10043693;
  }
  BVar2 = SHGetPathFromIDListW(*(LPCITEMIDLIST *)(param_1 + 4),local_418);
  if ((((BVar2 != 0) &&
       (iVar3 = CFile::GetStatus(local_418,(CFileStatus *)&local_870,(CAtlTransactionManager *)0x0),
       iVar3 != 0)) &&
      (BVar2 = SHGetPathFromIDListW(*(LPCITEMIDLIST *)(param_2 + 4),local_210), BVar2 != 0)) &&
     (((iVar3 = CFile::GetStatus(local_210,(CFileStatus *)&local_644,(CAtlTransactionManager *)0x0),
       iVar3 != 0 && (param_3 != 1)) &&
      (bVar1 = ATL::CTime::operator<((CTime *)&local_868,local_63c,local_638), !bVar1)))) {
    ATL::CTime::operator>((CTime *)&local_868,local_63c,local_638);
  }
LAB_10043693:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

