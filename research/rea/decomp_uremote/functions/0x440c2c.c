// rea decompile_all
// name: FUN_00440c2c
// address: 0x440c2c
// body: available
// range: 0x440c2c-0x440c92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440c2c(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int iStack_2c;
  undefined1 *local_1c [6];
  
  iStack_2c = 0x440c3e;
  iStack_2c = FUN_0044bfc5();
  iStack_2c = iStack_2c + 0xa0;
  local_1c[0] = (undefined1 *)&iStack_2c;
  FUN_004d076d();
  FUN_0047cda7();
  iStack_2c = in_ECX + 0x74;
  FUN_0047ceaa();
  uVar1 = FUN_004c2047(local_1c);
  FUN_0047cffd(param_1,in_ECX + 4,uVar1);
  return;
}

