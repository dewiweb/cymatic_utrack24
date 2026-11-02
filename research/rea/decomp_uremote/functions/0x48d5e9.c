// rea decompile_all
// name: FUN_0048d5e9
// address: 0x48d5e9
// body: available
// range: 0x48d5e9-0x48d66f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048d5e9(void)

{
  int *in_EAX;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)in_EAX[1])();
  in_EAX[0x6a] = (int)puVar1;
  puVar1[0x11] = 0;
  puVar1[0xd] = 0;
  *puVar1 = FUN_0048d50c;
  puVar1[2] = FUN_0041f3a2;
  puVar1[3] = &LAB_0048d5d5;
  if (4 < in_EAX[0x19]) {
    *(undefined4 *)(*in_EAX + 0x14) = 0x37;
    *(undefined4 *)(*in_EAX + 0x18) = 4;
    (**(code **)*in_EAX)();
  }
  if (0x100 < in_EAX[0x15]) {
    *(undefined4 *)(*in_EAX + 0x14) = 0x39;
    *(undefined4 *)(*in_EAX + 0x18) = 0x100;
    (**(code **)*in_EAX)();
  }
  FUN_0048cd67();
  FUN_0048ce82();
  if (in_EAX[0x13] == 2) {
    FUN_0048d4d6();
  }
  return;
}

