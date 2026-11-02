// rea decompile_all
// name: FUN_00488dae
// address: 0x488dae
// body: available
// range: 0x488dae-0x488f60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00488dae(void)

{
  int iVar1;
  undefined1 uVar2;
  int *in_EAX;
  int iVar3;
  undefined4 local_8;
  
  iVar1 = in_EAX[0x60];
  FUN_00488b4d();
  FUN_00488d2b();
  *(undefined4 *)(iVar1 + 0xc) = 0;
  uVar2 = FUN_00488adc();
  *(undefined1 *)(iVar1 + 0x10) = uVar2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if ((*(char *)((int)in_EAX + 0x4a) == '\0') || ((char)in_EAX[0x10] == '\0')) {
    *(undefined1 *)(in_EAX + 0x16) = 0;
    *(undefined1 *)((int)in_EAX + 0x59) = 0;
    *(undefined1 *)((int)in_EAX + 0x5a) = 0;
  }
  if (*(char *)((int)in_EAX + 0x4a) == '\0') goto LAB_00488e52;
  if (*(char *)((int)in_EAX + 0x41) != '\0') {
    *(undefined4 *)(*in_EAX + 0x14) = 0x2f;
    (**(code **)*in_EAX)();
  }
  if (in_EAX[0x19] == 3) {
    if (in_EAX[0x1d] == 0) {
      if ((char)in_EAX[0x14] == '\0') goto LAB_00488e21;
      *(undefined1 *)((int)in_EAX + 0x5a) = 1;
    }
    else {
      *(undefined1 *)((int)in_EAX + 0x59) = 1;
    }
  }
  else {
    *(undefined1 *)((int)in_EAX + 0x59) = 0;
    *(undefined1 *)((int)in_EAX + 0x5a) = 0;
    in_EAX[0x1d] = 0;
LAB_00488e21:
    *(undefined1 *)(in_EAX + 0x16) = 1;
  }
  if ((char)in_EAX[0x16] != '\0') {
    FUN_0048d5e9();
    *(int *)(iVar1 + 0x14) = in_EAX[0x6a];
  }
  if ((*(char *)((int)in_EAX + 0x5a) != '\0') || (*(char *)((int)in_EAX + 0x59) != '\0')) {
    FUN_0048e5b5();
    *(int *)(iVar1 + 0x18) = in_EAX[0x6a];
  }
LAB_00488e52:
  if (*(char *)((int)in_EAX + 0x41) == '\0') {
    if (*(char *)(iVar1 + 0x10) == '\0') {
      FUN_00485c79();
      FUN_0048a81a();
    }
    else {
      FUN_004895b2();
    }
    FUN_0048a373(*(undefined1 *)((int)in_EAX + 0x5a));
  }
  FUN_00485f5b();
  if (*(char *)((int)in_EAX + 0xc9) == '\0') {
    if ((char)in_EAX[0x32] == '\0') {
      FUN_00486975();
    }
    else {
      FUN_0048a0f1();
    }
  }
  else {
    *(undefined4 *)(*in_EAX + 0x14) = 1;
    (**(code **)*in_EAX)();
  }
  if ((*(char *)(in_EAX[100] + 0x10) != '\0') || (local_8 = 0, (char)in_EAX[0x10] != '\0')) {
    local_8 = 1;
  }
  FUN_004857d1(local_8);
  if (*(char *)((int)in_EAX + 0x41) == '\0') {
    FUN_004873f5();
  }
  (**(code **)(in_EAX[1] + 0x18))();
  (**(code **)(in_EAX[100] + 8))();
  if (((in_EAX[2] != 0) && ((char)in_EAX[0x10] == '\0')) && (*(char *)(in_EAX[100] + 0x10) != '\0'))
  {
    iVar3 = in_EAX[9];
    if ((char)in_EAX[0x32] != '\0') {
      iVar3 = iVar3 * 3 + 2;
    }
    *(undefined4 *)(in_EAX[2] + 4) = 0;
    *(int *)(in_EAX[2] + 8) = in_EAX[0x47] * iVar3;
    *(undefined4 *)(in_EAX[2] + 0xc) = 0;
    *(uint *)(in_EAX[2] + 0x10) = (*(char *)((int)in_EAX + 0x5a) != '\0') + 2;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  }
  return;
}

