// rea decompile_all
// name: COleDataSource::XDataObject::SetData
// address: 0x10098418
// body: available
// range: 0x10098418-0x10098499 inclusive
// range: 0x100984b9-0x100984d1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleDataSource::XDataObject::SetData(struct tagFORMATETC *,struct
   tagSTGMEDIUM *,int)
   
   Library: Visual Studio 2010 Release */

long COleDataSource::XDataObject::SetData(tagFORMATETC *param_1,tagSTGMEDIUM *param_2,int param_3)

{
  tagFORMATETC *ptVar1;
  AFX_DATACACHE_ENTRY *pAVar2;
  int iVar3;
  undefined4 in_stack_00000010;
  AFX_MAINTAIN_STATE2 local_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10098424;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_20,*(AFX_MODULE_STATE **)(param_1 + -1));
  local_8 = 0;
  if ((param_2 == (tagSTGMEDIUM *)0x0) || (param_3 == 0)) {
    local_8 = 0xffffffff;
    FUN_1000a3b1((ULONG_PTR *)local_20);
    param_1 = (tagFORMATETC *)0x80070057;
  }
  else {
    pAVar2 = Lookup((COleDataSource *)&param_1[-3].lindex,(tagFORMATETC *)param_2,2);
    if (pAVar2 == (AFX_DATACACHE_ENTRY *)0x0) {
      local_8 = 0xffffffff;
      FUN_1000a3b1((ULONG_PTR *)local_20);
      param_1 = (tagFORMATETC *)0x80040064;
    }
    else {
      ptVar1 = param_1 + -3;
      param_1 = (tagFORMATETC *)0x8000ffff;
      local_8 = CONCAT31(local_8._1_3_,1);
      iVar3 = (**(code **)(ptVar1->lindex + 0x5c))(param_2,param_3,in_stack_00000010);
      if (iVar3 != 0) {
        param_1 = (tagFORMATETC *)0x0;
      }
      local_8 = 0xffffffff;
      FUN_1000a3b1((ULONG_PTR *)local_20);
    }
  }
  return (long)param_1;
}

