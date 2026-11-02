// rea decompile_all
// name: FUN_0040b00b
// address: 0x40b00b
// body: available
// range: 0x40b00b-0x40b056 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040b00b(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int *unaff_ESI;
  int *unaff_EDI;
  int local_c;
  int local_8;
  
  if (*(int *)(*(int *)(in_ECX + 0x80) + 0x34) == 0) {
    FUN_00408ef1(param_1);
  }
  else {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x80) + 0x34);
    local_c = in_ECX;
    local_8 = in_ECX;
    (**(code **)*puVar1)(puVar1[1],param_1,&local_c);
    *unaff_EDI = local_c;
    *unaff_ESI = local_8;
  }
  return;
}

