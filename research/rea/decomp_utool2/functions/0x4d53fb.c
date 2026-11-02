// rea decompile_all
// name: initialize_environment_by_cloning_nolock<char>
// address: 0x4d53fb
// body: available
// range: 0x4d53fb-0x4d5479 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl initialize_environment_by_cloning_nolock<char>(void)
   
   Library: Visual Studio 2015 Release */

int __cdecl initialize_environment_by_cloning_nolock<char>(void)

{
  int iVar1;
  LPSTR lpMultiByteStr;
  int *piVar2;
  
  piVar2 = DAT_00c8a22c;
  if (DAT_00c8a22c == (int *)0x0) {
    return -1;
  }
  while( true ) {
    if (*piVar2 == 0) {
      return 0;
    }
    iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*piVar2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) break;
    lpMultiByteStr = (LPSTR)__calloc_base(iVar1,1);
    if ((lpMultiByteStr == (LPSTR)0x0) ||
       (iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*piVar2,-1,lpMultiByteStr,iVar1,(LPCSTR)0x0,
                                    (LPBOOL)0x0), iVar1 == 0)) {
      FID_conflict__free(lpMultiByteStr);
      return -1;
    }
    FUN_004df37d(lpMultiByteStr,0);
    FID_conflict__free((void *)0x0);
    piVar2 = piVar2 + 1;
  }
  return -1;
}

