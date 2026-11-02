// rea decompile_all
// name: NewAssoc
// address: 0x10037e5d
// body: available
// range: 0x10037e5d-0x10037ed2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037e9f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: class CMap<unsigned int,unsigned int &,class CMFCToolBarButton *,class
   CMFCToolBarButton * &>::CAssoc * __thiscall CMap<unsigned int,unsigned int &,class
   CMFCToolBarButton *,class CMFCToolBarButton * &>::NewAssoc(unsigned int &)
    protected: class CMap<struct HMENU__ *,struct HMENU__ * &,void *,void * &>::CAssoc * __thiscall
   CMap<struct HMENU__ *,struct HMENU__ * &,void *,void * &>::NewAssoc(struct HMENU__ * &)
   
   Library: Visual Studio 2010 Release */

undefined4 * __thiscall NewAssoc(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *_Dst;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x10) == 0) {
    iVar3 = FUN_10009d8b((undefined4 *)((int)this + 0x14),*(int *)((int)this + 0x18),0x10);
    iVar1 = *(int *)((int)this + 0x18);
    iVar3 = iVar3 + -0xc + iVar1 * 0x10;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)((int)this + 0x10);
      *(int *)((int)this + 0x10) = iVar3;
      iVar3 = iVar3 + -0x10;
    }
  }
  _Dst = *(undefined4 **)((int)this + 0x10);
  if (_Dst != (undefined4 *)0x0) {
    uVar2 = _Dst[2];
    _memset(_Dst,0,0x10);
    _Dst[2] = uVar2;
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(*(int *)((int)this + 0x10) + 8);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    *_Dst = *param_1;
    return _Dst;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

