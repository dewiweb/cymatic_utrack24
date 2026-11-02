// rea decompile_all
// name: FUN_004c6b63
// address: 0x4c6b63
// body: available
// range: 0x4c6b63-0x4c6b82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c6b63(void)

{
  int iVar1;
  int *in_EAX;
  undefined4 uVar2;
  
  iVar1 = *in_EAX;
  if (iVar1 != 0) {
    if ((*(int *)(iVar1 + 8) == 0) && (*(char *)(iVar1 + 0xc) != '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}

