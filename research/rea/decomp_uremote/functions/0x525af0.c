// rea decompile_all
// name: FUN_00525af0
// address: 0x525af0
// body: available
// range: 0x525af0-0x525e61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00525af0(ushort param_1,undefined4 param_2,uint *param_3,uint *param_4,uint *param_5,
                undefined4 *param_6,uint *param_7,undefined4 *param_8,int param_9)

{
  char cVar1;
  undefined4 uVar2;
  byte local_a4;
  byte local_a0;
  byte local_9c;
  undefined1 local_3c [12];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined1 local_18 [15];
  byte local_9;
  int local_8;
  
  local_8 = FUN_005270a0();
  while( true ) {
    if (local_8 == 0) {
      return 0;
    }
    local_9 = 0;
    if ((param_1 & 1) == 0) {
      cVar1 = FUN_005039c0();
      if (cVar1 == '\0') {
        uVar2 = param_2;
        (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 0xc)) + 0xa4))
                  (local_18,param_2);
        local_9 = FUN_005034a0(uVar2);
      }
      else {
        local_9 = *(int *)(local_8 + 0x114) == 0;
      }
    }
    else {
      local_9 = 1;
    }
    if ((*param_3 == 0xffffffff) ||
       (local_1c = *(uint *)(local_8 + 0x70), (local_1c & *param_3) != 0)) {
      local_9c = 1;
    }
    else {
      local_9c = 0;
    }
    local_20 = *(uint *)(local_8 + 0x70);
    if ((*param_5 == 0xffffffff) ||
       (local_24 = *(uint *)(local_8 + 0x80), (local_24 & *param_5) != 0)) {
      local_a0 = 1;
    }
    else {
      local_a0 = 0;
    }
    local_28 = *(uint *)(local_8 + 0x7c);
    if ((*param_7 == 0xffffffff) ||
       (local_2c = *(uint *)(local_8 + 0x78), (local_2c & *param_7) != 0)) {
      local_a4 = 1;
    }
    else {
      local_a4 = 0;
    }
    local_30 = *(uint *)(local_8 + 0x74);
    local_9 = local_9 & local_9c & 1U - ((local_20 & *param_4) != 0) & local_a0 &
              1U - ((local_28 & *param_5) != 0) & local_a4 & 1U - ((local_30 & *param_7) != 0);
    if (local_9 != 0) break;
    local_8 = FUN_005270f0(local_8);
  }
  uVar2 = (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 0xc)) + 0x98))
                    (local_3c);
  FUN_00503650(uVar2);
  FUN_00503650(param_2);
  *(uint *)(param_9 + 0x18) = *param_3;
  *(uint *)(param_9 + 0x1c) = *param_4;
  *(uint *)(param_9 + 0x20) = *param_5;
  *(undefined4 *)(param_9 + 0x24) = *param_6;
  *(uint *)(param_9 + 0x28) = *param_7;
  *(undefined4 *)(param_9 + 0x2c) = *param_8;
  *(undefined1 *)(param_9 + 0x44) = 0;
  *(byte *)(param_9 + 0x44) = *(byte *)(param_9 + 0x44) | -((param_1 & 1) != 0) & 4U;
  *(byte *)(param_9 + 0x44) = *(byte *)(param_9 + 0x44) | -((param_1 & 2) != 0) & 0x80U;
  *(byte *)(param_9 + 0x44) = *(byte *)(param_9 + 0x44) | 2;
  *(byte *)(param_9 + 0x44) = *(byte *)(param_9 + 0x44) | 1;
  return local_8;
}

