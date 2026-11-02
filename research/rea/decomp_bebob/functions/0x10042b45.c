// rea decompile_all
// name: GetAssocAt
// address: 0x10042b45
// body: available
// range: 0x10042b45-0x10042b85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: struct CMapWordToOb::CAssoc * __thiscall CMapWordToOb::GetAssocAt(unsigned
   short,unsigned int &,unsigned int &)const 
    protected: struct CMapWordToPtr::CAssoc * __thiscall CMapWordToPtr::GetAssocAt(unsigned
   short,unsigned int &,unsigned int &)const 
   
   Library: Visual Studio 2010 Release */

undefined4 * __thiscall GetAssocAt(void *this,ushort param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = HashKey<unsigned_short>(param_1);
  *param_3 = uVar1;
  uVar1 = uVar1 % *(uint *)((int)this + 8);
  *param_2 = uVar1;
  if (*(int *)((int)this + 4) != 0) {
    for (puVar2 = *(undefined4 **)(*(int *)((int)this + 4) + uVar1 * 4); puVar2 != (undefined4 *)0x0
        ; puVar2 = (undefined4 *)*puVar2) {
      if (*(ushort *)(puVar2 + 2) == param_1) {
        return puVar2;
      }
    }
  }
  return (undefined4 *)0x0;
}

