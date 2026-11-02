// rea decompile_all
// name: ___ascii_stricmp
// address: 0x5c9a8a
// body: available
// range: 0x5c9a8a-0x5c9ac2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___ascii_stricmp
   
   Library: Visual Studio 2008 Release */

int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = (uint)(byte)*_Str1;
    _Str1 = _Str1 + 1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = (uint)(byte)*_Str2;
    _Str2 = _Str2 + 1;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
  } while ((uVar1 != 0) && (uVar1 == uVar2));
  return uVar1 - uVar2;
}

