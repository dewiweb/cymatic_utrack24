// rea decompile_all
// name: FUN_1001afef
// address: 0x1001afef
// body: available
// range: 0x1001afef-0x1001b098 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001b04e to 0x1001b0b7 FUN_1001b0b7 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001b097 to 0x1001b0b7 FUN_1001b0b7 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __fastcall FUN_1001afef(int param_1)

{
  CMapPtrToPtr *pCVar1;
  int iVar2;
  CArray<int,int> *pCVar3;
  void **ppvVar4;
  CArray<int,int> *this;
  void *local_1c;
  CArray<int,int> *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1001affb;
  pCVar1 = *(CMapPtrToPtr **)(param_1 + 0x3c);
  this = (CArray<int,int> *)0x0;
  local_1c = (void *)0x0;
  if (pCVar1 == (CMapPtrToPtr *)0x0) {
    pCVar1 = FUN_1000858a(0x1c);
    local_8 = 0;
    if (pCVar1 == (CMapPtrToPtr *)0x0) {
      pCVar1 = (CMapPtrToPtr *)0x0;
    }
    else {
      pCVar1 = (CMapPtrToPtr *)CMapPtrToPtr::CMapPtrToPtr(pCVar1,10);
    }
    local_8 = 0xffffffff;
  }
  iVar2 = CMapPtrToPtr::Lookup(pCVar1,(void *)0x1,&local_1c);
  if (iVar2 == 0) {
    pCVar3 = FUN_1000858a(0x14);
    if (pCVar3 != (CArray<int,int> *)0x0) {
      *(undefined4 *)(pCVar3 + 4) = 0;
      *(undefined4 *)(pCVar3 + 0x10) = 0;
      *(undefined4 *)(pCVar3 + 0xc) = 0;
      *(undefined4 *)(pCVar3 + 8) = 0;
      *(undefined ***)pCVar3 =
           CArray<CArchive::LoadArrayObjType,CArchive::LoadArrayObjType_const&>::vftable;
      this = pCVar3;
    }
    local_8 = 1;
    local_18 = this;
    CArray<int,int>::SetSize(this,1,*(int *)(param_1 + 0x40));
    ppvVar4 = CMapPtrToPtr::operator[](pCVar1,(void *)0x1);
    *ppvVar4 = this;
    FUN_1001b0b7();
    return;
  }
  local_18 = local_1c;
  FUN_1001b0b7();
  return;
}

