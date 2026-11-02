// rea decompile_all
// name: CDockState::Serialize
// address: 0x100e7b9a
// body: available
// range: 0x100e7b9a-0x100e7cdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e7c1b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CDockState::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockState::Serialize(CDockState *this,CArchive *param_1)

{
  CDockState *pCVar1;
  undefined4 uVar2;
  int iVar3;
  tagPOINT local_24;
  int local_1c;
  CDockState *local_18;
  CControlBarInfo *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x100e7ba6;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    FUN_100e779a((int)this);
    pCVar1 = this + 0x44;
    local_18 = pCVar1;
    CArchive::operator>>(param_1,(long *)pCVar1);
    if (1 < *(uint *)pCVar1) {
      local_24.x = 0;
      local_24.y = 0;
      operator>>(param_1,&local_24);
      SetScreenSize(this,(CSize *)&local_24);
    }
    CArchive::operator>>(param_1,(ushort *)local_14);
    CUIntArray::SetSize((CUIntArray *)(this + 4),(uint)local_14[0] & 0xffff,-1);
    iVar3 = 0;
    if (0 < *(int *)(this + 0xc)) {
      do {
        local_14[0] = FUN_1000858a(0x5c);
        local_8 = 0;
        if (local_14[0] == (CControlBarInfo *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = CControlBarInfo::CControlBarInfo(local_14[0]);
        }
        local_8 = 0xffffffff;
        if (((iVar3 < 0) || (*(int *)(this + 0xc) <= iVar3)) ||
           (*(undefined4 *)(*(int *)(this + 8) + iVar3 * 4) = uVar2, *(int *)(this + 0xc) <= iVar3))
        goto LAB_100e7c1b;
        CControlBarInfo::Serialize
                  (*(CControlBarInfo **)(*(int *)(this + 8) + iVar3 * 4),param_1,this);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 0xc));
    }
    *(uint *)local_18 = 2;
  }
  else {
    CArchive::operator<<(param_1,*(long *)(this + 0x44));
    if (1 < *(uint *)(this + 0x44)) {
      local_1c = *(int *)(this + 0x24) - *(int *)(this + 0x1c);
      local_18 = (CDockState *)(*(int *)(this + 0x28) - *(int *)(this + 0x20));
      CArchive::Write(param_1,&local_1c,8);
    }
    CArchive::operator<<(param_1,*(ushort *)(this + 0xc));
    iVar3 = 0;
    if (0 < *(int *)(this + 0xc)) {
      do {
        if ((iVar3 < 0) || (*(int *)(this + 0xc) <= iVar3)) {
LAB_100e7c1b:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        CControlBarInfo::Serialize
                  (*(CControlBarInfo **)(*(int *)(this + 8) + iVar3 * 4),param_1,this);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 0xc));
    }
  }
  return;
}

