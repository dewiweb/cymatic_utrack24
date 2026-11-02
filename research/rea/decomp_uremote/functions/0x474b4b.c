// rea decompile_all
// name: FUN_00474b4b
// address: 0x474b4b
// body: available
// range: 0x474b4b-0x474b6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00474b4b(void)

{
  int in_EAX;
  BOOL BVar1;
  
  LOCK();
  *(int *)(in_EAX + 4) = *(int *)(in_EAX + 4) + 1;
  UNLOCK();
  BVar1 = PostMessageW(DAT_0095d66c,0xc400,0,in_EAX);
  return BVar1 != 0;
}

