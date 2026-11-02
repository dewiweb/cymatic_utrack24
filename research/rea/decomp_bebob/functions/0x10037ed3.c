// rea decompile_all
// name: CMenuHash::LoadMenuBar
// address: 0x10037ed3
// body: available
// range: 0x10037ed3-0x10037f74 inclusive
// range: 0x10037f8a-0x10037f93 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037ef2 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMenuHash::LoadMenuBar(struct HMENU__ *,class CMFCToolBar *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMenuHash::LoadMenuBar(CMenuHash *this,HMENU__ *param_1,CMFCToolBar *param_2)

{
  int iVar1;
  DWORD DVar2;
  CArchive local_84 [72];
  CFile local_3c [32];
  CMFCToolBarButton *local_1c;
  CMenuHash *local_18;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x74;
  local_8 = 0x10037edf;
  local_18 = this;
  if (param_1 == (HMENU__ *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  iVar1 = CMap<unsigned_int,unsigned_int&,CMFCToolBarButton*,CMFCToolBarButton*&>::Lookup
                    ((CMap<unsigned_int,unsigned_int&,CMFCToolBarButton*,CMFCToolBarButton*&> *)
                     (this + 4),(uint *)&param_1,&local_1c);
  if ((iVar1 != 0) && (DVar2 = SetFilePointer(local_1c,0,(PLONG)0x0,0), DVar2 != 0xffffffff)) {
    local_8 = 0;
    CFile::CFile(local_3c,local_1c);
    local_8._0_1_ = 1;
    CArchive::CArchive(local_84,local_3c,1,0x1000,(void *)0x0);
    *(undefined4 *)(this + 0x20) = 1;
    local_8._0_1_ = 2;
    (**(code **)(*(int *)param_2 + 8))(local_84);
    *(undefined4 *)(this + 0x20) = 0;
    local_8._0_1_ = 1;
    CArchive::~CArchive(local_84);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000d6fb(local_3c);
    return 1;
  }
  return 0;
}

