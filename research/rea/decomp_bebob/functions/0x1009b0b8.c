// rea decompile_all
// name: Read
// address: 0x1009b0b8
// body: available
// range: 0x1009b0b8-0x1009b173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009b0e8 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CSettingsStore::Read(char const *,class CRect &)
    public: virtual int __thiscall CSettingsStore::Read(wchar_t const *,class CRect &)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall Read(void *this,uint param_1,tagRECT *param_2)

{
  int iVar1;
  CArchive local_98 [72];
  CMemFile local_50 [52];
  undefined4 local_1c;
  uchar *local_18 [4];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x88;
  local_8 = 0x1009b0c7;
  local_1c = 0;
  local_18[0] = (uchar *)0x0;
  iVar1 = (**(code **)(*(int *)this + 0x44))(param_1,local_18,&param_1);
  if (iVar1 == 0) {
    if (local_18[0] == (uchar *)0x0) {
      return 0;
    }
  }
  else if (local_18[0] != (uchar *)0x0) {
    local_8 = 0;
    CMemFile::CMemFile(local_50,local_18[0],param_1,0);
    local_8._0_1_ = 1;
    CArchive::CArchive(local_98,(CFile *)local_50,1,0x1000,(void *)0x0);
    local_8._0_1_ = 2;
    operator>>(local_98,param_2);
    local_1c = 1;
    local_8._0_1_ = 1;
    CArchive::~CArchive(local_98);
    local_8 = (uint)local_8._1_3_ << 8;
    CMemFile::~CMemFile(local_50);
    local_8 = 0xffffffff;
    FUN_100085b9(local_18[0]);
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

