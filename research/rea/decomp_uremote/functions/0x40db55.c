// rea decompile_all
// name: FUN_0040db55
// address: 0x40db55
// body: available
// range: 0x40db55-0x40db99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040db55(undefined4 param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int unaff_ESI;
  undefined4 local_8;
  
  if ((*(byte *)(*(int *)(unaff_ESI + 0x9c) + 4) & 1) == 0) {
    puVar1 = (uint *)(*(int *)(unaff_ESI + 0x9c) + 4);
    *puVar1 = *puVar1 | 1;
  }
  else {
    FUN_00411a5c(*(undefined4 *)(unaff_ESI + 0x58));
    *(undefined4 *)(unaff_ESI + 0x58) = 0;
  }
  uVar2 = FUN_00411912(param_1,&local_8);
  *(undefined4 *)(unaff_ESI + 0x58) = uVar2;
  return local_8;
}

