// rea decompile_all
// name: CMFCPopupMenuBar::OnCreate
// address: 0x100a1d9c
// body: available
// range: 0x100a1d9c-0x100a1e78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall CMFCPopupMenuBar::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCPopupMenuBar::OnCreate(CMFCPopupMenuBar *this,tagCREATESTRUCTW *param_1)

{
  int iVar1;
  CSettingsStore *pCVar2;
  undefined **ppuVar3;
  int *local_1c;
  undefined4 local_18;
  CMFCPopupMenuBar *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100a1da8;
  local_14 = this;
  iVar1 = CMFCToolBar::OnCreate((CMFCToolBar *)this,param_1);
  if (iVar1 == -1) {
    iVar1 = -1;
  }
  else {
    if (DAT_10161b38 == 0xffffffff) {
      local_1c = (int *)0x0;
      local_18 = 0;
      DAT_10161b38 = 500;
      local_8 = 0;
      pCVar2 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_1c,0,1);
      iVar1 = (**(code **)(*(int *)pCVar2 + 0x10))(L"Control Panel\\Desktop");
      if (iVar1 != 0) {
        ppuVar3 = FUN_1000ad47();
        FUN_10005e00(&param_1,(int *)ppuVar3);
        local_8 = CONCAT31(local_8._1_3_,1);
        iVar1 = (**(code **)(*(int *)pCVar2 + 0x4c))(L"MenuShowDelay",&param_1);
        if (iVar1 != 0) {
          DAT_10161b38 = __wtol((wchar_t *)param_1);
          if (5000 < DAT_10161b38) {
            DAT_10161b38 = 5000;
          }
        }
        FUN_10001030((undefined4 *)(param_1 + -0x10));
      }
      local_8 = 0xffffffff;
      if (local_1c != (int *)0x0) {
        (**(code **)(*local_1c + 4))(1);
      }
    }
    GetCursorPos((LPPOINT)(local_14 + 0xd18));
    iVar1 = 0;
  }
  return iVar1;
}

