// rea decompile_all
// name: Serialize
// address: 0x100a717e
// body: available
// range: 0x100a717e-0x100a7225 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMap<int,int,int,int>::Serialize(class CArchive &)
    public: virtual void __thiscall CMap<int,int,unsigned int,unsigned int>::Serialize(class
   CArchive &)
    public: virtual void __thiscall CMap<unsigned int,unsigned int,int,int>::Serialize(class
   CArchive &)
    public: virtual void __thiscall CMap<unsigned int,unsigned int,unsigned int,unsigned
   int>::Serialize(class CArchive &)
     14 names - too many to list
   
   Library: Visual Studio 2010 Release */

void __thiscall Serialize(void *this,CArchive *param_1)

{
  CArchive *pCVar1;
  ulong uVar2;
  int *piVar3;
  void *pvVar4;
  void *local_c;
  void *local_8;
  
  pCVar1 = param_1;
  local_c = this;
  local_8 = this;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    for (uVar2 = CArchive::ReadCount(param_1); uVar2 != 0; uVar2 = uVar2 - 1) {
      FUN_10003400(param_1,&local_c,(void *)0x1);
      FUN_10003400(param_1,&local_8,(void *)0x1);
      pvVar4 = local_8;
      piVar3 = CMap<int,int,int,int>::operator[](this,(int)local_c);
      *piVar3 = (int)pvVar4;
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)((int)this + 0xc));
    if ((*(int *)((int)this + 0xc) != 0) &&
       (param_1 = (CArchive *)0x0, *(int *)((int)this + 8) != 0)) {
      do {
        for (pvVar4 = *(void **)(*(int *)((int)this + 4) + (int)param_1 * 4); pvVar4 != (void *)0x0;
            pvVar4 = *(void **)((int)pvVar4 + 8)) {
          FUN_10003400(pCVar1,pvVar4,(void *)0x1);
          FUN_10003400(pCVar1,(void *)((int)pvVar4 + 4),(void *)0x1);
        }
        param_1 = param_1 + 1;
      } while (param_1 < *(CArchive **)((int)this + 8));
    }
  }
  return;
}

