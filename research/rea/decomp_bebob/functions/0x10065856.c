// rea decompile_all
// name: SaveState
// address: 0x10065856
// body: available
// range: 0x10065856-0x1006599c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CMDIClientAreaWnd::SaveState(char const *,unsigned int)
    public: int __thiscall CMDIClientAreaWnd::SaveState(wchar_t const *,unsigned int)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall SaveState(void *this,short *param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  uchar *_Memory;
  CSettingsStore *pCVar2;
  int iVar3;
  CArchive local_a8 [72];
  CMemFile local_60 [52];
  undefined4 local_2c;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x98;
  local_8 = 0x10065865;
  local_18 = 0;
  FUN_1009b642(&local_1c,DAT_101684cc,param_1);
  local_8 = 0;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(&param_1,(int *)ppuVar1);
  local_8._0_1_ = 1;
  FUN_100022f0(&param_1,L"%sMDIClientArea-%d");
  local_8._0_1_ = 2;
  CMemFile::CMemFile(local_60,0x400);
  local_8._0_1_ = 3;
  CArchive::CArchive(local_a8,(CFile *)local_60,0,0x1000,(void *)0x0);
  local_8._0_1_ = 4;
  (**(code **)(*(int *)this + 8))(local_a8);
  CArchive::Flush(local_a8);
  local_8._0_1_ = 3;
  CArchive::~CArchive(local_a8);
  local_2c = FUN_1009a92f((int)local_60);
  _Memory = CMemFile::Detach(local_60);
  if (_Memory != (uchar *)0x0) {
    local_24 = (int *)0x0;
    local_20 = 0;
    local_8 = CONCAT31(local_8._1_3_,5);
    pCVar2 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_24,0,0);
    iVar3 = (**(code **)(*(int *)pCVar2 + 0xc))(param_1);
    if (iVar3 != 0) {
      local_18 = (**(code **)(*(int *)pCVar2 + 0x28))(L"MDITabsState",_Memory,local_2c);
    }
    _free(_Memory);
    local_8._0_1_ = 3;
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 4))(1);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  CMemFile::~CMemFile(local_60);
  FUN_10001030((undefined4 *)(param_1 + -8));
  FUN_10001030((undefined4 *)(local_1c + -0x10));
  return local_18;
}

