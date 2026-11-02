// rea decompile_all
// name: FUN_00484b11
// address: 0x484b11
// body: available
// range: 0x484b11-0x484ba8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00484b11(void)

{
  int *in_EAX;
  int iVar1;
  
  iVar1 = in_EAX[5];
  if (iVar1 == 200) {
    (**(code **)(in_EAX[100] + 4))();
    (**(code **)(in_EAX[6] + 8))();
    in_EAX[5] = 0xc9;
  }
  else if (iVar1 != 0xc9) {
    if (iVar1 == 0xca) {
      return 1;
    }
    if ((0xca < iVar1) && ((iVar1 < 0xd1 || (iVar1 == 0xd2)))) {
      iVar1 = (**(code **)in_EAX[100])();
      return iVar1;
    }
    *(undefined4 *)(*in_EAX + 0x14) = 0x14;
    *(int *)(*in_EAX + 0x18) = in_EAX[5];
    (**(code **)*in_EAX)();
    return 0;
  }
  iVar1 = (**(code **)in_EAX[100])();
  if (iVar1 == 1) {
    FUN_00484941();
    in_EAX[5] = 0xca;
  }
  return iVar1;
}

