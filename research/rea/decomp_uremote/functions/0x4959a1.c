// rea decompile_all
// name: FUN_004959a1
// address: 0x4959a1
// body: available
// range: 0x4959a1-0x495a34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004959a1(void)

{
  int in_ECX;
  undefined1 local_10 [4];
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(in_ECX + 0x26c) = 0x21;
  FUN_00492117(local_10,8);
  FUN_004958cb();
  *(uint *)(in_ECX + 0xd0) = CONCAT31(CONCAT21(CONCAT11(local_c,local_b),local_a),local_9);
  FUN_0048eea3();
  FUN_0048eebb(&local_c);
  FUN_00497d70();
  *(undefined4 *)(in_ECX + 0x26c) = 0x41;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

