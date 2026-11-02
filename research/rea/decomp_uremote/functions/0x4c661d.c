// rea decompile_all
// name: FUN_004c661d
// address: 0x4c661d
// body: available
// range: 0x4c661d-0x4c664a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c661d(void)

{
  int iVar1;
  int in_EAX;
  int unaff_EDI;
  
  FUN_00461605();
  iVar1 = *(int *)(unaff_EDI + 0x10);
  *(int *)(in_EAX + 0x10) = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  *(undefined4 *)(in_EAX + 0x14) = *(undefined4 *)(unaff_EDI + 0x14);
  *(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(unaff_EDI + 0x18);
  return;
}

