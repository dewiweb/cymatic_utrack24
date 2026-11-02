// rea decompile_all
// name: FUN_0046e645
// address: 0x46e645
// body: available
// range: 0x46e645-0x46e6b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046e645(undefined4 *param_1)

{
  undefined2 *puVar1;
  char *_Str;
  int *in_EAX;
  size_t sVar2;
  int iVar3;
  
  _Str = (char *)*in_EAX;
  if (*_Str == '\0') {
    *param_1 = &DAT_005ffbf0;
  }
  else {
    FUN_00470fe0(_Str);
    sVar2 = _strlen(_Str);
    FUN_00465353();
    puVar1 = (undefined2 *)((sVar2 + 4 & 0xfffffffc) + *in_EAX);
    while( true ) {
      iVar3 = FUN_0044eba8();
      if (iVar3 == 0) break;
      FUN_00460a50();
    }
    *puVar1 = 0;
    *param_1 = puVar1;
  }
  return;
}

