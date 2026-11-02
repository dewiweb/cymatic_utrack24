// rea decompile_all
// name: FUN_0049f8f8
// address: 0x49f8f8
// body: available
// range: 0x49f8f8-0x49f972 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049f8f8(uint param_1)

{
  int *in_EAX;
  uint uVar1;
  
  uVar1 = FUN_0049f894();
  if (uVar1 != param_1) {
    FUN_0049f62f();
    FUN_004a4d78();
    uVar1 = param_1;
    FUN_0049ddad((byte)param_1 & 1,(byte)(param_1 >> 1) & 1);
    FUN_0046537e(&param_1);
    FUN_00465317(*in_EAX + 0x10);
    FUN_004652d6();
    *(byte *)(*in_EAX + 0x24) = (byte)(uVar1 >> 2) & 1;
    *(undefined4 *)(*in_EAX + 0x20) = 0;
  }
  return;
}

