// rea decompile_all
// name: FUN_0040d839
// address: 0x40d839
// body: available
// range: 0x40d839-0x40d887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040d839(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_ESI;
  int local_8;
  
  local_8 = 0;
  uVar1 = *(int *)(unaff_ESI + 0x54) + *(int *)(unaff_ESI + 0x30) + param_1;
  if (*(uint *)(unaff_ESI + 0xc) < uVar1) {
    uVar2 = FUN_00411976(0x20,*(undefined4 *)(unaff_ESI + 0x34),&local_8);
    *(undefined4 *)(unaff_ESI + 0x34) = uVar2;
    if (local_8 == 0) {
      *(uint *)(unaff_ESI + 0xc) = uVar1 + 1 & 0xfffffffe;
      FUN_0040d6f9();
    }
  }
  return local_8;
}

