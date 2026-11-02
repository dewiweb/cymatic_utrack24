// rea decompile_all
// name: CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>::Serialize
// address: 0x1004144a
// body: available
// range: 0x1004144a-0x100414e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CList<struct AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,struct
   AFX_AUTOHIDE_DOCKSITE_SAVE_INFO &>::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>::Serialize
          (CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> *this,
          CArchive *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  AFX_AUTOHIDE_DOCKSITE_SAVE_INFO local_5c [84];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x10041456;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    for (uVar1 = CArchive::ReadCount(param_1); uVar1 != 0; uVar1 = uVar1 - 1) {
      _eh_vector_constructor_iterator_
                (local_5c,0x48,1,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO::AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,
                 FUN_1003f38e);
      local_8 = 0;
      SerializeElements<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO>(param_1,local_5c,1);
      AddTail(this,local_5c);
      local_8 = 0xffffffff;
      _eh_vector_destructor_iterator_(local_5c,0x48,1,FUN_1003f38e);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)(this + 0xc));
    for (puVar2 = *(undefined4 **)(this + 4); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      SerializeElements<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO>
                (param_1,(AFX_AUTOHIDE_DOCKSITE_SAVE_INFO *)(puVar2 + 2),1);
    }
  }
  FUN_100f90cf();
  return;
}

