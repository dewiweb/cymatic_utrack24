// rea decompile_all
// name: CMapWordToOb::operator[]
// address: 0x10042baf
// body: available
// range: 0x10042baf-0x10042c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CObject * & __thiscall CMapWordToOb::operator[](unsigned short)
   
   Library: Visual Studio 2010 Release */

CObject ** __thiscall CMapWordToOb::operator[](CMapWordToOb *this,ushort param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined2 in_stack_00000006;
  CMapWordToOb *local_8;
  
  uVar1 = param_1;
  local_8 = this;
  puVar2 = GetAssocAt(this,param_1,(uint *)&param_1,(uint *)&local_8);
  if (puVar2 == (undefined4 *)0x0) {
    if (*(int *)(this + 4) == 0) {
      CMapPtrToPtr::InitHashTable((CMapPtrToPtr *)this,*(uint *)(this + 8),1);
    }
    puVar2 = (undefined4 *)NewAssoc((int)this);
    *(ushort *)(puVar2 + 2) = uVar1;
    *puVar2 = *(undefined4 *)(*(int *)(this + 4) + _param_1 * 4);
    *(undefined4 **)(*(int *)(this + 4) + _param_1 * 4) = puVar2;
  }
  return (CObject **)(puVar2 + 1);
}

