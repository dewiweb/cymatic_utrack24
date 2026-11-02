// rea decompile_all
// name: FUN_00481784
// address: 0x481784
// body: available
// range: 0x481784-0x48181d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481784(void)

{
  int *in_EAX;
  uint uVar1;
  
  FUN_004829cc();
  if ((char)in_EAX[0x2c] == '\0') {
    FUN_0048059c();
    FUN_00484587();
    FUN_00483e3e();
  }
  FUN_00480af9();
  if (*(char *)((int)in_EAX + 0xb1) == '\0') {
    if ((char)in_EAX[0x35] == '\0') {
      uVar1 = FUN_00481751();
    }
    else {
      uVar1 = FUN_004839c8();
    }
  }
  else {
    *(undefined4 *)(*in_EAX + 0x14) = 1;
    uVar1 = (**(code **)*in_EAX)();
  }
  if ((in_EAX[0x2a] < 2) && (*(char *)((int)in_EAX + 0xb2) == '\0')) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = 1;
  }
  FUN_004800cc(uVar1);
  FUN_004818ee();
  FUN_0048206c();
  (**(code **)(in_EAX[1] + 0x18))();
  (**(code **)in_EAX[0x53])();
  return;
}

