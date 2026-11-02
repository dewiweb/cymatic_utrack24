// rea decompile_all
// name: FUN_00470ddb
// address: 0x470ddb
// body: available
// range: 0x470ddb-0x470e11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00470ddb(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  undefined4 *puVar3;
  
  if (in_ECX != in_EAX) {
    uVar1 = *in_ECX;
    *in_ECX = *in_EAX;
    *in_EAX = uVar1;
  }
  puVar2 = in_EAX + 1;
  puVar3 = in_ECX + 1;
  if (puVar3 != puVar2) {
    uVar1 = *puVar3;
    *puVar3 = *puVar2;
    *puVar2 = uVar1;
  }
  puVar2 = in_EAX + 2;
  puVar3 = in_ECX + 2;
  if (puVar3 != puVar2) {
    uVar1 = *puVar3;
    *puVar3 = *puVar2;
    *puVar2 = uVar1;
  }
  return;
}

