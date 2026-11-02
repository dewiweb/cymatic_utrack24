// rea decompile_all
// name: FUN_0051fe80
// address: 0x51fe80
// body: available
// range: 0x51fe80-0x51ff31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051fe80(void)

{
  char cVar1;
  int *in_ECX;
  undefined1 *puVar2;
  int local_20;
  undefined1 local_18 [12];
  int local_c;
  uint local_8;
  
  for (local_8 = 0; local_8 < *(ushort *)((int)in_ECX + 6); local_8 = local_8 + 1) {
    local_c = *(int *)(*in_ECX + local_8 * 4);
    puVar2 = &stack0x00000004;
    (**(code **)(*(int *)(local_c + 0x28 + *(int *)(*(int *)(local_c + 0x28) + 0xc)) + 8))
              (local_18,puVar2);
    cVar1 = FUN_005034a0(puVar2);
    if (cVar1 != '\0') {
      if (local_c == 0) {
        local_20 = 0;
      }
      else {
        local_20 = local_c + 0x28 + *(int *)(*(int *)(local_c + 0x28) + 0xc);
      }
      FUN_00557960(1,local_20);
    }
  }
  return;
}

