// rea decompile_all
// name: FUN_00525710
// address: 0x525710
// body: available
// range: 0x525710-0x525845 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00525710(int param_1)

{
  short sVar1;
  int iVar2;
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  FUN_005033e0(param_1 + 0x24);
  FUN_005033e0(param_1 + 0x18);
  sVar1 = *(short *)(param_1 + 0x30);
  if (sVar1 == 1) {
    FUN_005033e0(local_1c);
    FUN_005033e0(local_10);
    FUN_00526d00();
  }
  else {
    iVar2 = FUN_00527250(local_10);
    if (iVar2 != 0) {
      (*(code *)**(undefined4 **)(iVar2 + 0x28 + *(int *)(*(int *)(iVar2 + 0x28) + 8)))();
    }
    switch(sVar1) {
    case 2:
      FUN_0050bfa0();
      break;
    case 3:
      if (iVar2 != 0) {
        FUN_00562eb0(0,4);
      }
      break;
    case 4:
      if (iVar2 != 0) {
        FUN_00562eb0(0,1);
      }
      break;
    case 5:
      if (iVar2 != 0) {
        FUN_00562eb0(0,5);
      }
    }
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x28 + *(int *)(*(int *)(iVar2 + 0x28) + 8)) + 4))();
    }
  }
  return;
}

