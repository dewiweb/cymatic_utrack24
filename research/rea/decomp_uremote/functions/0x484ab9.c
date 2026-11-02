// rea decompile_all
// name: FUN_00484ab9
// address: 0x484ab9
// body: available
// range: 0x484ab9-0x484b10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00484ab9(void)

{
  int *in_EAX;
  int iVar1;
  
  if ((in_EAX[5] != 200) && (in_EAX[5] != 0xc9)) {
    *(undefined4 *)(*in_EAX + 0x14) = 0x14;
    *(int *)(*in_EAX + 0x18) = in_EAX[5];
    (**(code **)*in_EAX)();
  }
  iVar1 = FUN_00484b11();
  if (iVar1 == 1) {
    iVar1 = 1;
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(*in_EAX + 0x14) = 0x33;
    (**(code **)*in_EAX)();
    FUN_00482a52();
    return 2;
  }
  return iVar1;
}

