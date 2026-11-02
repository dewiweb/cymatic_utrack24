// rea decompile_all
// name: __heap_init
// address: 0x5b56b6
// body: available
// range: 0x5b56b6-0x5b56e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2008 Release */

int __cdecl __heap_init(void)

{
  int in_stack_00000004;
  
  DAT_0095cd74 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_0095cd74 == (HANDLE)0x0) {
    return 0;
  }
  DAT_0095de2c = 1;
  return 1;
}

