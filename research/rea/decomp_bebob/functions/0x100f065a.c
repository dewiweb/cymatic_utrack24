// rea decompile_all
// name: FUN_100f065a
// address: 0x100f065a
// body: available
// range: 0x100f065a-0x100f07de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f07dd to 0x100f07f6 FUN_100f07f6 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_100f065a(short *param_1,int param_2,int param_3)

{
  undefined **ppuVar1;
  CSettingsStore *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CArchive local_ac [72];
  CMemFile local_64 [52];
  uint local_30;
  int *local_2c;
  undefined4 local_28;
  CWnd *local_24;
  int local_20;
  uchar *local_1c;
  int local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x9c;
  local_8 = 0x100f0669;
  FUN_1009b642(&local_20,DAT_10169ee0,param_1);
  local_8 = 0;
  if (param_2 == -1) {
    CWnd::GetDlgCtrlID(local_24);
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
  local_1c = (uchar *)0x0;
  local_2c = (int *)0x0;
  local_28 = 0;
  local_8._0_1_ = 2;
  pCVar2 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_2c,0,1);
  iVar3 = (**(code **)(*(int *)pCVar2 + 0x10))(local_18[0]);
  if (iVar3 == 0) {
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 4))(1);
    }
    FUN_10001030((undefined4 *)(local_18[0] + -0x10));
    FUN_10001030((undefined4 *)(local_20 + -0x10));
  }
  else {
    iVar3 = (**(code **)(*(int *)pCVar2 + 0x44))(L"Settings",&local_1c,&local_30);
    if (iVar3 != 0) {
      local_8._0_1_ = 3;
      CMemFile::CMemFile(local_64,local_1c,local_30,0);
      local_8._0_1_ = 4;
      CArchive::CArchive(local_ac,(CFile *)local_64,1,0x1000,(void *)0x0);
      local_8._0_1_ = 5;
      (**(code **)(*(int *)local_24 + 8))(local_ac);
      local_8._0_1_ = 4;
      CArchive::~CArchive(local_ac);
      local_8 = CONCAT31(local_8._1_3_,3);
      CMemFile::~CMemFile(local_64);
      local_8 = 2;
      uVar4 = FUN_100f07f6();
      return uVar4;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 4))(1);
    }
    FUN_10001030((undefined4 *)(local_18[0] + -0x10));
    FUN_10001030((undefined4 *)(local_20 + -0x10));
  }
  return 0;
}

