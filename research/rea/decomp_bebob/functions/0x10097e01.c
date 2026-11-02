// rea decompile_all
// name: COleDataSource::OnRenderData
// address: 0x10097e01
// body: available
// range: 0x10097e01-0x10097f3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10097f14 to 0x10009030 FUN_10009030 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall COleDataSource::OnRenderData(struct tagFORMATETC *,struct
   tagSTGMEDIUM *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
COleDataSource::OnRenderData(COleDataSource *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2)

{
  tagSTGMEDIUM *ptVar1;
  int iVar2;
  void *pvVar3;
  _union_2260 _Var4;
  CSharedFile local_64 [56];
  COleStreamFile local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  ptVar1 = param_2;
  uStack_4 = 0x54;
  local_8 = 0x10097e0d;
  if ((param_1->tymed & 1) != 0) {
    param_2 = (tagSTGMEDIUM *)(param_2->u).hBitmap;
    iVar2 = (**(code **)(*(int *)this + 0x50))(param_1,&param_2);
    if (iVar2 != 0) {
      ptVar1->tymed = 1;
      (ptVar1->u).hBitmap = (HBITMAP)param_2;
      return 1;
    }
    CSharedFile::CSharedFile(local_64,2,0x1000);
    local_8 = 0;
    if (ptVar1->tymed == 1) {
      CSharedFile::SetHandle(local_64,(ptVar1->u).hMetaFilePict,0);
    }
    iVar2 = (**(code **)(*(int *)this + 0x54))(param_1,local_64);
    if (iVar2 != 0) {
      ptVar1->tymed = 1;
      pvVar3 = CSharedFile::Detach(local_64);
      local_8 = 0xffffffff;
      (ptVar1->u).hMetaFilePict = pvVar3;
      CSharedFile::~CSharedFile(local_64);
      return 1;
    }
    if (ptVar1->tymed == 1) {
      CSharedFile::Detach(local_64);
    }
    local_8 = 0xffffffff;
    CSharedFile::~CSharedFile(local_64);
  }
  if ((param_1->tymed & 4) != 0) {
    COleStreamFile::COleStreamFile(local_2c,(IStream *)0x0);
    local_8 = 1;
    if (ptVar1->tymed == 4) {
      COleStreamFile::Attach(local_2c,(ptVar1->u).pstm);
    }
    else {
      iVar2 = COleStreamFile::CreateMemoryStream(local_2c,(CFileException *)0x0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009030();
      }
    }
    iVar2 = (**(code **)(*(int *)this + 0x54))(param_1,local_2c);
    if (iVar2 != 0) {
      ptVar1->tymed = 4;
      _Var4 = (_union_2260)FUN_100d92f4((int)local_2c);
      local_8 = 0xffffffff;
      ptVar1->u = _Var4;
      FUN_100d9465((CFile *)local_2c);
      return 1;
    }
    if (ptVar1->tymed == 4) {
      FUN_100d92f4((int)local_2c);
    }
    local_8 = 0xffffffff;
    FUN_100d9465((CFile *)local_2c);
  }
  return 0;
}

