// rea decompile_all
// name: CMFCTasksPane::Serialize
// address: 0x100f15a4
// body: available
// range: 0x100f15a4-0x100f17d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f16f3 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCTasksPane::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTasksPane::Serialize(CMFCTasksPane *this,CArchive *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  CArchive *this_00;
  int iVar3;
  CStringArray *this_01;
  undefined4 *puVar4;
  CStringArray local_3c [8];
  int local_34;
  CStringArray local_28 [4];
  int local_24;
  int local_20;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  this_00 = param_1;
  uStack_4 = 0x2c;
  local_8 = 0x100f15b0;
  CDockablePane::Serialize((CDockablePane *)this,param_1);
  if (((byte)this_00[0x18] & 1) == 0) {
    CArchive::operator<<(this_00,*(long *)(this + 0x394));
    CArchive::operator<<(this_00,*(long *)(this + 0x398));
    CArchive::operator<<(this_00,*(long *)(this + 0x39c));
    CArchive::operator<<(this_00,*(long *)(this + 0x3a0));
    CArchive::operator<<(this_00,*(long *)(this + 0x3a4));
    CArchive::operator<<(this_00,*(long *)(this + 0x3a8));
    CArchive::operator<<(this_00,*(long *)(this + 0x3ac));
    CArchive::operator<<(this_00,*(long *)(this + 0x3b0));
    CArchive::operator<<(this_00,*(long *)(this + 0x3b4));
    iVar3 = GetActivePage(this);
    CArchive::operator<<(this_00,iVar3);
    CStringArray::CStringArray(local_3c);
    local_8 = 1;
    puVar4 = *(undefined4 **)(this + 0x450);
    while (puVar4 != (undefined4 *)0x0) {
      if (puVar4 == (undefined4 *)0x0) goto LAB_100f16f3;
      piVar1 = puVar4 + 2;
      puVar4 = (undefined4 *)*puVar4;
      SetAtGrow(local_3c,local_34,(undefined4 *)(*piVar1 + 4));
    }
    CStringArray::Serialize(local_3c,this_00);
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x484));
    this_01 = local_3c;
  }
  else {
    CArchive::operator>>(this_00,(long *)(this + 0x394));
    CArchive::operator>>(this_00,(long *)(this + 0x398));
    CArchive::operator>>(this_00,(long *)(this + 0x39c));
    CArchive::operator>>(this_00,(long *)(this + 0x3a0));
    CArchive::operator>>(this_00,(long *)(this + 0x3a4));
    CArchive::operator>>(this_00,(long *)(this + 0x3a8));
    CArchive::operator>>(this_00,(long *)(this + 0x3ac));
    CArchive::operator>>(this_00,(long *)(this + 0x3b0));
    CArchive::operator>>(this_00,(long *)(this + 0x3b4));
    param_1 = (CArchive *)0x0;
    CArchive::operator>>(this_00,(long *)&param_1);
    if (((int)param_1 < 0) || (*(int *)(this + 0x458) <= (int)param_1)) {
      param_1 = (CArchive *)0x0;
    }
    CStringArray::CStringArray(local_28);
    local_8 = 0;
    CStringArray::Serialize(local_28,this_00);
    if (local_20 == *(int *)(this + 0x458)) {
      local_14 = 0;
      puVar4 = *(undefined4 **)(this + 0x450);
      for (; (puVar4 != (undefined4 *)0x0 && (local_14 < local_20)); local_14 = local_14 + 1) {
        if (puVar4 == (undefined4 *)0x0) {
LAB_100f16f3:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        puVar2 = (undefined4 *)*puVar4;
        if (local_14 < 0) goto LAB_100f16f3;
        FUN_10007c90((void *)(puVar4[2] + 4),(undefined4 *)(local_24 + local_14 * 4));
        puVar4 = puVar2;
      }
    }
    SetActivePage(this,(int)param_1);
    *(undefined4 *)(this + 0x380) = 0;
    AdjustScroll(this);
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x484));
    UpdateCaption(this);
    this_01 = local_28;
  }
  local_8 = 0xffffffff;
  CStringArray::~CStringArray(this_01);
  return;
}

