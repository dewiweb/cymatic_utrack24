// rea decompile_all
// name: FUN_004cd70b
// address: 0x4cd70b
// body: available
// range: 0x4cd70b-0x4cd8ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cd70b(void)

{
  int in_ECX;
  float10 fVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_004c8d10();
  local_18 = *(undefined4 *)(in_ECX + 0xa0);
  local_14 = *(undefined4 *)(in_ECX + 0xa4);
  local_20 = *(undefined4 *)(in_ECX + 0x98);
  local_1c = *(undefined4 *)(in_ECX + 0x9c);
  fVar1 = (float10)FUN_004a5522();
  local_18 = *(undefined4 *)(in_ECX + 0xa8);
  local_14 = *(undefined4 *)(in_ECX + 0xac);
  local_20 = *(undefined4 *)(in_ECX + 0x98);
  local_1c = *(undefined4 *)(in_ECX + 0x9c);
  FUN_004a5522();
  FUN_004775b5(&local_20,0,0,*(undefined4 *)(in_ECX + 0x98),*(undefined4 *)(in_ECX + 0x9c),
               (float)fVar1,0,*(undefined4 *)(in_ECX + 0xa0));
  FUN_0047cd79();
  FUN_0047ceaa();
  FUN_004d076d();
  FUN_0047cda7();
  FUN_004a51ab();
  FUN_0047d077();
  return;
}

