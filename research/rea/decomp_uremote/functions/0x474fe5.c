// rea decompile_all
// name: FUN_00474fe5
// address: 0x474fe5
// body: available
// range: 0x474fe5-0x475033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00474fe5(int param_1,int param_2)

{
  int in_EDX;
  undefined1 *puVar1;
  undefined1 local_34 [48];
  
  if (*(char *)(in_EDX + 0x20) == '\0') {
    puVar1 = local_34;
    FUN_00477188((float)param_1,(float)param_2,puVar1);
    FUN_00477099(puVar1);
    FUN_00476f96();
  }
  else {
    *(int *)(in_EDX + 0x18) = *(int *)(in_EDX + 0x18) + param_1;
    *(int *)(in_EDX + 0x1c) = *(int *)(in_EDX + 0x1c) + param_2;
  }
  return;
}

