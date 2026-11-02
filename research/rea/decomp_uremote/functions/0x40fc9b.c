// rea decompile_all
// name: FUN_0040fc9b
// address: 0x40fc9b
// body: available
// range: 0x40fc9b-0x40fcea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040fc9b(void)

{
  int iVar1;
  int unaff_EBX;
  int unaff_EDI;
  undefined4 uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if (unaff_EBX == 0) {
    uVar2 = 0x21;
  }
  else {
    if (unaff_EDI != 0) {
      iVar1 = FUN_00411af4();
      if (iVar1 == 0) {
        local_8 = 6;
      }
      else {
        FUN_00411b3c();
        if (*(int *)(unaff_EDI + 0x10) == 0x6f75746c) {
          *(int *)(unaff_EBX + 0x9c) = unaff_EDI;
        }
      }
      return local_8;
    }
    uVar2 = 6;
  }
  return uVar2;
}

