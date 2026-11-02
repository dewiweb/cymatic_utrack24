// rea decompile_all
// name: FUN_0051ade0
// address: 0x51ade0
// body: available
// range: 0x51ade0-0x51b0f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0051ade0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *local_8c;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cf958;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = FUN_005af82d(0x108,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (local_1c == 0) {
    local_8c = (undefined4 *)0x0;
  }
  else {
    local_8c = (undefined4 *)
               FUN_0051a6a0(**(undefined4 **)(param_1 + 0x88),**(int **)(param_1 + 0x88) + 0xa08,1);
  }
  local_18 = local_8c;
  local_8 = 0xffffffff;
  local_14 = local_8c;
  if (local_8c != (undefined4 *)0x0) {
    uVar2 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x98)
            )(local_28);
    FUN_00503650(uVar2);
    uVar2 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0xa4)
            )(local_34);
    FUN_00503650(uVar2);
    local_38 = *(undefined4 *)(param_1 + 0x84);
    local_14[0x28] = local_38;
    local_3c = *(undefined4 *)(param_1 + 0x6c);
    local_14[0x22] = local_3c;
    local_40 = *(undefined4 *)(param_1 + 0x74);
    local_14[0x23] = local_40;
    local_44 = *(undefined4 *)(param_1 + 0x7c);
    local_14[0x24] = local_44;
    local_48 = *(undefined4 *)(param_1 + 0x70);
    local_14[0x25] = local_48;
    local_4c = *(undefined4 *)(param_1 + 0x78);
    local_14[0x26] = local_4c;
    local_50 = *(undefined4 *)(param_1 + 0x80);
    local_14[0x27] = local_50;
    uVar2 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0xbc)
            )(local_58,1);
    local_8 = 1;
    FUN_00501e80(uVar2);
    local_8 = 0xffffffff;
    FUN_00501900();
    FUN_00501e80(**(int **)(param_1 + 0x88) + 0xb8);
    FUN_005063a0(**(int **)(param_1 + 0x88) + 0x100);
    *(byte *)(local_14 + 0x36) = *(byte *)(local_14 + 0x36) | 1;
    cVar1 = FUN_005289f0(5,**(int **)(param_1 + 0x88) + 0x4c0);
    if (cVar1 != '\0') {
      ExceptionList = local_10;
      return local_14;
    }
    if (local_14 != (undefined4 *)0x0) {
      (**(code **)*local_14)(1);
    }
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

