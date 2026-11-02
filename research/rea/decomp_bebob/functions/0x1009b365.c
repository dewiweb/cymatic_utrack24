// rea decompile_all
// name: CSettingsStoreSP::Create
// address: 0x1009b365
// body: available
// range: 0x1009b365-0x1009b3e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CSettingsStore & __thiscall CSettingsStoreSP::Create(int,int)
   
   Library: Visual Studio 2010 Release */

CSettingsStore * __thiscall CSettingsStoreSP::Create(CSettingsStoreSP *this,int param_1,int param_2)

{
  CSettingsStore *pCVar1;
  CObject *pCVar2;
  
  pCVar1 = *(CSettingsStore **)this;
  if (pCVar1 == (CSettingsStore *)0x0) {
    if (DAT_10168ca4 == (CRuntimeClass *)0x0) {
      pCVar1 = FUN_1000858a(0x20);
      if (pCVar1 == (CSettingsStore *)0x0) {
        pCVar2 = (CObject *)0x0;
      }
      else {
        pCVar2 = (CObject *)CSettingsStore::CSettingsStore(pCVar1);
      }
    }
    else {
      pCVar2 = CRuntimeClass::CreateObject(DAT_10168ca4);
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CSettingsStore_1012f294,pCVar2);
    }
    *(CObject **)this = pCVar2;
    *(int *)(pCVar2 + 0x14) = param_2;
    *(int *)(*(int *)this + 0x18) = param_1;
    *(uint *)(*(int *)this + 4) = (param_1 != 0) + 0x80000001;
    *(undefined4 *)(*(int *)this + 0x1c) = *(undefined4 *)(this + 4);
    pCVar1 = *(CSettingsStore **)this;
  }
  return pCVar1;
}

