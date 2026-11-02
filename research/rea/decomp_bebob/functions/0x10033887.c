// rea decompile_all
// name: CList<tagPOINT,tagPOINT>::Serialize
// address: 0x10033887
// body: available
// range: 0x10033887-0x100338ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CList<struct tagPOINT,struct tagPOINT>::Serialize(class CArchive
   &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CList<tagPOINT,tagPOINT>::Serialize(CList<tagPOINT,tagPOINT> *this,CArchive *param_1)

{
  tagPOINT tVar1;
  ulong uVar2;
  undefined4 *puVar3;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    for (uVar2 = CArchive::ReadCount(param_1); uVar2 != 0; uVar2 = uVar2 - 1) {
      SerializeElements<tagPOINT>(param_1,&local_c,1);
      tVar1.y = local_c.y;
      tVar1.x = local_c.x;
      AddTail(this,tVar1);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)(this + 0xc));
    for (puVar3 = *(undefined4 **)(this + 4); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      SerializeElements<tagPOINT>(param_1,(tagPOINT *)(puVar3 + 2),1);
    }
  }
  return;
}

