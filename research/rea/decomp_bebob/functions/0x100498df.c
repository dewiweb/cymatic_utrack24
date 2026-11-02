// rea decompile_all
// name: CList<unsigned_long,unsigned_long>::InsertBefore
// address: 0x100498df
// body: available
// range: 0x100498df-0x1004991e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct __POSITION * __thiscall CList<unsigned long,unsigned long>::InsertBefore(struct
   __POSITION *,unsigned long)
   
   Library: Visual Studio 2010 Release */

__POSITION * __thiscall
CList<unsigned_long,unsigned_long>::InsertBefore
          (CList<unsigned_long,unsigned_long> *this,__POSITION *param_1,ulong param_2)

{
  __POSITION *p_Var1;
  
  if (param_1 == (__POSITION *)0x0) {
    p_Var1 = CList<_ITEMIDLIST*,_ITEMIDLIST*>::AddHead
                       ((CList<_ITEMIDLIST*,_ITEMIDLIST*> *)this,(_ITEMIDLIST *)param_2);
  }
  else {
    p_Var1 = (__POSITION *)NewNode(this,*(undefined4 *)(param_1 + 4),param_1);
    *(ulong *)(p_Var1 + 8) = param_2;
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      *(__POSITION **)(this + 4) = p_Var1;
    }
    else {
      **(int **)(param_1 + 4) = (int)p_Var1;
    }
    *(__POSITION **)(param_1 + 4) = p_Var1;
  }
  return p_Var1;
}

