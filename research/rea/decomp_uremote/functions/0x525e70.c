// rea decompile_all
// name: FUN_00525e70
// address: 0x525e70
// body: available
// range: 0x525e70-0x52612f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00525e70(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  byte local_a0;
  byte local_9c;
  byte local_98;
  undefined1 local_74 [12];
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined1 local_50 [12];
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  byte local_29;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_1c = param_1;
  local_10 = param_1 + 0xc;
  local_30 = *(uint *)(param_1 + 0x18);
  local_34 = *(uint *)(param_1 + 0x1c);
  local_38 = *(uint *)(param_1 + 0x20);
  local_3c = *(uint *)(param_1 + 0x24);
  local_40 = *(uint *)(param_1 + 0x28);
  local_44 = *(uint *)(param_1 + 0x2c);
  local_28 = local_30;
  local_20 = local_40;
  local_18 = local_3c;
  local_14 = local_44;
  local_c = local_34;
  local_8 = local_38;
  local_24 = FUN_00527250(param_1);
  do {
    do {
      if (local_24 == 0) {
        return 0;
      }
      local_24 = FUN_005270f0(local_24);
    } while (local_24 == 0);
    local_29 = 0;
    if ((*(byte *)(param_1 + 0x44) & 4) == 0) {
      cVar1 = FUN_005039c0();
      if (cVar1 == '\0') {
        iVar3 = local_10;
        (**(code **)(*(int *)(local_24 + 0x28 + *(int *)(*(int *)(local_24 + 0x28) + 0xc)) + 0xa4))
                  (local_50,local_10);
        local_29 = FUN_005034a0(iVar3);
      }
      else {
        local_29 = *(int *)(local_24 + 0x114) == 0;
      }
    }
    else {
      local_29 = 1;
    }
    if ((local_28 == 0xffffffff) ||
       (local_54 = *(uint *)(local_24 + 0x70), (local_54 & local_28) != 0)) {
      local_98 = 1;
    }
    else {
      local_98 = 0;
    }
    local_58 = *(uint *)(local_24 + 0x70);
    if ((local_8 == 0xffffffff) ||
       (local_5c = *(uint *)(local_24 + 0x80), (local_5c & local_8) != 0)) {
      local_9c = 1;
    }
    else {
      local_9c = 0;
    }
    local_60 = *(uint *)(local_24 + 0x7c);
    if ((local_20 == 0xffffffff) ||
       (local_64 = *(uint *)(local_24 + 0x78), (local_64 & local_20) != 0)) {
      local_a0 = 1;
    }
    else {
      local_a0 = 0;
    }
    local_68 = *(uint *)(local_24 + 0x74);
    local_29 = local_29 & local_98 & 1U - ((local_58 & local_c) != 0) & local_9c &
               1U - ((local_60 & local_18) != 0) & local_a0 & 1U - ((local_68 & local_14) != 0);
  } while (local_29 == 0);
  uVar2 = (**(code **)(*(int *)(local_24 + 0x28 + *(int *)(*(int *)(local_24 + 0x28) + 0xc)) + 0x98)
          )(local_74);
  FUN_00503650(uVar2);
  return local_24;
}

