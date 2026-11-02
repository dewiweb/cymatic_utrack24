// rea decompile_all
// name: ___std_exception_copy
// address: 0x4c1d2f
// body: available
// range: 0x4c1d2f-0x4c1d91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___std_exception_copy
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___std_exception_copy(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  char *_Dst;
  char *pcVar3;
  
  if ((*(char *)(param_1 + 1) == '\0') || (pcVar3 = (char *)*param_1, pcVar3 == (char *)0x0)) {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    _Dst = (char *)FUN_004c554b(pcVar3 + (1 - (int)pcVar1));
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,(rsize_t)(pcVar3 + (1 - (int)pcVar1)),(char *)*param_1);
      *param_2 = _Dst;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    FID_conflict__free((void *)0x0);
  }
  return;
}

