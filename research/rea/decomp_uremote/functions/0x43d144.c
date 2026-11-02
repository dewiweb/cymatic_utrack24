// rea decompile_all
// name: FUN_0043d144
// address: 0x43d144
// body: available
// range: 0x43d144-0x43d26d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043d144(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *unaff_EBX;
  
  iVar1 = FUN_005af82d(0xc);
  if (iVar1 == 0) {
    param_1 = 0;
  }
  else {
    FUN_004652e4(param_1);
    FUN_004652e4(param_2);
    *(int *)(iVar1 + 8) = param_3;
    param_1 = iVar1;
  }
  if (unaff_EBX[0x1ce] < unaff_EBX[0x1cf] + 1) {
    FUN_004f8197();
  }
  iVar1 = unaff_EBX[0x1cf];
  unaff_EBX[0x1cf] = iVar1 + 1;
  *(int *)(unaff_EBX[0x1cd] + iVar1 * 4) = param_1;
  if (unaff_EBX[0x1cf] == 1) {
    unaff_EBX[0x1cc] = param_3;
  }
  else {
    unaff_EBX[0x1cc] = 2;
  }
  (**(code **)(unaff_EBX[0x24] + 0x28))(unaff_EBX[0x1cc] == 0);
  (**(code **)(unaff_EBX[0x82] + 0x28))(unaff_EBX[0x1cc] == 0);
  (**(code **)(unaff_EBX[0xe0] + 0x28))(unaff_EBX[0x1cc] != 0);
  (**(code **)(unaff_EBX[0x13e] + 0x28))(unaff_EBX[0x1cc] == 2);
  iVar1 = FUN_00467ec4();
  unaff_EBX[0x1d1] = iVar1;
  if (unaff_EBX[0x1cc] == 3) {
    FUN_0047479c();
  }
  else {
    FUN_00474839();
  }
  FUN_004e726f();
  (**(code **)(*unaff_EBX + 0x84))();
  return;
}

