// rea decompile_all
// name: FUN_00481b62
// address: 0x481b62
// body: available
// range: 0x481b62-0x481c01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481b62(undefined4 param_1)

{
  int *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00481979(param_1);
  FUN_00481993();
  if ((0xffff < in_EAX[8]) || (0xffff < in_EAX[7])) {
    *(undefined4 *)(*in_EAX + 0x14) = 0x29;
    *(undefined4 *)(*in_EAX + 0x18) = 0xffff;
    (**(code **)*in_EAX)();
  }
  FUN_0048194e(in_EAX[0xe]);
  FUN_00481993();
  FUN_00481993();
  FUN_0048194e(in_EAX[0xf]);
  puVar2 = (undefined4 *)in_EAX[0x11];
  iVar1 = 0;
  if (0 < in_EAX[0xf]) {
    do {
      FUN_0048194e(*puVar2);
      FUN_0048194e(puVar2[2] * 0x10 + puVar2[3]);
      FUN_0048194e(puVar2[4]);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0x15;
    } while (iVar1 < in_EAX[0xf]);
  }
  return;
}

