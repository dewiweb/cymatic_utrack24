// rea decompile_all
// name: SaveState
// address: 0x10089dd1
// body: available
// range: 0x10089dd1-0x10089fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CPane::SaveState(char const *,int,unsigned int)
    public: virtual int __thiscall CPane::SaveState(wchar_t const *,int,unsigned int)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall SaveState(void *this,short *param_1,int param_2,int param_3)

{
  undefined **ppuVar1;
  CSettingsStore *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x10089ddd;
  FUN_1009b642(&local_18,DAT_101689e4,param_1);
  local_8 = 0;
  if (param_2 == -1) {
    param_2 = CWnd::GetDlgCtrlID(this);
  }
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(local_14,(int *)ppuVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_3 == -1) {
    FUN_100022f0(local_14,L"%sPane-%d");
  }
  else {
    FUN_100022f0(local_14,L"%sPane-%d%x");
  }
  local_24 = (int *)0x0;
  local_20 = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  pCVar2 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_24,0,0);
  iVar3 = (**(code **)(*(int *)pCVar2 + 0xc))(local_14[0]);
  if (iVar3 != 0) {
    local_1c = (**(code **)(*(int *)this + 0x16c))();
    if (local_1c == 0) {
      CPane::CalcRecentDockedRect(this);
      if (*(int **)((int)this + 0xac) != (int *)0x0) {
        uVar4 = (**(code **)(**(int **)((int)this + 0xac) + 400))();
        *(undefined4 *)((int)this + 0x1e8) = uVar4;
        iVar3 = FUN_10090c69(*(void **)((int)this + 0xac),*(int *)((int)this + 0xb0));
        *(int *)((int)this + 0x1f0) = iVar3;
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)this + 0x224))(0);
      if (iVar3 != 0) {
        GetWindowRect(*(HWND *)(iVar3 + 0x20),(LPRECT)((int)this + 0x1d8));
      }
    }
    (**(code **)(*(int *)pCVar2 + 0x38))(&DAT_10128990,*(undefined4 *)((int)this + 0x170));
    (**(code **)(*(int *)pCVar2 + 0x2c))(L"RectRecentFloat",(int)this + 0x1d8);
    (**(code **)(*(int *)pCVar2 + 0x2c))(L"RectRecentDocked",(int)this + 0x208);
    (**(code **)(*(int *)pCVar2 + 0x34))(L"RecentFrameAlignment",*(undefined4 *)((int)this + 0x1e8))
    ;
    (**(code **)(*(int *)pCVar2 + 0x38))(L"RecentRowIndex",*(undefined4 *)((int)this + 0x1f0));
    (**(code **)(*(int *)pCVar2 + 0x38))(L"IsFloating",local_1c);
    (**(code **)(*(int *)pCVar2 + 0x38))(L"MRUWidth",*(undefined4 *)((int)this + 300));
    (**(code **)(*(int *)pCVar2 + 0x38))(L"PinState",*(undefined4 *)((int)this + 0x16c));
  }
  uVar4 = SaveState(this,param_1,param_2,param_3);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 4))(1);
  }
  FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  FUN_10001030((undefined4 *)(local_18 + -0x10));
  return uVar4;
}

