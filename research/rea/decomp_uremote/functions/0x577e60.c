// rea decompile_all
// name: FUN_00577e60
// address: 0x577e60
// body: available
// range: 0x577e60-0x577eb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00577e60(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_14 [16];
  
  puVar2 = local_14;
  uVar1 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24))
                    (puVar2,*(undefined4 *)(param_1 + 0x7c));
  FUN_00577ec0(*(undefined4 *)(param_1 + 0x80),uVar1,puVar2);
  return;
}

