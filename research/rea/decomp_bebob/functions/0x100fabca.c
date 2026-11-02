// rea decompile_all
// name: __expand
// address: 0x100fabca
// body: available
// range: 0x100fabca-0x100fac83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __expand
   
   Library: Visual Studio 2010 Release */

void * __cdecl __expand(void *_Memory,size_t _NewSize)

{
  int *piVar1;
  void *pvVar2;
  SIZE_T SVar3;
  BOOL BVar4;
  DWORD DVar5;
  int iVar6;
  int local_8;
  
  if (_Memory == (void *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_100fe6d4();
    return (void *)0x0;
  }
  if (_NewSize < 0xffffffe1) {
    if (_NewSize == 0) {
      _NewSize = 1;
    }
    SVar3 = HeapSize(DAT_1016a53c,0,_Memory);
    pvVar2 = HeapReAlloc(DAT_1016a53c,0x10,_Memory,_NewSize);
    if (pvVar2 == (LPVOID)0x0) {
      if ((SVar3 < 0x4001) && (_NewSize <= SVar3)) {
        local_8 = -1;
        BVar4 = HeapQueryInformation
                          (DAT_1016a53c,HeapCompatibilityInformation,&local_8,4,(PSIZE_T)0x0);
        if ((BVar4 != 0) && (local_8 == 2)) {
          return _Memory;
        }
      }
      piVar1 = __errno();
      DVar5 = GetLastError();
      iVar6 = __get_errno_from_oserr(DVar5);
      *piVar1 = iVar6;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0xc;
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}

