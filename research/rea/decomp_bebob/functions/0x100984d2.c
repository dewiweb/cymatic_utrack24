// rea decompile_all
// name: COleDataSource::XDataObject::EnumFormatEtc
// address: 0x100984d2
// body: available
// range: 0x100984d2-0x10098564 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleDataSource::XDataObject::EnumFormatEtc(unsigned long,struct
   IEnumFORMATETC * *)
   
   Library: Visual Studio 2010 Release */

long COleDataSource::XDataObject::EnumFormatEtc(ulong param_1,IEnumFORMATETC **param_2)

{
  long lVar1;
  CEnumFormatEtc *this;
  tagFORMATETC *ptVar2;
  uint uVar3;
  undefined4 *in_stack_0000000c;
  tagFORMATETC local_30;
  CEnumFormatEtc *local_18;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  uVar3 = 0;
  if (in_stack_0000000c == (undefined4 *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    *in_stack_0000000c = 0;
    local_8 = 0;
    local_18 = FUN_1000858a(0x40);
    local_8._0_1_ = 1;
    if (local_18 == (CEnumFormatEtc *)0x0) {
      this = (CEnumFormatEtc *)0x0;
    }
    else {
      this = (CEnumFormatEtc *)CEnumFormatEtc::CEnumFormatEtc(local_18);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    for (; uVar3 < *(uint *)(param_1 - 8); uVar3 = uVar3 + 1) {
      ptVar2 = (tagFORMATETC *)(uVar3 * 0x24 + *(int *)(param_1 - 0x10));
      if ((ptVar2[1].lindex & (uint)param_2) != 0) {
        _AfxOleCopyFormatEtc(&local_30,ptVar2);
        CEnumFormatEtc::AddFormat(this,&local_30);
      }
    }
    *in_stack_0000000c = this + 0x38;
    lVar1 = 0;
  }
  return lVar1;
}

