// rea decompile_all
// name: FUN_004a4b75
// address: 0x4a4b75
// body: available
// range: 0x4a4b75-0x4a4bf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a4b75(uint param_1)

{
  uint uVar1;
  int *in_EAX;
  undefined8 *unaff_EBX;
  undefined8 *puVar2;
  
  if (in_EAX[1] < in_EAX[2] + 1) {
    FUN_0046ebd7();
  }
  uVar1 = in_EAX[2];
  if (param_1 < uVar1) {
    puVar2 = (undefined8 *)(param_1 * 0x10 + *in_EAX);
    if (0 < (int)(uVar1 - param_1)) {
      _memmove(puVar2 + 2,puVar2,(uVar1 - param_1) * 0x10);
    }
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *unaff_EBX;
      FUN_004d076d();
    }
    in_EAX[2] = in_EAX[2] + 1;
  }
  else {
    puVar2 = (undefined8 *)(uVar1 * 0x10 + *in_EAX);
    in_EAX[2] = uVar1 + 1;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *unaff_EBX;
      FUN_004d076d();
    }
  }
  return;
}

