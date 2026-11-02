// rea decompile_all
// name: FUN_004651d8
// address: 0x4651d8
// body: available
// range: 0x4651d8-0x4651fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004651d8(void)

{
  int in_EAX;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *unaff_EDI;
  
  uVar2 = in_EAX + 3U & 0xfffffffc;
  puVar1 = (undefined4 *)FUN_005b04d6(uVar2 + 0xb);
  puVar1[1] = uVar2;
  *puVar1 = 0;
  *unaff_EDI = puVar1 + 2;
  return;
}

