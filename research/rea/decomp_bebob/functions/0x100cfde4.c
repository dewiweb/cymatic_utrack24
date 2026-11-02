// rea decompile_all
// name: CMFCToolBarComboBoxButton::CopyFrom
// address: 0x100cfde4
// body: available
// range: 0x100cfde4-0x100cfea1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100cfe42 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarComboBoxButton::CopyFrom(class CMFCToolBarButton
   const &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarComboBoxButton::CopyFrom(CMFCToolBarComboBoxButton *this,CMFCToolBarButton *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  CMFCToolBarButton::CopyFrom((CMFCToolBarButton *)this,param_1);
  FUN_1005419f((int)(this + 0xbc));
  puVar2 = *(undefined4 **)(param_1 + 0xc0);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      (**(code **)(*(int *)this + 0xe0))();
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xd8));
      puVar2 = *(undefined4 **)(param_1 + 0xdc);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 2;
        puVar2 = (undefined4 *)*puVar2;
        CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0xd8),(HWND__ *)*puVar1);
      }
      (**(code **)(*(int *)this + 0xdc))();
      *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
      *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
      *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
      *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
      *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
      *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
      return;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    puVar1 = (undefined4 *)*puVar2;
    AddTail(this + 0xbc,puVar2 + 2);
    puVar2 = puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

