// rea decompile_all
// name: CMFCToolBarComboBoxButton::Serialize
// address: 0x100d182c
// body: available
// range: 0x100d182c-0x100d1a4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarComboBoxButton::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarComboBoxButton::Serialize(CMFCToolBarComboBoxButton *this,CArchive *param_1)

{
  long *plVar1;
  CArchive *this_00;
  LRESULT LVar2;
  undefined **ppuVar3;
  HWND__ *pHVar4;
  undefined4 *puVar5;
  HWND__ *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  this_00 = param_1;
  uStack_4 = 8;
  local_8 = 0x100d1838;
  CMFCToolBarButton::Serialize((CMFCToolBarButton *)this,param_1);
  if (((byte)param_1[0x18] & 1) == 0) {
    CArchive::operator<<(param_1,*(long *)(this + 0x70));
    CArchive::operator<<(param_1,*(long *)(this + 0x8c));
    CArchive::operator<<(param_1,*(long *)(this + 0x74));
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xb8));
    CArchive::operator<<(param_1,*(long *)(this + 0x78));
    CArchive::operator<<(param_1,*(long *)(this + 0x88));
    if (*(int *)(this + 0xb4) != 0) {
      FUN_1005419f((int)(this + 0xbc));
      (**(code **)(*(int *)this + 0xe0))();
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xd8));
      param_1 = (CArchive *)0x0;
      LVar2 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x146,0,0);
      if (0 < LVar2) {
        do {
          ppuVar3 = FUN_1000ad47();
          FUN_10005e00(local_14,(int *)ppuVar3);
          local_8 = 0;
          CComboBox::GetLBText
                    (*(CComboBox **)(this + 0xb4),(int)param_1,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14)
          ;
          AddTail(this + 0xbc,local_14);
          pHVar4 = (HWND__ *)
                   SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x150,(WPARAM)param_1,0);
          CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0xd8),pHVar4);
          local_8 = 0xffffffff;
          FUN_10001030((undefined4 *)(local_14[0] + -0x10));
          param_1 = param_1 + 1;
          LVar2 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x146,0,0);
        } while ((int)param_1 < LVar2);
      }
    }
    (**(code **)(*(int *)(this + 0xbc) + 8))(this_00);
    puVar5 = *(undefined4 **)(this + 0xdc);
    while (puVar5 != (undefined4 *)0x0) {
      plVar1 = puVar5 + 2;
      puVar5 = (undefined4 *)*puVar5;
      CArchive::operator<<(this_00,*plVar1);
    }
  }
  else {
    CArchive::operator>>(param_1,(long *)(this + 0x70));
    *(int *)(this + 0x5c) = *(int *)(this + 0x54) + *(int *)(this + 0x70);
    CArchive::operator>>(param_1,(long *)(this + 0x8c));
    CArchive::operator>>(param_1,(long *)(this + 0x74));
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xb8));
    CArchive::operator>>(param_1,(long *)(this + 0x78));
    CArchive::operator>>(param_1,(long *)(this + 0x88));
    (**(code **)(*(int *)(this + 0xbc) + 8))(param_1);
    (**(code **)(*(int *)this + 0xe0))();
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xd8));
    param_1 = (CArchive *)0x0;
    if (0 < *(int *)(this + 200)) {
      do {
        CArchive::operator>>(this_00,(long *)&local_18);
        CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0xd8),local_18);
        param_1 = param_1 + 1;
      } while ((int)param_1 < *(int *)(this + 200));
    }
    (**(code **)(*(int *)this + 0xdc))();
    SelectItem(this,*(int *)(this + 0x74),1);
  }
  return;
}

