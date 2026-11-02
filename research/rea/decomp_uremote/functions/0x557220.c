// rea decompile_all
// name: FUN_00557220
// address: 0x557220
// body: available
// range: 0x557220-0x55727c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00557220(void)

{
  char cVar1;
  undefined2 uVar2;
  int in_ECX;
  
  FUN_005033e0(in_ECX + 0x74);
  uVar2 = FUN_00544700();
  cVar1 = FUN_0059b5a0(*(undefined4 *)(in_ECX + 0x70),uVar2);
  if (cVar1 == '\0') {
    FUN_00544280(1);
  }
  return;
}

