// rea decompile_all
// name: FUN_00484ba9
// address: 0x484ba9
// body: available
// range: 0x484ba9-0x484c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00484ba9(void)

{
  int *in_EAX;
  int iVar1;
  
  iVar1 = in_EAX[5];
  if (((iVar1 == 0xcd) || (iVar1 == 0xce)) && ((char)in_EAX[0x10] == '\0')) {
    if ((uint)in_EAX[0x1e] < (uint)in_EAX[0x18]) {
      *(undefined4 *)(*in_EAX + 0x14) = 0x43;
      (**(code **)*in_EAX)();
    }
    (**(code **)(in_EAX[0x60] + 4))();
    in_EAX[5] = 0xd2;
  }
  else if (iVar1 == 0xcf) {
    in_EAX[5] = 0xd2;
  }
  else if (iVar1 != 0xd2) {
    *(undefined4 *)(*in_EAX + 0x14) = 0x14;
    *(int *)(*in_EAX + 0x18) = in_EAX[5];
    (**(code **)*in_EAX)();
  }
  do {
    if (*(char *)(in_EAX[100] + 0x11) != '\0') {
      (**(code **)(in_EAX[6] + 0x18))();
      FUN_00482a52();
      return 1;
    }
    iVar1 = (**(code **)in_EAX[100])();
  } while (iVar1 != 0);
  return 0;
}

