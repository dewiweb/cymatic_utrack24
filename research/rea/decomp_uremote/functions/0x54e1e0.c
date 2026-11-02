// rea decompile_all
// name: FUN_0054e1e0
// address: 0x54e1e0
// body: available
// range: 0x54e1e0-0x54e255 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054e1e0(void)

{
  uint uVar1;
  int in_ECX;
  undefined4 local_c;
  
  if (*(char *)(in_ECX + 0xd00) != '\0') {
    local_c = 0xffffffff;
    uVar1 = *(uint *)(in_ECX + 0xc98);
    if (*(int **)(in_ECX + 0x128) != (int *)0x0) {
      local_c = (**(code **)(**(int **)(in_ECX + 0x128) + 0x10))();
    }
    if ((0x7800 < local_c) && (uVar1 < 0x20)) {
      FUN_00597200(1);
      *(undefined1 *)(in_ECX + 0xd00) = 0;
    }
  }
  return;
}

