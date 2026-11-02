// rea decompile_all
// name: COleDataObject::GetFileData
// address: 0x100df41b
// body: available
// range: 0x100df41b-0x100df5cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CFile * __thiscall COleDataObject::GetFileData(unsigned short,struct tagFORMATETC
   *)
   
   Library: Visual Studio 2010 Release */

CFile * __thiscall
COleDataObject::GetFileData(COleDataObject *this,ushort param_1,tagFORMATETC *param_2)

{
  undefined3 uVar1;
  tagFORMATETC *ptVar2;
  int iVar3;
  undefined **ppuVar4;
  tagFORMATETC local_48;
  tagSTGMEDIUM local_34;
  tagSTGMEDIUM local_28;
  COleStreamFile *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x100df427;
  EnsureClipboardObject(this);
  if ((*(int *)this == 0) || ((param_1 == 0 && (param_2 == (tagFORMATETC *)0x0)))) {
    return (CFile *)0x0;
  }
  ptVar2 = _AfxFillFormatEtc(param_2,param_1,&local_48);
  local_48.tymed = 0x27;
  iVar3 = (**(code **)(**(int **)this + 0xc))(*(int **)this,ptVar2,&local_28);
  if (iVar3 < 0) {
    return (CFile *)0x0;
  }
  if (local_28.pUnkForRelease != (IUnknown *)0x0) {
    local_34.tymed = 0;
    local_34.pUnkForRelease = (IUnknown *)0x0;
    if ((ptVar2 == (tagFORMATETC *)0x0) ||
       (iVar3 = _AfxCopyStgMedium(ptVar2->cfFormat,&local_34,&local_28), iVar3 == 0)) {
      ReleaseStgMedium(&local_28);
      return (CFile *)0x0;
    }
    ReleaseStgMedium(&local_28);
    local_28.tymed = local_34.tymed;
    local_28.u = local_34.u;
    local_28.pUnkForRelease = local_34.pUnkForRelease;
  }
  ppuVar4 = FUN_1000ad47();
  FUN_10005e00(&param_2,(int *)ppuVar4);
  _param_1 = (CSharedFile *)0x0;
  local_8._1_3_ = 0;
  uVar1 = local_8._1_3_;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (local_28.tymed != 1) {
    if (local_28.tymed == 2) {
      local_8._1_3_ = uVar1;
      FUN_100022b0(&param_2,local_28.u.lpszFileName);
      local_18 = FUN_1000858a(0x14);
      local_8._0_1_ = 2;
      if (local_18 == (COleStreamFile *)0x0) {
        _param_1 = (CSharedFile *)0x0;
      }
      else {
        _param_1 = (CSharedFile *)CFile::CFile((CFile *)local_18);
      }
      local_8._0_1_ = 1;
      iVar3 = (**(code **)(*(int *)_param_1 + 0x24))(param_2,0x12,0);
      if (iVar3 == 0) {
        (**(code **)(*(int *)_param_1 + 4))(1);
        _param_1 = (CSharedFile *)0x0;
      }
      else {
        CoTaskMemFree(local_28.u.hMetaFilePict);
      }
      goto LAB_100df4e2;
    }
    if (local_28.tymed == 4) {
      local_18 = FUN_1000858a(0x1c);
      local_8._0_1_ = 4;
      if (local_18 == (COleStreamFile *)0x0) {
        _param_1 = (CSharedFile *)0x0;
      }
      else {
        _param_1 = (CSharedFile *)COleStreamFile::COleStreamFile(local_18,local_28.u.pstm);
      }
      goto LAB_100df4e2;
    }
    if (local_28.tymed != 0x20) {
      ReleaseStgMedium(&local_28);
      goto LAB_100df4e2;
    }
  }
  local_8._1_3_ = uVar1;
  local_18 = FUN_1000858a(0x38);
  local_8._0_1_ = 3;
  if (local_18 == (COleStreamFile *)0x0) {
    _param_1 = (CSharedFile *)0x0;
  }
  else {
    _param_1 = (CSharedFile *)CSharedFile::CSharedFile((CSharedFile *)local_18,2,0x1000);
  }
  local_8._0_1_ = 1;
  CSharedFile::SetHandle(_param_1,local_28.u.hMetaFilePict,1);
LAB_100df4e2:
  FUN_10001030(&param_2[-1].ptd);
  return (CFile *)_param_1;
}

