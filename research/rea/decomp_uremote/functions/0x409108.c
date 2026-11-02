// rea decompile_all
// name: FUN_00409108
// address: 0x409108
// body: available
// range: 0x409108-0x409178 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00409108(int param_1)

{
  char cVar1;
  uint uVar2;
  char *unaff_EBX;
  int local_8;
  
  local_8 = FUN_0041106d();
  if (local_8 == 0) {
    cVar1 = FUN_00411330();
    unaff_EBX[0x14] = '\0';
    unaff_EBX[0x15] = '\0';
    unaff_EBX[0x16] = '\0';
    unaff_EBX[0x17] = '\0';
    *unaff_EBX = cVar1;
    if (cVar1 != '\0') {
      if (cVar1 != '\x03') {
        return 3;
      }
      uVar2 = FUN_00411377();
      param_1 = (uVar2 & 0xffff) * 3 + 2;
    }
    *(int *)(unaff_EBX + 0xc) = param_1;
    local_8 = FUN_0041117c(unaff_EBX + 8);
  }
  return local_8;
}

