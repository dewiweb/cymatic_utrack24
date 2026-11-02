// rea decompile_all
// name: __setargv
// address: 0x5c3bb4
// body: available
// range: 0x5c3bb4-0x5c3c6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2008 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  void *pvVar1;
  int iVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_0095de0c == 0) {
    ___initmbctable();
  }
  DAT_0095d3ac = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_0095d2a8,0x104);
  _DAT_0095ceec = &DAT_0095d2a8;
  if ((DAT_0095de34 == (char *)0x0) || (local_8 = DAT_0095de34, *DAT_0095de34 == '\0')) {
    local_8 = &DAT_0095d2a8;
  }
  parse_cmdline(0,0,&local_c);
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    iVar2 = local_c * 4;
    _Size = iVar2 + local_10;
    if ((local_10 <= _Size) && (pvVar1 = __malloc_crt(_Size), pvVar1 != (void *)0x0)) {
      parse_cmdline(pvVar1,(void *)(iVar2 + (int)pvVar1),&local_c);
      _DAT_0095ced0 = local_c - 1;
      _DAT_0095ced4 = pvVar1;
      return 0;
    }
  }
  return -1;
}

