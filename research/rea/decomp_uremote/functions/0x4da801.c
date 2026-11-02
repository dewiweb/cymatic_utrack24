// rea decompile_all
// name: FUN_004da801
// address: 0x4da801
// body: available
// range: 0x4da801-0x4da84a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004da801(void)

{
  char in_stack_00000010;
  char in_stack_00000014;
  undefined4 uVar1;
  undefined1 auStack_14 [4];
  
  if (in_stack_00000014 == '\0') {
    if (in_stack_00000010 == '\0') {
      return;
    }
    uVar1 = 0x1003220;
  }
  else {
    uVar1 = 0x1003230;
  }
  FUN_004c1e29(auStack_14,uVar1,1);
  FUN_0047d23a();
  return;
}

