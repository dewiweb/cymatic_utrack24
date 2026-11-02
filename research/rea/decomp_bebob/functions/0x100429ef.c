// rea decompile_all
// name: CObArray::Serialize
// address: 0x100429ef
// body: available
// range: 0x100429ef-0x10042a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CObArray::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CObArray::Serialize(CObArray *this,CArchive *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  CObject *pCVar4;
  int iVar5;
  
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    uVar3 = CArchive::ReadCount(param_1);
    CUIntArray::SetSize((CUIntArray *)this,uVar3,-1);
    iVar5 = 0;
    if (0 < *(int *)(this + 8)) {
      do {
        iVar2 = *(int *)(this + 4);
        iVar1 = iVar5 * 4;
        pCVar4 = CArchive::ReadObject(param_1,(CRuntimeClass *)0x0);
        iVar5 = iVar5 + 1;
        *(CObject **)(iVar2 + iVar1) = pCVar4;
      } while (iVar5 < *(int *)(this + 8));
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)(this + 8));
    iVar5 = 0;
    if (0 < *(int *)(this + 8)) {
      do {
        CArchive::WriteObject(param_1,*(CObject **)(*(int *)(this + 4) + iVar5 * 4));
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this + 8));
    }
  }
  return;
}

