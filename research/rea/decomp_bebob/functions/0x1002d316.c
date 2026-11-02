// rea decompile_all
// name: Serialize
// address: 0x1002d316
// body: available
// range: 0x1002d316-0x1002d3b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMap<unsigned int,unsigned int &,class CMFCToolBarButton *,class
   CMFCToolBarButton * &>::Serialize(class CArchive &)
    public: virtual void __thiscall CMap<struct HMENU__ *,struct HMENU__ * &,void *,void *
   &>::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall Serialize(void *this,CArchive *param_1)

{
  CArchive *pCVar1;
  ulong uVar2;
  void **ppvVar3;
  uint *puVar4;
  void *local_8;
  
  pCVar1 = param_1;
  local_8 = this;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    for (uVar2 = CArchive::ReadCount(param_1); uVar2 != 0; uVar2 = uVar2 - 1) {
      SerializeElements<unsigned_int>(pCVar1,(uint *)&param_1,1);
      SerializeElements<unsigned_int>(pCVar1,(uint *)&local_8,1);
      ppvVar3 = CMap<HMENU__*,HMENU__*&,void*,void*&>::operator[](this,(HMENU__ **)&param_1);
      *ppvVar3 = local_8;
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)((int)this + 0xc));
    if ((*(int *)((int)this + 0xc) != 0) &&
       (param_1 = (CArchive *)0x0, *(int *)((int)this + 8) != 0)) {
      do {
        for (puVar4 = *(uint **)(*(int *)((int)this + 4) + (int)param_1 * 4); puVar4 != (uint *)0x0;
            puVar4 = (uint *)puVar4[2]) {
          SerializeElements<unsigned_int>(pCVar1,puVar4,1);
          SerializeElements<unsigned_int>(pCVar1,puVar4 + 1,1);
        }
        param_1 = param_1 + 1;
      } while (param_1 < *(CArchive **)((int)this + 8));
    }
  }
  return;
}

