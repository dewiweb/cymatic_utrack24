// rea decompile_all
// name: FUN_004fc960
// address: 0x4fc960
// body: available
// range: 0x4fc960-0x4fc9d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fc960(int param_1)

{
  int iVar1;
  void *_Memory;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  _Memory = _malloc(*(int *)(unaff_ESI + 0x10) * *(int *)(unaff_ESI + 0xc) * 4);
  iVar1 = *(int *)(unaff_ESI + 0xc);
  iVar2 = *(int *)(unaff_ESI + 0x10);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      _memcpy((void *)((int)_Memory + *(int *)(unaff_ESI + 0xc) * iVar3 * 4),
              (void *)(param_1 + ((iVar2 - iVar3) + -1) * *(int *)(unaff_ESI + 0xc) * 4),iVar1 << 2)
      ;
      iVar2 = *(int *)(unaff_ESI + 0x10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  FUN_004fa753(_Memory);
  _free(_Memory);
  return;
}

