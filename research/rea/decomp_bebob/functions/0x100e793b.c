// rea decompile_all
// name: CControlBarInfo::Serialize
// address: 0x100e793b
// body: available
// range: 0x100e793b-0x100e7b36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e7a0c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CControlBarInfo::Serialize(class CArchive &,class CDockState *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CControlBarInfo::Serialize(CControlBarInfo *this,CArchive *param_1,CDockState *param_2)

{
  int iVar1;
  CArchive *this_00;
  CDockState *this_01;
  CControlBarInfo *local_c;
  CControlBarInfo *local_8;
  
  this_00 = param_1;
  local_c = this;
  local_8 = this;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    CArchive::operator>>(param_1,(long *)&param_1);
    *(CArchive **)this = param_1;
    CArchive::operator>>(this_00,(long *)&param_1);
    *(CArchive **)(this + 4) = param_1;
    CArchive::operator>>(this_00,(long *)&param_1);
    *(CArchive **)(this + 8) = param_1;
    CArchive::operator>>(this_00,(long *)&param_1);
    *(CArchive **)(this + 0xc) = param_1;
    operator>>(this_00,(tagPOINT *)(this + 0x14));
    this_01 = param_2;
    if (1 < *(uint *)(param_2 + 0x44)) {
      CDockState::ScalePoint(param_2,(CPoint *)(this + 0x14));
      CArchive::operator>>(this_00,(long *)&param_1);
      *(CArchive **)(this + 0x1c) = param_1;
      CArchive::operator>>(this_00,(long *)&param_1);
      *(CArchive **)(this + 0x20) = param_1;
      if (param_1 != (CArchive *)0x0) {
        CArchive::operator>>(this_00,(long *)&param_1);
        *(CArchive **)(this + 0x24) = param_1;
        operator>>(this_00,(tagRECT *)(this + 0x28));
        CDockState::ScaleRectPos(this_01,(CRect *)(this + 0x28));
        CArchive::operator>>(this_00,(long *)(this + 0x38));
        operator>>(this_00,(tagPOINT *)(this + 0x3c));
        CDockState::ScalePoint(this_01,(CPoint *)(this + 0x3c));
      }
    }
    CArchive::operator>>(this_00,(ushort *)&param_2);
    CUIntArray::SetSize((CUIntArray *)(this + 0x44),(uint)param_2 & 0xffff,-1);
    if ((short)param_2 != 0) {
      if (*(int *)(this + 0x4c) < 1) goto LAB_100e7a0c;
      FUN_10003380(this_00,*(void **)(this + 0x48),*(int *)(this + 0x4c) << 2);
    }
  }
  else {
    CArchive::operator<<(param_1,*(long *)this);
    CArchive::operator<<(this_00,*(long *)(this + 4));
    CArchive::operator<<(this_00,*(long *)(this + 8));
    CArchive::operator<<(this_00,*(long *)(this + 0xc));
    local_c = *(CControlBarInfo **)(this + 0x14);
    local_8 = *(CControlBarInfo **)(this + 0x18);
    CArchive::Write(this_00,&local_c,8);
    if (1 < *(uint *)(param_2 + 0x44)) {
      CArchive::operator<<(this_00,*(long *)(this + 0x1c));
      CArchive::operator<<(this_00,*(long *)(this + 0x20));
      if (*(int *)(this + 0x20) != 0) {
        CArchive::operator<<(this_00,*(long *)(this + 0x24));
        CArchive::Write(this_00,this + 0x28,0x10);
        CArchive::operator<<(this_00,*(long *)(this + 0x38));
        local_c = *(CControlBarInfo **)(this + 0x3c);
        local_8 = *(CControlBarInfo **)(this + 0x40);
        CArchive::Write(this_00,&local_c,8);
      }
    }
    CArchive::operator<<(this_00,*(ushort *)(this + 0x4c));
    iVar1 = *(int *)(this + 0x4c);
    if (iVar1 != 0) {
      if (iVar1 < 1) {
LAB_100e7a0c:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      CArchive::Write(this_00,*(void **)(this + 0x48),iVar1 << 2);
    }
  }
  return;
}

