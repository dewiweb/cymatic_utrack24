// rea decompile_all
// name: FUN_00429edf
// address: 0x429edf
// body: available
// range: 0x429edf-0x42a024 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00429edf(void)

{
  short sVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  
  sVar1 = *(short *)(in_EAX + 0x12a);
  if (sVar1 == 0x4000) {
    sVar2 = *(short *)(in_EAX + 0x126);
  }
  else {
    if (*(short *)(in_EAX + 300) != 0x4000) {
      *(int *)(in_EAX + 0x234) =
           ((int)*(short *)(in_EAX + 0x128) * (int)*(short *)(in_EAX + 300) +
           (int)*(short *)(in_EAX + 0x126) * (int)sVar1) * 4;
      goto LAB_00429f43;
    }
    sVar2 = *(short *)(in_EAX + 0x128);
  }
  *(int *)(in_EAX + 0x234) = (int)sVar2 << 0x10;
LAB_00429f43:
  if (*(short *)(in_EAX + 0x126) == 0x4000) {
    *(undefined1 **)(in_EAX + 0x23c) = &LAB_00429ed5;
  }
  else if (*(short *)(in_EAX + 0x128) == 0x4000) {
    *(undefined1 **)(in_EAX + 0x23c) = &LAB_00429eda;
  }
  else {
    *(undefined1 **)(in_EAX + 0x23c) = &LAB_00429e8d;
  }
  if (*(short *)(in_EAX + 0x122) == 0x4000) {
    *(undefined1 **)(in_EAX + 0x240) = &LAB_00429ed5;
  }
  else if (*(short *)(in_EAX + 0x124) == 0x4000) {
    *(undefined1 **)(in_EAX + 0x240) = &LAB_00429eda;
  }
  else {
    *(undefined1 **)(in_EAX + 0x240) = &LAB_00429eb1;
  }
  iVar3 = *(int *)(in_EAX + 0x234);
  *(code **)(in_EAX + 0x248) = FUN_00429a26;
  *(code **)(in_EAX + 0x24c) = FUN_00429aa8;
  if (iVar3 == 0x40000000) {
    if (sVar1 == 0x4000) {
      *(undefined1 **)(in_EAX + 0x248) = &LAB_00429b0e;
      *(undefined1 **)(in_EAX + 0x24c) = &LAB_00429b4f;
    }
    else if (*(short *)(in_EAX + 300) == 0x4000) {
      *(undefined1 **)(in_EAX + 0x248) = &LAB_00429b2e;
      *(undefined1 **)(in_EAX + 0x24c) = &LAB_00429b65;
    }
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < 0x4000000) {
    *(undefined4 *)(in_EAX + 0x234) = 0x40000000;
  }
  *(undefined4 *)(in_EAX + 0x100) = 0;
  return;
}

