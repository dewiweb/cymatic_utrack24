// rea decompile_all
// name: FUN_005430d0
// address: 0x5430d0
// body: available
// range: 0x5430d0-0x543375 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005430d0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint local_6c;
  int local_68;
  undefined1 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 *local_50;
  ushort local_4a;
  int *local_48;
  int *local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 *local_30;
  ushort local_2a;
  int *local_28;
  undefined4 *local_24;
  uint local_20;
  int *local_18;
  ushort local_14;
  undefined4 *local_10;
  ushort local_c;
  int local_8;
  
  uStack_70 = 0x5430fe;
  iVar1 = (**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0xc))();
  if (iVar1 == 0x82ff) {
    uStack_70 = 0x54312e;
    local_8 = (**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x24))();
    if (*(char *)(local_8 + 0x78) == -0x10) {
      *(undefined2 *)(local_60 + 0x10) = *(undefined2 *)(local_8 + 0x7e);
      *(undefined2 *)(local_60 + 0x12) = *(undefined2 *)(local_8 + 0x80);
      local_c = 0;
      local_64 = 0xf0;
      while( true ) {
        local_2a = local_c;
        local_28 = (int *)(local_60 + 4);
        local_24 = (undefined4 *)0x0;
        if (local_c < *(ushort *)(local_60 + 8)) {
          local_24 = *(undefined4 **)(*local_28 + (uint)local_c * 4);
        }
        local_10 = local_24;
        local_c = local_c + 1;
        if (local_24 == (undefined4 *)0x0) break;
        local_30 = *(undefined4 **)(local_60 + -0xec);
        local_34 = *local_30;
        uStack_70 = 0x5431e8;
        FUN_00515830();
        local_20 = (uint)*(ushort *)(local_8 + 0x7c);
        if (local_60 == 0x174) {
          local_68 = 0;
        }
        else {
          local_68 = local_60 + -0x14c + *(int *)(*(int *)(local_60 + -0x14c) + 0x10);
        }
        uStack_70 = (uint)*(ushort *)(local_8 + 0x80);
        uStack_74 = (uint)*(ushort *)(local_8 + 0x7e);
        local_38 = (undefined1 *)&uStack_78;
        uStack_78 = uStack_70;
                    /* WARNING: Ignoring partial resolution of indirect */
        uStack_78._0_2_ = *(ushort *)(local_8 + 0x7c);
        (**(code **)*local_10)(local_68);
        local_3c = *(undefined4 **)(local_60 + -0xec);
        local_40 = *local_3c;
        uStack_70 = 0x543271;
        FUN_00515860();
      }
    }
    else if (*(char *)(local_8 + 0x78) == -0xc) {
      local_14 = 0;
      local_64 = 0xf4;
      while( true ) {
        local_4a = local_14;
        local_48 = (int *)(local_60 + 4);
        local_44 = (int *)0x0;
        if (local_14 < *(ushort *)(local_60 + 8)) {
          local_44 = *(int **)(*local_48 + (uint)local_14 * 4);
        }
        local_18 = local_44;
        local_14 = local_14 + 1;
        if (local_44 == (int *)0x0) break;
        local_50 = *(undefined4 **)(local_60 + -0xec);
        local_54 = *local_50;
        uStack_70 = 0x5432f5;
        FUN_00515830();
        if (local_60 == 0x174) {
          local_6c = 0;
        }
        else {
          local_6c = local_60 + -0x14c + *(int *)(*(int *)(local_60 + -0x14c) + 0x10);
        }
        uStack_70 = 0x54332f;
        uStack_70 = FUN_00501d60();
        uStack_74 = (uint)*(ushort *)(local_8 + 0x7c);
        uStack_78 = local_6c;
        (**(code **)(*local_18 + 8))();
        local_58 = *(undefined4 **)(local_60 + -0xec);
        local_5c = *local_58;
        uStack_70 = 0x54336b;
        FUN_00515860();
      }
    }
  }
  return;
}

