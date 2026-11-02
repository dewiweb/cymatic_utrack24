// rea decompile_all
// name: SaveState
// address: 0x100f04b9
// body: available
// range: 0x100f04b9-0x100f0644 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCTasksPane::SaveState(char const *,int,unsigned int)
    public: virtual int __thiscall CMFCTasksPane::SaveState(wchar_t const *,int,unsigned int)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall SaveState(void *this,short *param_1,int param_2,int param_3)

{
  undefined **ppuVar1;
  uchar *_Memory;
  CSettingsStore *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CArchive local_a8 [72];
  CMemFile local_60 [48];
  undefined4 local_30;
  int *local_28;
  undefined4 local_24;
  void *local_20;
  int local_1c;
  int local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x98;
  local_8 = 0x100f04c8;
  local_20 = this;
  FUN_1009b642(&local_1c,DAT_10169ee0,param_1);
  local_8 = 0;
  if (param_2 == -1) {
    param_2 = CWnd::GetDlgCtrlID(this);
  }
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(local_18,(int *)ppuVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_3 == -1) {
    FUN_100022f0(local_18,L"%sMFCTasksPane-%d");
  }
  else {
    FUN_100022f0(local_18,L"%sMFCTasksPane-%d%x");
  }
  local_8._0_1_ = 2;
  CMemFile::CMemFile(local_60,0x400);
  local_8._0_1_ = 3;
  CArchive::CArchive(local_a8,(CFile *)local_60,0,0x1000,(void *)0x0);
  local_8._0_1_ = 4;
  (**(code **)(*(int *)this + 8))(local_a8);
  CArchive::Flush(local_a8);
  local_8._0_1_ = 3;
  CArchive::~CArchive(local_a8);
  local_30 = FUN_1009a92f((int)local_60);
  _Memory = CMemFile::Detach(local_60);
  if (_Memory != (uchar *)0x0) {
    local_28 = (int *)0x0;
    local_24 = 0;
    local_8 = CONCAT31(local_8._1_3_,5);
    pCVar2 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_28,0,0);
    iVar3 = (**(code **)(*(int *)pCVar2 + 0xc))(local_18[0]);
    if (iVar3 != 0) {
      (**(code **)(*(int *)pCVar2 + 0x28))(L"Settings",_Memory,local_30);
    }
    _free(_Memory);
    local_8._0_1_ = 3;
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 4))(1);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  CMemFile::~CMemFile(local_60);
  local_8 = 1;
  uVar4 = FUN_100788a6(local_20,param_1,param_2,param_3);
  FUN_10001030((undefined4 *)(local_18[0] + -0x10));
  FUN_10001030((undefined4 *)(local_1c + -0x10));
  return uVar4;
}

