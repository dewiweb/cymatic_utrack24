// rea decompile_all
// name: FUN_004ef0d3
// address: 0x4ef0d3
// body: available
// range: 0x4ef0d3-0x4ef161 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ef0d3(void)

{
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  
  (**(code **)(*in_ECX + 0xbc))(&local_38);
  FUN_004c2047(auStack_2c);
  FUN_004f5b6b(in_ECX);
  FUN_004c1662(in_ECX);
  FUN_004f5b9e(local_38);
  FUN_004c1662(in_ECX);
  FUN_004f5bd0(uStack_30);
  FUN_004c1662(in_ECX);
  FUN_004f5c0c(uStack_34);
  FUN_004c1662(unaff_EBX);
  return;
}

