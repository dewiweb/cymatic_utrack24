// rea decompile_all
// name: CMFCToolBarMenuButton::Serialize
// address: 0x1007dfb5
// body: available
// range: 0x1007dfb5-0x1007e05b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarMenuButton::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarMenuButton::Serialize(CMFCToolBarMenuButton *this,CArchive *param_1)

{
  int iVar1;
  CArchive *this_00;
  CObject *pCVar2;
  
  this_00 = param_1;
  CMFCToolBarButton::Serialize((CMFCToolBarButton *)this,param_1);
  if (((byte)this_00[0x18] & 1) == 0) {
    CArchive::operator<<(this_00,*(long *)(this + 0xbc));
    CArchive::operator<<(this_00,*(long *)(this + 0xb0));
    CArchive::operator<<(this_00,*(long *)(this + 0xc0));
  }
  else {
    iVar1 = *(int *)(this + 0x7c);
    while (iVar1 != 0) {
      pCVar2 = CObList::RemoveHead((CObList *)(this + 0x70));
      if (pCVar2 != (CObject *)0x0) {
        (**(code **)(*(int *)pCVar2 + 4))(1);
      }
      iVar1 = *(int *)(this + 0x7c);
    }
    CArchive::operator>>(this_00,(long *)&param_1);
    (**(code **)(*(int *)this + 0xf4))(param_1);
    CArchive::operator>>(this_00,(long *)(this + 0xb0));
    CArchive::operator>>(this_00,(long *)(this + 0xc0));
  }
  (**(code **)(*(int *)(this + 0x70) + 8))(this_00);
  return;
}

