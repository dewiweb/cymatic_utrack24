// rea decompile_all
// name: FUN_004d3d0b
// address: 0x4d3d0b
// body: available
// range: 0x4d3d0b-0x4d3da7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d3da7 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


wchar_t * FUN_004d3d0b(int param_1,char *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  errno_t eVar3;
  wchar_t *_DstBuf;
  size_t local_8;
  
  if (param_2 == (char *)0x0) {
    pwVar2 = __wsetlocale(param_1,(wchar_t *)0x0);
  }
  else {
    pwVar2 = (wchar_t *)0x0;
    eVar3 = _mbstowcs_s(&local_8,(wchar_t *)0x0,0,param_2,0x7fffffff);
    if ((eVar3 != 0) && ((eVar3 == 0x16 || (eVar3 == 0x22)))) {
LAB_004d3d9d:
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar1 = (code *)swi(3);
      pwVar2 = (wchar_t *)(*pcVar1)();
      return pwVar2;
    }
    _DstBuf = (wchar_t *)__calloc_base(local_8,2);
    if (_DstBuf != (wchar_t *)0x0) {
      eVar3 = _mbstowcs_s((size_t *)0x0,_DstBuf,local_8,param_2,0xffffffff);
      if (eVar3 == 0) {
        pwVar2 = __wsetlocale(param_1,_DstBuf);
      }
      else if ((eVar3 == 0x16) || (eVar3 == 0x22)) goto LAB_004d3d9d;
    }
    FID_conflict__free(_DstBuf);
  }
  return pwVar2;
}

