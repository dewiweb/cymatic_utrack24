// rea decompile_all
// name: FUN_004a81dc
// address: 0x4a81dc
// body: available
// range: 0x4a81dc-0x4a8238 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a81dc(uint param_1)

{
  uint uVar1;
  undefined4 *in_EAX;
  int *unaff_EBX;
  undefined4 *puVar2;
  
  FUN_004a8ced();
  uVar1 = unaff_EBX[2];
  if (param_1 < uVar1) {
    puVar2 = (undefined4 *)(param_1 * 0xc + *unaff_EBX);
    if (0 < (int)(uVar1 - param_1)) {
      _memmove(puVar2 + 3,puVar2,(uVar1 - param_1) * 0xc);
    }
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *in_EAX;
      puVar2[1] = in_EAX[1];
      puVar2[2] = in_EAX[2];
    }
    unaff_EBX[2] = unaff_EBX[2] + 1;
  }
  else {
    puVar2 = (undefined4 *)(uVar1 * 0xc + *unaff_EBX);
    unaff_EBX[2] = uVar1 + 1;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *in_EAX;
      puVar2[1] = in_EAX[1];
      puVar2[2] = in_EAX[2];
    }
  }
  return;
}

