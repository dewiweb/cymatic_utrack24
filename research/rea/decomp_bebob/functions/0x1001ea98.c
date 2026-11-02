// rea decompile_all
// name: NewNode
// address: 0x1001ea98
// body: available
// range: 0x1001ea98-0x1001eaf4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ead8 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: struct CList<unsigned long,unsigned long>::CNode * __thiscall CList<unsigned
   long,unsigned long>::NewNode(struct CList<unsigned long,unsigned long>::CNode *,struct
   CList<unsigned long,unsigned long>::CNode *)
    protected: struct CList<class CMFCPropertyGridProperty *,class CMFCPropertyGridProperty
   *>::CNode * __thiscall CList<class CMFCPropertyGridProperty *,class CMFCPropertyGridProperty
   *>::NewNode(struct CList<class CMFCPropertyGridProperty *,class CMFCPropertyGridProperty
   *>::CNode *,struct CList<class CMFCPropertyGridProperty *,class CMFCPropertyGridProperty
   *>::CNode *)
   
   Library: Visual Studio 2010 Release */

void __thiscall NewNode(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)((int)this + 0x10) == 0) {
    iVar2 = FUN_10009d8b((undefined4 *)((int)this + 0x14),*(int *)((int)this + 0x18),0xc);
    iVar1 = *(int *)((int)this + 0x18);
    puVar3 = (undefined4 *)(iVar2 + -8 + iVar1 * 0xc);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      *puVar3 = *(undefined4 *)((int)this + 0x10);
      *(undefined4 **)((int)this + 0x10) = puVar3;
      puVar3 = puVar3 + -3;
    }
  }
  puVar3 = *(undefined4 **)((int)this + 0x10);
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x10) = *puVar3;
    puVar3[1] = param_1;
    *puVar3 = param_2;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

