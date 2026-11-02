// rea decompile_all
// name: FUN_004e5423
// address: 0x4e5423
// body: available
// range: 0x4e5423-0x4e5556 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e5423(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *in_ECX;
  int iVar4;
  undefined1 local_104 [12];
  undefined4 *puStack_f8;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e4e98;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004e22ca(DAT_00955fd4 ^ (uint)&stack0xfffffef0);
  local_c = 0;
  thunk_FUN_004c1d58();
  FUN_004e2891();
  (**(code **)(*in_ECX + 0xb4))(local_104);
  puVar1 = (undefined4 *)FUN_005af82d(0xc);
  puStack_f8 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
    *puVar1 = juce::ModalCallbackFunction::ComponentCaller1<juce::ComboBox>::vftable;
    puVar1[1] = &LAB_004e53fe;
    FUN_004f5fb6();
  }
  puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
  uVar3 = *(undefined4 *)(in_ECX[0x2f] + 0x1c);
  iVar4 = in_ECX[6];
  uVar2 = FUN_004e4c5d(iVar4,iVar4,uVar3,puVar1);
  FUN_004e248e(uVar2);
  FUN_004e24c6();
  FUN_004e2554(uVar2);
  FUN_004e251d(iVar4);
  FUN_004e2530();
  uVar3 = FUN_004e2541(uVar3);
  thunk_FUN_004e2732(&stack0xfffffef8,uVar3,puVar1);
  puStack_10 = (undefined1 *)0xffffffff;
  thunk_FUN_004f657d(&stack0xfffffef8);
  ExceptionList = pvStack_18;
  return;
}

