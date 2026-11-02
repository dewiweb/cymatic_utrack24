// rea decompile_all
// name: FUN_00473068
// address: 0x473068
// body: available
// range: 0x473068-0x4730d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00473068(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *in_EAX;
  uint unaff_EBX;
  
  if (in_EAX[1] < in_EAX[2] + 1) {
    FUN_004f8197();
  }
  uVar2 = in_EAX[2];
  if (unaff_EBX < uVar2) {
    puVar1 = (undefined4 *)(*in_EAX + unaff_EBX * 4);
    if (0 < (int)(uVar2 - unaff_EBX)) {
      _memmove(puVar1 + 1,puVar1,(uVar2 - unaff_EBX) * 4);
    }
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_1;
    }
    in_EAX[2] = in_EAX[2] + 1;
  }
  else {
    in_EAX[2] = uVar2 + 1;
    puVar1 = (undefined4 *)(*in_EAX + uVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_1;
    }
  }
  return;
}

