// rea decompile_all
// name: Load
// address: 0x10082eea
// body: available
// range: 0x10082eea-0x10082f64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CPngImage::Load(char const *,struct HINSTANCE__ *)
    public: int __thiscall CPngImage::Load(wchar_t const *,struct HINSTANCE__ *)
   
   Library: Visual Studio 2010 Release */

int __thiscall Load(void *this,LPCWSTR param_1,HMODULE param_2)

{
  AFX_MODULE_STATE *pAVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  uchar *puVar2;
  DWORD DVar3;
  int iVar4;
  
  if (param_2 == (HMODULE)0x0) {
    pAVar1 = AfxGetModuleState();
    param_2 = *(HMODULE *)(pAVar1 + 0xc);
  }
  hResInfo = FindResourceW(param_2,param_1,DAT_1016894c);
  if ((hResInfo != (HRSRC)0x0) &&
     (hResData = LoadResource(param_2,hResInfo), hResData != (HGLOBAL)0x0)) {
    puVar2 = LockResource(hResData);
    if (puVar2 == (uchar *)0x0) {
      iVar4 = 0;
    }
    else {
      DVar3 = SizeofResource(param_2,hResInfo);
      iVar4 = CPngImage::LoadFromBuffer(this,puVar2,DVar3);
    }
    FreeResource(hResData);
    return iVar4;
  }
  return 0;
}

