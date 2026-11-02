// rea decompile_all
// name: FUN_0041977f
// address: 0x41977f
// body: available
// range: 0x41977f-0x4197d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041977f(void)

{
  char *_Str1;
  char *_Str2;
  int iVar1;
  uint in_ECX;
  int unaff_ESI;
  uint uVar2;
  
  if (in_ECX < 0x100) {
    _Str2 = (char *)(**(code **)(*(int *)(unaff_ESI + 0x544) + 0x14))
                              (*(undefined2 *)
                                (*(int *)(*(int *)(unaff_ESI + 0x544) + 0x18) + in_ECX * 2));
    uVar2 = 0;
    if (*(int *)(unaff_ESI + 0x548) != 0) {
      do {
        _Str1 = *(char **)(*(int *)(unaff_ESI + 0x54c) + uVar2 * 4);
        if (((_Str1 != (char *)0x0) && (*_Str1 == *_Str2)) &&
           (iVar1 = _strcmp(_Str1,_Str2), iVar1 == 0)) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(unaff_ESI + 0x548));
    }
  }
  return 0xffffffff;
}

