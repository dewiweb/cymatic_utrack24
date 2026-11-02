// rea decompile_all
// name: FUN_004ef48c
// address: 0x4ef48c
// body: available
// range: 0x4ef48c-0x4ef4f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ef48c(void)

{
  char cVar1;
  undefined4 local_14;
  undefined1 *local_c [2];
  
  local_14 = 0x4ef49f;
  FUN_004d076d();
  local_14 = 0x4ef4a4;
  cVar1 = FUN_004f0a6e();
  if (cVar1 == '\0') {
    local_14 = 0x3f800000;
    FUN_0047620f(local_c);
    local_14 = 0x4ef4c4;
    FUN_004d076d();
  }
  local_c[0] = (undefined1 *)&local_14;
  FUN_004d076d();
  FUN_004c1eee(0x1005700);
  local_14 = 0x4ef4e4;
  FUN_00476205();
  local_14 = 0x4ef4e9;
  FUN_004c0483();
  FUN_004c1613();
  return;
}

