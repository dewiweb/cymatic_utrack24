// rea decompile_all
// name: FUN_00586830
// address: 0x586830
// body: available
// range: 0x586830-0x5869c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00586830(uint *param_1)

{
  int in_ECX;
  
  FUN_0057b2a0(param_1);
  *param_1 = *param_1 + 3 & 0xfffffffc;
  FUN_00506d30(param_1);
  *param_1 = *param_1 + 3 & 0xfffffffc;
  FUN_00507bf0(param_1,in_ECX + 0x48);
  FUN_00507bf0(param_1,in_ECX + 0x54);
  *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x28);
  *param_1 = *param_1 + 4;
  *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x2c);
  *param_1 = *param_1 + 4;
  *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x30);
  *param_1 = *param_1 + 4;
  *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x34);
  *param_1 = *param_1 + 4;
  *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x38);
  *param_1 = *param_1 + 4;
  *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x3c);
  *param_1 = *param_1 + 4;
  *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x40);
  *param_1 = *param_1 + 4;
  *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x44);
  *param_1 = *param_1 + 4;
  if ((*(byte *)(in_ECX + 0xb4) & 2) != 0) {
    FUN_0054b9f0(param_1,in_ECX + 0x60);
    *param_1 = *param_1 + 1 & 0xfffffffe;
  }
  if ((*(byte *)(in_ECX + 0xb4) & 1) != 0) {
    FUN_0054b9f0(param_1,in_ECX + 0x68);
  }
  return;
}

