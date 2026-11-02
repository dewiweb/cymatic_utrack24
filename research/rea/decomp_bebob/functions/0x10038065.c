// rea decompile_all
// name: CMenuHash::SaveMenuBar
// address: 0x10038065
// body: available
// range: 0x10038065-0x100381d2 inclusive
// range: 0x100381f1-0x10038210 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMenuHash::SaveMenuBar(struct HMENU__ *,class CMFCToolBar *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMenuHash::SaveMenuBar(CMenuHash *this,HMENU__ *param_1,CMFCToolBar *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  LPWSTR pWVar3;
  CMFCToolBarButton *pCVar4;
  void **ppvVar5;
  CArchive local_90 [72];
  CFile local_48 [32];
  CMap<unsigned_int,unsigned_int&,CMFCToolBarButton*,CMFCToolBarButton*&> *local_28;
  CMFCToolBarButton *local_24;
  CMenuHash *local_20;
  LPCWSTR local_1c;
  LPCWSTR local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x80;
  local_8 = 0x10038074;
  local_20 = this;
  iVar1 = FUN_100268b9((int)param_2);
  if (iVar1 != 0) {
    local_28 = (CMap<unsigned_int,unsigned_int&,CMFCToolBarButton*,CMFCToolBarButton*&> *)(this + 4)
    ;
    local_24 = (CMFCToolBarButton *)0x0;
    iVar1 = CMap<unsigned_int,unsigned_int&,CMFCToolBarButton*,CMFCToolBarButton*&>::Lookup
                      (local_28,(uint *)&param_1,&local_24);
    if (iVar1 != 0) {
      CloseHandle(local_24);
    }
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(&local_1c,(int *)ppuVar2);
    local_8 = 0;
    pWVar3 = (LPWSTR)FUN_10002140(&local_1c,0x104);
    GetTempPathW(0x104,pWVar3);
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)&local_1c,-1);
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(local_18,(int *)ppuVar2);
    local_8._0_1_ = 1;
    pWVar3 = (LPWSTR)FUN_10002140(local_18,0x104);
    GetTempFileNameW(local_1c,L"AFX",0,pWVar3);
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)local_18,-1);
    pCVar4 = CreateFileW(local_18[0],0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x4000100,(HANDLE)0x0
                        );
    local_24 = pCVar4;
    if (pCVar4 != (CMFCToolBarButton *)0xffffffff) {
      local_8._0_1_ = 2;
      CFile::CFile(local_48,pCVar4);
      local_8._0_1_ = 3;
      CArchive::CArchive(local_90,local_48,0,0x1000,(void *)0x0);
      *(undefined4 *)(local_20 + 0x20) = 1;
      local_8._0_1_ = 4;
      (**(code **)(*(int *)param_2 + 8))(local_90);
      CArchive::Flush(local_90);
      *(undefined4 *)(local_20 + 0x20) = 0;
      local_8._0_1_ = 3;
      CArchive::~CArchive(local_90);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_1000d6fb(local_48);
      local_8 = 1;
      ppvVar5 = CMap<HMENU__*,HMENU__*&,void*,void*&>::operator[]
                          ((CMap<HMENU__*,HMENU__*&,void*,void*&> *)local_28,&param_1);
      *ppvVar5 = pCVar4;
      FUN_10001030((undefined4 *)(local_18[0] + -8));
      FUN_10001030((undefined4 *)(local_1c + -8));
      return 1;
    }
    FUN_10001030((undefined4 *)(local_18[0] + -8));
    FUN_10001030((undefined4 *)(local_1c + -8));
  }
  return 0;
}

