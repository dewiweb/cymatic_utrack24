// rea decompile_all
// name: FUN_005a0660
// address: 0x5a0660
// body: available
// range: 0x5a0660-0x5a0699 inclusive
// range: 0x5a069f-0x5a0825 inclusive
// range: 0x5a082b-0x5a095a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a0660(uint param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined1 *local_90;
  uint local_8c;
  undefined1 *local_88;
  char local_83;
  char local_82;
  char local_81;
  int local_80;
  int *local_7c;
  int local_78;
  int local_74;
  ushort local_6e;
  int *local_6c;
  int *local_68;
  uint local_64;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 local_48 [16];
  uint local_38;
  uint local_34;
  undefined1 *local_28;
  uint local_1c;
  int *local_10;
  ushort local_c;
  uint local_8;
  
  local_80 = *(byte *)(param_1 + 0x78) - 0x47;
  local_7c = in_ECX;
  switch(*(byte *)(param_1 + 0x78)) {
  case 0x47:
    local_8 = param_1;
    local_8c = *(uint *)(param_1 + 0xf0);
    local_90 = local_48;
    local_64 = local_8c;
    local_38 = local_8c;
    uVar1 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24)
            )();
    FUN_00559820(uVar1);
    break;
  case 0x4a:
    local_c = 0;
    while( true ) {
      local_6e = local_c;
      local_6c = local_7c + 0x4f;
      local_68 = (int *)0x0;
      if (local_c < *(ushort *)(local_7c + 0x50)) {
        local_68 = *(int **)(*local_6c + (uint)local_c * 4);
      }
      local_10 = local_68;
      local_c = local_c + 1;
      if (local_68 == (int *)0x0) break;
      local_74 = local_7c[0xb];
      local_8c = 0x5a08ee;
      FUN_00515830();
      if (local_7c == (int *)0x0) {
        local_88 = (undefined1 *)0x0;
      }
      else {
        local_88 = (undefined1 *)((int)local_7c + *(int *)(local_7c[10] + 0x10) + 0x28);
      }
      local_8c = 0x5a0924;
      local_8c = FUN_00501d60();
      local_90 = local_88;
      (**(code **)(*local_10 + 0x14))();
      local_78 = local_7c[0xb];
      local_8c = 0x5a0950;
      FUN_00515860();
    }
    break;
  case 0xc1:
    local_4c = (undefined1 *)&local_90;
    local_81 = FUN_00504c10();
    if (local_81 != '\0') {
      local_1c = (uint)*(ushort *)(param_1 + 0x7c);
      local_50 = (undefined1 *)&local_8c;
      local_8c = param_1;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_8c._0_2_ = *(ushort *)(param_1 + 0x7c);
      local_90 = (undefined1 *)0x5a06fb;
      local_90 = (undefined1 *)FUN_00501d60();
      (**(code **)(*local_7c + 0x48))(param_1 + 0x88,param_1 + 0xb8);
    }
    break;
  case 0xc2:
    local_54 = (undefined1 *)&local_90;
    local_82 = FUN_00504c10();
    if (local_82 != '\0') {
      local_28 = (undefined1 *)(uint)*(ushort *)(param_1 + 0x7e);
      local_8c = (uint)*(ushort *)(param_1 + 0x82);
      local_58 = (undefined1 *)&local_90;
      local_90 = local_28;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_90._0_2_ = *(ushort *)(param_1 + 0x7e);
      uVar1 = FUN_00501d60();
      (**(code **)(*local_7c + 0x4c))(param_1 + 0x88,*(undefined2 *)(param_1 + 0x7c),uVar1);
    }
    break;
  case 0xc3:
    local_5c = (undefined1 *)&local_90;
    local_83 = FUN_00504c10();
    if (local_83 != '\0') {
      local_34 = (uint)*(ushort *)(param_1 + 0x7c);
      local_60 = (undefined1 *)&local_8c;
      local_8c = local_34;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_8c._0_2_ = *(ushort *)(param_1 + 0x7c);
      local_90 = (undefined1 *)0x5a0809;
      local_90 = (undefined1 *)FUN_00501d60();
      (**(code **)(*local_7c + 0x50))(param_1 + 0x88);
    }
  }
  return;
}

