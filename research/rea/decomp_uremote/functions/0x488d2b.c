// rea decompile_all
// name: FUN_00488d2b
// address: 0x488d2b
// body: available
// range: 0x488d2b-0x488dad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00488d2b(void)

{
  void *_Dst;
  int iVar1;
  int unaff_EDI;
  
  _Dst = (void *)(*(code *)**(undefined4 **)(unaff_EDI + 4))();
  *(int *)(unaff_EDI + 0x120) = (int)_Dst + 0x100;
  _memset(_Dst,0,0x100);
  iVar1 = 0;
  do {
    *(char *)(iVar1 + (int)_Dst + 0x100) = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  _memset((void *)((int)_Dst + 0x200),0xff,0x180);
  _memset((void *)((int)_Dst + 0x380),0,0x180);
  _memcpy((void *)((int)_Dst + 0x500),*(void **)(unaff_EDI + 0x120),0x80);
  return;
}

