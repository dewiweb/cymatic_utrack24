// rea decompile_all
// name: FUN_0052d160
// address: 0x52d160
// body: available
// range: 0x52d160-0x52d2da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052d160(undefined4 param_1)

{
  int in_ECX;
  undefined4 uStack_84;
  char *pcStack_80;
  undefined4 *puStack_7c;
  int iStack_78;
  undefined4 local_74;
  char *pcStack_70;
  undefined4 *puStack_6c;
  undefined4 local_68;
  int local_64;
  int *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  int local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    local_40 = *(int **)(*(int *)(in_ECX + 4) + 0x88);
    local_44 = *local_40;
    local_8 = local_44;
  }
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(undefined4 *)(in_ECX + 8) = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    local_24 = 0;
    local_5c = *(int *)(in_ECX + 4);
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    puStack_6c = &local_1c;
    pcStack_70 = "Mirror";
    local_48 = (undefined1 *)&local_74;
    local_74 = 0;
    iStack_78 = 0x52d217;
    local_58 = in_ECX;
    local_60 = (int *)(**(code **)(*(int *)(local_5c + 0x28 +
                                           *(int *)(*(int *)(local_5c + 0x28) + 0xc)) + 0x108))();
    iStack_78 = local_58;
    puStack_7c = (undefined4 *)0x52d231;
    local_c = local_60;
    (**(code **)(*local_60 + 4))();
    local_3c = 0;
    local_64 = *(int *)(local_58 + 4);
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    puStack_7c = &local_34;
    pcStack_80 = "Mirror";
    local_4c = (undefined1 *)&uStack_84;
    uStack_84 = 0;
    local_68 = (**(code **)(*(int *)(local_64 + 0x28 + *(int *)(*(int *)(local_64 + 0x28) + 0xc)) +
                           0xe4))();
    *(undefined4 *)(local_58 + 8) = local_68;
    if (local_8 == 0) {
      local_50 = *(int **)(*(int *)(local_58 + 4) + 0x88);
      local_54 = *local_50;
      local_8 = local_54;
    }
  }
  if (local_8 != 0) {
    puStack_6c = (undefined4 *)0x52d2d5;
    FUN_00515bd0();
  }
  return;
}

