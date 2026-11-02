// rea decompile_all
// name: CFile::Duplicate
// address: 0x1000d5e7
// body: available
// range: 0x1000d5e7-0x1000d670 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class CFile * __thiscall CFile::Duplicate(void)const 
   
   Library: Visual Studio 2010 Release */

CFile * __thiscall CFile::Duplicate(CFile *this)

{
  CFile *pCVar1;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  HANDLE hSourceHandle;
  HANDLE *lpTargetHandle;
  DWORD DVar2;
  BOOL BVar3;
  DWORD dwOptions;
  short *psVar4;
  HANDLE local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1000d5f3;
  pCVar1 = FUN_1000858a(0x14);
  local_8 = 0;
  if (pCVar1 == (CFile *)0x0) {
    pCVar1 = (CFile *)0x0;
  }
  else {
    pCVar1 = (CFile *)CFile(pCVar1);
  }
  local_8 = 0xffffffff;
  dwOptions = 2;
  BVar3 = 0;
  DVar2 = 0;
  lpTargetHandle = local_14;
  hTargetProcessHandle = GetCurrentProcess();
  hSourceHandle = *(HANDLE *)(this + 4);
  hSourceProcessHandle = GetCurrentProcess();
  BVar3 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          DVar2,BVar3,dwOptions);
  if (BVar3 == 0) {
    if (pCVar1 != (CFile *)0x0) {
      (**(code **)(*(int *)pCVar1 + 4))(1);
    }
    psVar4 = *(short **)(this + 0xc);
    DVar2 = GetLastError();
    ThrowOsError(DVar2,psVar4);
  }
  *(HANDLE *)(pCVar1 + 4) = local_14[0];
  *(int *)(pCVar1 + 8) = *(int *)(this + 8);
  *(int *)(pCVar1 + 0x10) = *(int *)(this + 0x10);
  return pCVar1;
}

