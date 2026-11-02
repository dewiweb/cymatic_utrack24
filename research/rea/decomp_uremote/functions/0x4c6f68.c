// rea decompile_all
// name: FUN_004c6f68
// address: 0x4c6f68
// body: available
// range: 0x4c6f68-0x4c6fad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004c6f68(void)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 local_8;
  
  local_8 = FUN_004c2e21();
  if (local_8 < 1) {
    local_8 = 0x3fffffff;
  }
  iVar1 = FUN_004c2e21();
  if (iVar1 < 1) {
    iVar1 = 0x3fffffff;
  }
  if (local_8 != iVar1) {
    return local_8 - iVar1;
  }
  iVar1 = *(int *)(unaff_EDI + 0x14) - *(int *)(unaff_ESI + 0x14);
  if (iVar1 == 0) {
    iVar1 = *(int *)(unaff_EDI + 0x10) - *(int *)(unaff_ESI + 0x10);
  }
  return iVar1;
}

