// rea decompile_all
// name: CArchive::ReadObject
// address: 0x1001b55b
// body: available
// range: 0x1001b55b-0x1001b6ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001b574 to 0x1000937c FUN_1000937c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001b5c7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001b63b to 0x10009030 FUN_10009030 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CObject * __thiscall CArchive::ReadObject(struct CRuntimeClass const *)
   
   Library: Visual Studio 2010 Release */

CObject * __thiscall CArchive::ReadObject(CArchive *this,CRuntimeClass *param_1)

{
  undefined4 uVar1;
  CRuntimeClass *this_00;
  CObject *pCVar2;
  int iVar3;
  char *pcVar4;
  uint local_20;
  ulong local_1c;
  CObject *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x1001b567;
  if (((byte)this[0x18] & 1) == 0) {
    pcVar4 = *(char **)(this + 0x14);
    iVar3 = 4;
    goto LAB_1001b574;
  }
  this_00 = ReadClass(this,param_1,&local_20,&local_1c);
  local_18[0] = (CObject *)0x0;
  if (this_00 != (CRuntimeClass *)0x0) {
    local_8 = 0;
    pCVar2 = CRuntimeClass::CreateObject(this_00);
    local_18[0] = pCVar2;
    if (pCVar2 == (CObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009030();
    }
    CheckCount(this);
    FUN_1000a2f0(*(void **)(this + 0x38),*(int *)(this + 0x34),pCVar2,1);
    param_1 = (CRuntimeClass *)0x0;
    CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),(void *)0x1,&param_1);
    if (param_1 != (CRuntimeClass *)0x0) {
      local_1c = 2;
      FUN_1001af1b(param_1,*(int *)(this + 0x34),&local_1c,1);
      uVar1 = *(undefined4 *)(this + 0x10);
      *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
      *(uint *)(this + 0x10) = local_20;
      (**(code **)(*(int *)pCVar2 + 8))(this);
      *(undefined4 *)(this + 0x10) = uVar1;
      return pCVar2;
    }
    goto LAB_1001b5c7;
  }
  if (*(int *)(*(int *)(this + 0x38) + 8) - 1U < local_1c) {
LAB_1001b5a4:
    pcVar4 = *(char **)(this + 0x14);
    iVar3 = 5;
  }
  else {
    local_18[0] = (CObject *)0x0;
    iVar3 = CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),(void *)0x1,local_18);
    if (iVar3 != 0) {
      if (local_18[0] == (CObject *)0x0) goto LAB_1001b5c7;
      if (local_1c <= *(int *)(local_18[0] + 8) - 1U) {
        if (((int)local_1c < 0) || (*(int *)(local_18[0] + 8) <= (int)local_1c)) goto LAB_1001b5c7;
        if (*(int *)(*(int *)(local_18[0] + 4) + local_1c * 4) == 1) goto LAB_1001b5a4;
      }
    }
    if (((int)local_1c < 0) || (*(int *)(*(int *)(this + 0x38) + 8) <= (int)local_1c)) {
LAB_1001b5c7:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    pCVar2 = *(CObject **)(*(int *)(*(int *)(this + 0x38) + 4) + local_1c * 4);
    if (((pCVar2 == (CObject *)0x0) || (param_1 == (CRuntimeClass *)0x0)) ||
       (iVar3 = CObject::IsKindOf(pCVar2,param_1), iVar3 != 0)) {
      return pCVar2;
    }
    pcVar4 = *(char **)(this + 0x14);
    iVar3 = 6;
  }
LAB_1001b574:
                    /* WARNING: Subroutine does not return */
  FUN_1000937c(iVar3,pcVar4);
}

