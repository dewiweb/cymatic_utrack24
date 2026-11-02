// rea decompile_all
// name: FUN_10086a5b
// address: 0x10086a5b
// body: available
// range: 0x10086a5b-0x10086b22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10086a78 to 0x10086b33 FUN_10086b33 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10086abd to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __thiscall FUN_10086a5b(void *this,COleDataSource *param_1)

{
  ushort uVar1;
  int iVar2;
  CRuntimeClass *pCVar3;
  void *pvVar4;
  CArchive local_9c [72];
  CSharedFile local_54 [76];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x8c;
  local_8 = 0x10086a6a;
  iVar2 = (**(code **)(*(int *)this + 0x50))();
  if (iVar2 != 0) {
    local_8 = 0;
    CSharedFile::CSharedFile(local_54,2,0x1000);
    local_8._0_1_ = 1;
    CArchive::CArchive(local_9c,(CFile *)local_54,0,0x1000,(void *)0x0);
    local_8._0_1_ = 2;
    pCVar3 = (CRuntimeClass *)(*(code *)**(undefined4 **)this)();
    if (pCVar3 == (CRuntimeClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    CArchive::WriteClass(local_9c,pCVar3);
    (**(code **)(*(int *)this + 8))(local_9c);
    CArchive::Close(local_9c);
    pvVar4 = CSharedFile::Detach(local_54);
    uVar1 = CMFCToolBarButton::GetClipboardFormat();
    COleDataSource::CacheGlobalData(param_1,uVar1,pvVar4,(tagFORMATETC *)0x0);
    local_8._0_1_ = 1;
    CArchive::~CArchive(local_9c);
    local_8 = (uint)local_8._1_3_ << 8;
    CSharedFile::~CSharedFile(local_54);
  }
  FUN_10086b33();
  return;
}

