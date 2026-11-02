// rea decompile_all
// name: FUN_005724a0
// address: 0x5724a0
// body: available
// range: 0x5724a0-0x57254e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005724a0(void)

{
  char cVar1;
  int in_ECX;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)(in_ECX + 0xa0) != 0) {
    if (*(short *)(in_ECX + 0xaa) == 0) {
      *(undefined1 *)(in_ECX + 0xf3) = 1;
      local_8 = 0x15;
    }
    else {
      cVar1 = FUN_00558fe0();
      if (cVar1 != '\0') {
        cVar1 = FUN_00529f40(in_ECX + 0x98,0);
        FUN_0052f300();
        *(undefined1 *)(in_ECX + 0xf3) = 1;
        if (cVar1 == '\0') {
          local_8 = 1;
        }
      }
    }
  }
  return local_8;
}

