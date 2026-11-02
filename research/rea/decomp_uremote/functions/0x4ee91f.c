// rea decompile_all
// name: FUN_004ee91f
// address: 0x4ee91f
// body: available
// range: 0x4ee91f-0x4ee96b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004ee91f(int *param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  (**(code **)(*in_ECX + 0xb8))(param_1);
  cVar1 = FUN_004ef621();
  if (cVar1 == '\0') {
    cVar1 = FUN_004efb18();
    if (cVar1 == '\0') {
      iVar2 = in_ECX[0x38];
    }
    else {
      iVar2 = 0;
    }
    if (in_ECX[0x40] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = in_ECX[0x39];
    }
    *param_1 = *param_1 + iVar3 + iVar2;
  }
  return param_1;
}

