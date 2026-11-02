// rea decompile_all
// name: FUN_0040ff71
// address: 0x40ff71
// body: available
// range: 0x40ff71-0x40ffb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040ff71(char *param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  
  if ((in_EAX != 0) && (param_1 != (char *)0x0)) {
    puVar3 = (undefined4 *)(in_EAX + 0x14);
    puVar1 = puVar3 + *(int *)(in_EAX + 0x10);
    while( true ) {
      if (puVar1 <= puVar3) {
        return 0;
      }
      iVar2 = _strcmp(*(char **)(*(int *)*puVar3 + 8),param_1);
      if (iVar2 == 0) break;
      puVar3 = puVar3 + 1;
    }
    return *puVar3;
  }
  return 0;
}

