// rea decompile_all
// name: LoadState
// address: 0x1006cac9
// body: available
// range: 0x1006cac9-0x1006cbc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CBasePane::LoadState(char const *,int,unsigned int)
    public: virtual int __thiscall CBasePane::LoadState(wchar_t const *,int,unsigned int)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall LoadState(void *this,short *param_1,int param_2,int param_3)

{
  undefined **ppuVar1;
  CSettingsStore *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int *local_1c;
  undefined4 local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x1006cad5;
  FUN_1009b642(local_14,DAT_10168628,param_1);
  local_8 = 0;
  if (param_2 == -1) {
    CWnd::GetDlgCtrlID(this);
  }
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(&param_1,(int *)ppuVar1);
  uVar4 = 1;
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_3 == -1) {
    FUN_100022f0(&param_1,L"%sBasePane-%d");
  }
  else {
    FUN_100022f0(&param_1,L"%sBasePane-%d%x");
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_8._0_1_ = 2;
  pCVar2 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_1c,0,1);
  iVar3 = (**(code **)(*(int *)pCVar2 + 0x10))(param_1);
  if (iVar3 == 0) {
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 4))(1);
    }
    uVar4 = 0;
  }
  else {
    (**(code **)(*(int *)pCVar2 + 0x54))(L"IsVisible",(int)this + 0x78);
    *(undefined4 *)((int)this + 0x7c) = 1;
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 4))(1);
    }
  }
  FUN_10001030((undefined4 *)(param_1 + -8));
  FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  return uVar4;
}

