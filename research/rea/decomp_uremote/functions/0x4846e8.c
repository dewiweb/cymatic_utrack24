// rea decompile_all
// name: FUN_004846e8
// address: 0x4846e8
// body: available
// range: 0x4846e8-0x4847a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004846e8(void)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  undefined4 uVar3;
  
  if (in_EAX[5] == 0xca) {
    FUN_004890af();
    if ((char)in_EAX[0x10] != '\0') {
      in_EAX[5] = 0xcf;
      return 1;
    }
    in_EAX[5] = 0xcb;
  }
  if (in_EAX[5] == 0xcb) {
    if (*(char *)(in_EAX[100] + 0x10) != '\0') {
      while( true ) {
        if ((undefined4 *)in_EAX[2] != (undefined4 *)0x0) {
          (**(code **)in_EAX[2])();
        }
        iVar2 = (**(code **)in_EAX[100])();
        if (iVar2 == 0) {
          return 0;
        }
        if (iVar2 == 2) break;
        if ((in_EAX[2] != 0) && ((iVar2 == 3 || (iVar2 == 1)))) {
          piVar1 = (int *)(in_EAX[2] + 4);
          *piVar1 = *piVar1 + 1;
          iVar2 = in_EAX[2];
          if (*(int *)(iVar2 + 8) <= *(int *)(iVar2 + 4)) {
            *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + in_EAX[0x47];
          }
        }
      }
    }
    in_EAX[0x21] = in_EAX[0x1f];
  }
  else if (in_EAX[5] != 0xcc) {
    *(undefined4 *)(*in_EAX + 0x14) = 0x14;
    *(int *)(*in_EAX + 0x18) = in_EAX[5];
    (**(code **)*in_EAX)();
  }
  uVar3 = FUN_004847a3();
  return uVar3;
}

