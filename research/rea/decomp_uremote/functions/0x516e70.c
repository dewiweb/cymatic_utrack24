// rea decompile_all
// name: FUN_00516e70
// address: 0x516e70
// body: available
// range: 0x516e70-0x517176 inclusive
// range: 0x517179-0x5171cb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort * FUN_00516e70(ushort *param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  int *in_ECX;
  bool bVar5;
  undefined8 uVar6;
  uint local_48;
  int local_44;
  int local_40;
  int *local_3c;
  undefined1 *local_38;
  uint local_30;
  ushort local_2a;
  uint local_28;
  int local_1c;
  ushort local_18;
  undefined *local_14;
  int local_10;
  ushort local_c;
  ushort local_8;
  
  if ((uint)(param_2 - in_ECX[3]) < 0x32) {
    *param_1 = 0;
  }
  else {
    in_ECX[3] = param_2;
    local_48 = 0x516eba;
    local_3c = in_ECX;
    FUN_00515830();
    local_18 = 0;
    local_c = 0;
    local_8 = 0;
    local_14 = (undefined *)(param_3 - local_3c[4]);
    local_10 = (param_4 - local_3c[5]) - (uint)(param_3 < (uint)local_3c[4]);
    if ((local_10 != 0) || (iVar4 = 0, (undefined *)0x1312cff < local_14)) {
      uVar2 = local_3c[4];
      local_3c[4] = uVar2 + 20000000;
      local_3c[5] = local_3c[5] + (uint)(0xfeced2ff < uVar2);
      bVar5 = local_14 < (undefined *)0x1312d00;
      local_14 = local_14 + -20000000;
      local_10 = local_10 - (uint)bVar5;
      if ((local_10 != 0) || (iVar4 = 0, (undefined *)0x1312cff < local_14)) {
        local_48 = 0;
        uVar6 = __aullrem(param_3,param_4,20000000);
        local_3c[4] = param_3 - (uint)uVar6;
        local_3c[5] = (param_4 - (int)((ulonglong)uVar6 >> 0x20)) - (uint)(param_3 < (uint)uVar6);
        local_14 = (undefined *)(param_3 - local_3c[4]);
        iVar4 = (param_4 - local_3c[5]) - (uint)(param_3 < (uint)local_3c[4]);
      }
    }
    local_10 = iVar4;
    if ((local_10 == 0) && (local_14 <= &UNK_0098967f)) {
      uVar3 = local_18;
      if ((undefined *)0x4c4b3f < local_14) {
        uVar3 = local_18 | 8;
      }
    }
    else if ((local_10 != 0) || (uVar3 = local_18 | 0x10, (undefined *)0xe4e1bf < local_14)) {
      uVar3 = local_18 | 0x18;
    }
    for (; (local_18 = uVar3, local_10 != 0 || ((undefined *)0x1e847f < local_14));
        local_14 = local_14 + -2000000) {
      local_10 = local_10 - (uint)(local_14 < (undefined *)0x1e8480);
      uVar3 = local_18;
    }
    if ((undefined *)0xf423f < local_14) {
      local_18 = local_18 | 4;
      bVar5 = local_14 < (undefined *)0xf4240;
      local_14 = local_14 + -1000000;
      local_10 = -(uint)bVar5;
    }
    if ((local_10 == 0) && (local_14 < (undefined *)0x7a120)) {
      *(undefined1 *)((int)local_3c + 0x1e) = 1;
    }
    else {
      local_18 = local_18 | 2;
      *(undefined1 *)((int)local_3c + 0x1e) = 0;
      bVar5 = local_14 < (undefined *)0x7a120;
      local_14 = local_14 + -500000;
      local_10 = local_10 - (uint)bVar5;
    }
    if ((local_10 != 0) || ((undefined *)0x3d08f < local_14)) {
      local_18 = local_18 | 1;
    }
    local_c = *(ushort *)(local_3c + 7) ^ local_18;
    if (local_c != 0) {
      local_8 = local_c;
      if ((local_c & 2) != 0) {
        bVar1 = *(byte *)((int)local_3c + 0x1e);
        local_8 = local_c | (((ushort)bVar1 - (ushort)bVar1) - (ushort)(bVar1 != 0) & 0xe000) +
                            0x4000;
      }
      local_1c = *local_3c;
      while (local_1c != 0) {
        if ((*(ushort *)(local_1c + 0xc) & local_8) != 0) {
          local_48 = 0x5170ea;
          FUN_00515830();
          uVar3 = *(ushort *)(local_1c + 0xc) & local_8;
          local_28 = (uint)uVar3;
          if (local_3c[6] == 0) {
            local_40 = 0;
            local_48 = local_28;
          }
          else {
            local_44 = local_3c[6];
            local_48 = *(uint *)(*(int *)(local_44 + 0xc) + 4);
            local_40 = local_44 + 0xc + local_48;
          }
          local_38 = (undefined1 *)&local_48;
                    /* WARNING: Ignoring partial resolution of indirect */
          local_48._0_2_ = uVar3;
          (**(code **)**(undefined4 **)(local_1c + 0x10))(local_40,param_3,param_4);
          local_48 = 0x517167;
          FUN_00515860();
        }
        if (local_1c == 0) {
          local_1c = *local_3c;
        }
        else {
          local_1c = *(int *)(local_1c + 8);
        }
      }
    }
    local_30 = (uint)local_18;
    local_2a = local_18;
    *(ushort *)(local_3c + 7) = local_18;
    local_48 = 0x5171b2;
    FUN_00515860();
    *param_1 = local_8;
  }
  return param_1;
}

