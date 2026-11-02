// rea decompile_all
// name: FUN_00432061
// address: 0x432061
// body: available
// range: 0x432061-0x432070 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00432061(char *param_1,uint param_2,int param_3)

{
  char *_Str;
  size_t sVar1;
  int iVar2;
  int iVar3;
  
  if (0xffff < param_2) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_3 + 0x11c)) {
    do {
      _Str = *(char **)(*(int *)(param_3 + 0x120) + iVar3 * 4);
      if ((((_Str != (char *)0x0) && (*_Str == *param_1)) &&
          (sVar1 = _strlen(_Str), sVar1 == param_2)) &&
         (iVar2 = _strncmp(_Str,param_1,param_2), iVar2 == 0)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_3 + 0x11c));
  }
  return 0;
}

