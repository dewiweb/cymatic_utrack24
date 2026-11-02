// rea decompile_all
// name: FUN_00525930
// address: 0x525930
// body: available
// range: 0x525930-0x525ab2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00525930(int param_1)

{
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  int local_10;
  char local_9;
  undefined4 local_8;
  
  local_8 = 0;
  local_9 = '\0';
  switch(*(undefined2 *)(param_1 + 0x24)) {
  case 1:
    local_9 = '\x01';
    local_8 = 0x10;
    break;
  case 3:
    local_9 = '\x01';
    local_8 = 0x11;
    break;
  case 4:
    local_9 = '\x01';
    local_8 = 0x12;
    break;
  case 5:
    local_9 = '\x01';
    local_8 = 0x12;
    break;
  case 0x10:
    local_9 = '\x01';
    local_8 = 0x20;
    break;
  case 0x11:
    local_9 = '\x01';
    local_8 = 0x21;
    break;
  case 0x12:
    local_9 = '\x01';
    local_8 = 0x22;
    break;
  case 0x13:
    local_9 = '\0';
    local_8 = 0x30;
    break;
  case 0x14:
    local_9 = '\0';
    local_8 = 0x31;
  }
  if (local_9 != '\0') {
    FUN_005033e0(param_1 + 0x18);
    local_10 = FUN_00527250(local_1c);
    if (local_10 != 0) {
      (*(code *)**(undefined4 **)(local_10 + 0x28 + *(int *)(*(int *)(local_10 + 0x28) + 8)))();
      FUN_00562eb0(0,3);
      FUN_005033e0(param_1 + 0x18);
      FUN_00526570(local_28);
      (**(code **)(*(int *)(local_10 + 0x28 + *(int *)(*(int *)(local_10 + 0x28) + 8)) + 4))();
    }
  }
  FUN_005033e0(param_1 + 0x18);
  FUN_0050bd00(local_34,local_8);
  return;
}

