// rea decompile_all
// name: COleDataSource::GetCacheEntry
// address: 0x10098084
// body: available
// range: 0x10098084-0x10098138 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: struct AFX_DATACACHE_ENTRY * __thiscall COleDataSource::GetCacheEntry(struct
   tagFORMATETC *,enum tagDATADIR)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

AFX_DATACACHE_ENTRY * __thiscall
COleDataSource::GetCacheEntry(COleDataSource *this,tagFORMATETC *param_1,tagDATADIR param_2)

{
  longlong lVar1;
  AFX_DATACACHE_ENTRY *pAVar2;
  void *pvVar3;
  int iVar4;
  AFX_DATACACHE_ENTRY *pAVar5;
  
  pAVar2 = Lookup(this,param_1,param_2);
  if (pAVar2 == (AFX_DATACACHE_ENTRY *)0x0) {
    if ((*(int *)(this + 0x20) == 0) || (*(int *)(this + 0x28) == *(int *)(this + 0x24))) {
      lVar1 = (ulonglong)(uint)(*(int *)(this + 0x24) + *(int *)(this + 0x2c)) * 0x24;
      pvVar3 = FUN_1000858a(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + *(int *)(this + 0x2c);
      if (*(void **)(this + 0x20) != (void *)0x0) {
        FUN_10004cd0(pvVar3,(*(int *)(this + 0x24) + *(int *)(this + 0x2c)) * 0x24,
                     *(void **)(this + 0x20),*(int *)(this + 0x28) * 0x24);
        FUN_100085b9(*(void **)(this + 0x20));
      }
      *(void **)(this + 0x20) = pvVar3;
    }
    pAVar2 = (AFX_DATACACHE_ENTRY *)(*(int *)(this + 0x28) * 0x24 + *(int *)(this + 0x20));
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  }
  else {
    CoTaskMemFree(*(LPVOID *)(pAVar2 + 4));
    ReleaseStgMedium((LPSTGMEDIUM)(pAVar2 + 0x14));
  }
  *(tagDATADIR *)(pAVar2 + 0x20) = param_2;
  pAVar5 = pAVar2;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pAVar5 = *(undefined4 *)param_1;
    param_1 = (tagFORMATETC *)&param_1->ptd;
    pAVar5 = pAVar5 + 4;
  }
  return pAVar2;
}

