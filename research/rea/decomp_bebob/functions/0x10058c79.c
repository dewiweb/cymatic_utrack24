// rea decompile_all
// name: GetAssocAt
// address: 0x10058c79
// body: available
// range: 0x10058c79-0x10058ccc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: struct CMapStringToOb::CAssoc * __thiscall CMapStringToOb::GetAssocAt(wchar_t const
   *,unsigned int &,unsigned int &)const 
    protected: struct CMapStringToPtr::CAssoc * __thiscall CMapStringToPtr::GetAssocAt(wchar_t const
   *,unsigned int &,unsigned int &)const 
   
   Library: Visual Studio 2010 Release */

undefined4 * __thiscall GetAssocAt(void *this,wchar_t *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = HashKey(param_1);
  *param_3 = uVar1;
  uVar1 = uVar1 % *(uint *)((int)this + 8);
  *param_2 = uVar1;
  if (*(int *)((int)this + 4) != 0) {
    for (puVar3 = *(undefined4 **)(*(int *)((int)this + 4) + uVar1 * 4); puVar3 != (undefined4 *)0x0
        ; puVar3 = (undefined4 *)*puVar3) {
      if ((puVar3[1] == *param_3) &&
         (iVar2 = FUN_10005720(puVar3 + 2,(ushort *)param_1), iVar2 == 0)) {
        return puVar3;
      }
    }
  }
  return (undefined4 *)0x0;
}

