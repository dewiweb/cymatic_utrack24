// rea decompile_all
// name: FUN_00434ed8
// address: 0x434ed8
// body: available
// range: 0x434ed8-0x434f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00434ed8(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  int unaff_ESI;
  
  iVar1 = *(int *)(in_EAX + 8);
  if (iVar1 == 10) {
    (**(code **)(in_EAX + 0xc))();
    uVar2 = *(undefined4 *)(unaff_ESI + 0xc);
  }
  else if ((iVar1 == 8) || (iVar1 == 9)) {
    uVar2 = (**(code **)(unaff_ESI + 0x44))();
  }
  else {
    uVar2 = (**(code **)(unaff_ESI + 0x40))();
  }
  return uVar2;
}

