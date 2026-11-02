// rea decompile_all
// name: CFile::GetStatus
// address: 0x10015d89
// body: available
// range: 0x10015d89-0x10015ee9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static int __stdcall CFile::GetStatus(wchar_t const *,struct CFileStatus &,class
   ATL::CAtlTransactionManager *)
   
   Library: Visual Studio 2010 Release */

int CFile::GetStatus(wchar_t *param_1,CFileStatus *param_2,CAtlTransactionManager *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  CTime local_34 [4];
  CAtlTransactionManager *local_30;
  byte local_2c [4];
  _FILETIME local_28;
  _FILETIME local_20;
  _FILETIME local_18;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_30 = param_3;
  if ((param_1 != (wchar_t *)0x0) && (iVar2 = lstrlenW(param_1), iVar2 < 0x104)) {
    iVar2 = AfxFullPath((wchar_t *)(param_2 + 0x22),param_1);
    if (iVar2 == 0) {
      *(wchar_t *)(param_2 + 0x22) = L'\0';
    }
    else {
      if (local_30 == (CAtlTransactionManager *)0x0) {
        iVar2 = GetFileAttributesExW(param_1,GetFileExInfoStandard,local_2c);
      }
      else {
        iVar2 = ATL::CAtlTransactionManager::GetFileAttributesExW
                          (local_30,param_1,GetFileExInfoStandard,local_2c);
      }
      if (iVar2 != 0) {
        param_2[0x20] = (CFileStatus)(local_2c[0] & 0x7f);
        lVar3 = __allshl(0x20,0);
        *(int *)(param_2 + 0x18) = (int)lVar3;
        *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | local_c;
        *(int *)(param_2 + 0x1c) = (int)((ulonglong)lVar3 >> 0x20);
        *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
        iVar2 = ATL::CTime::IsValidFILETIME(&local_28);
        if (iVar2 == 0) {
          *(undefined4 *)param_2 = 0;
          *(undefined4 *)(param_2 + 4) = 0;
        }
        else {
          puVar1 = (undefined4 *)ATL::CTime::CTime(local_34,&local_28,-1);
          *(undefined4 *)param_2 = *puVar1;
          *(undefined4 *)(param_2 + 4) = puVar1[1];
        }
        iVar2 = ATL::CTime::IsValidFILETIME(&local_20);
        if (iVar2 == 0) {
          *(undefined4 *)(param_2 + 0x10) = 0;
          *(undefined4 *)(param_2 + 0x14) = 0;
        }
        else {
          puVar1 = (undefined4 *)ATL::CTime::CTime(local_34,&local_20,-1);
          *(undefined4 *)(param_2 + 0x10) = *puVar1;
          *(undefined4 *)(param_2 + 0x14) = puVar1[1];
        }
        iVar2 = ATL::CTime::IsValidFILETIME(&local_18);
        if (iVar2 == 0) {
          *(undefined4 *)(param_2 + 8) = 0;
          *(undefined4 *)(param_2 + 0xc) = 0;
        }
        else {
          puVar1 = (undefined4 *)ATL::CTime::CTime(local_34,&local_18,-1);
          *(undefined4 *)(param_2 + 8) = *puVar1;
          *(undefined4 *)(param_2 + 0xc) = puVar1[1];
        }
        if (*(int *)param_2 == 0 && *(int *)(param_2 + 4) == 0) {
          *(undefined4 *)param_2 = *(undefined4 *)(param_2 + 8);
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_2 + 0xc);
        }
        if (*(int *)(param_2 + 0x10) == 0 && *(int *)(param_2 + 0x14) == 0) {
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 8);
          *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0xc);
        }
      }
    }
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

