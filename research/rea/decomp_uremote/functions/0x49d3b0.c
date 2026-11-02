// rea decompile_all
// name: FUN_0049d3b0
// address: 0x49d3b0
// body: available
// range: 0x49d3b0-0x49d404 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049d3b0(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  int in_EAX;
  
  FUN_0049b70a(param_1,param_2,0);
  iVar2 = *(int *)(in_EAX + 0xd4);
  if (iVar2 != 0) {
    *(int *)(in_EAX + 0xd4) = *(int *)(in_EAX + 0xd8);
    *(int *)(in_EAX + 0xd8) = iVar2;
  }
  FUN_0049c5c9();
  puVar1 = (uint *)(in_EAX + 0x138);
  *puVar1 = *puVar1 + 1;
  if ((*(uint *)(in_EAX + 0x134) != 0) && (*(uint *)(in_EAX + 0x134) <= *puVar1)) {
    FUN_0049a4e4();
  }
  return;
}

