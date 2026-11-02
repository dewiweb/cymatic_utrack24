// rea decompile_all
// name: FUN_004d411c
// address: 0x4d411c
// body: available
// range: 0x4d411c-0x4d417c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d417c with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


wchar_t * FUN_004d411c(wchar_t *param_1)

{
  rsize_t _SizeInWords;
  wchar_t wVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  errno_t eVar4;
  
  if (param_1 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  pwVar3 = param_1;
  do {
    wVar1 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
  _SizeInWords = ((int)pwVar3 - (int)(param_1 + 1) >> 1) + 1;
  pwVar3 = (wchar_t *)FUN_004c554b(_SizeInWords * 2);
  if ((pwVar3 != (wchar_t *)0x0) && (eVar4 = _wcscpy_s(pwVar3,_SizeInWords,param_1), eVar4 != 0)) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pcVar2 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar2)();
    return pwVar3;
  }
  return pwVar3;
}

