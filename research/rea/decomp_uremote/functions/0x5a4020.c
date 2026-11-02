// rea decompile_all
// name: FUN_005a4020
// address: 0x5a4020
// body: available
// range: 0x5a4020-0x5a4426 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005a4020(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_ECX;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8;
  undefined1 *local_b4;
  undefined1 *local_b0;
  undefined1 *local_ac;
  undefined1 *local_a8;
  undefined1 *local_a4;
  undefined1 *local_a0;
  undefined1 local_9c [20];
  int local_88;
  undefined1 local_84 [8];
  uint local_7c;
  uint local_74;
  undefined1 local_6c [20];
  int local_58;
  undefined1 local_54 [8];
  uint local_4c;
  uint local_44;
  undefined1 local_3c [20];
  int local_28;
  undefined1 local_24 [8];
  uint local_1c;
  uint local_14;
  int local_8;
  
  local_bc = (uint)*(ushort *)(in_ECX + 0x48);
  uVar9 = (undefined2)((uint)in_ECX >> 0x10);
  local_b8 = in_ECX;
  if (local_bc == 1) {
    local_14 = (uint)*(ushort *)(in_ECX + 100);
    local_1c = (uint)*(ushort *)(in_ECX + 0x62);
    local_28 = *(int *)(in_ECX + 0x50);
    local_a0 = (undefined1 *)&local_d0;
    local_d4 = (undefined1 *)CONCAT22(uVar9,*(ushort *)(in_ECX + 100));
    local_a4 = (undefined1 *)&local_d4;
                    /* WARNING: Ignoring partial resolution of indirect */
    local_d4._0_2_ = *(ushort *)(in_ECX + 0x62);
    if (*(int *)(in_ECX + 0x54) == 0) {
      local_c0 = 0;
    }
    else {
      local_c0 = (uint)*(ushort *)(*(int *)(in_ECX + 0x54) + 0x54);
    }
    uVar1 = (uint)*(ushort *)(in_ECX + 0x60);
    uVar10 = (uint)*(ushort *)(in_ECX + 0x90);
    local_8 = in_ECX;
    uVar6 = FUN_00501d60(uVar10,uVar1);
    uVar7 = FUN_00501d60(uVar6);
    uVar8 = FUN_00501d60(uVar7);
    uVar5 = (uint)*(ushort *)(local_8 + 0x92);
    uVar11 = local_c0 & 0xffff;
    uVar2 = FUN_00501d60(uVar11,uVar5,uVar8);
    puVar13 = local_24;
    uVar3 = (**(code **)(*(int *)(local_b8 + 0x28 + *(int *)(*(int *)(local_b8 + 0x28) + 0xc)) + 4))
                      (puVar13,uVar2);
    puVar12 = local_3c;
    uVar4 = (**(code **)(*(int *)(local_28 + 0x28 + *(int *)(*(int *)(local_28 + 0x28) + 0xc)) +
                        0x40))(puVar12,uVar3);
    FUN_0059dd80(uVar4,puVar12,uVar3,puVar13,uVar2,uVar11,uVar5,uVar8,uVar7,uVar6,uVar10,uVar1);
    uVar6 = 1;
  }
  else if (local_bc == 2) {
    local_44 = (uint)*(ushort *)(in_ECX + 100);
    local_4c = (uint)*(ushort *)(in_ECX + 0x62);
    local_58 = *(int *)(in_ECX + 0x50);
    local_a8 = (undefined1 *)&local_d0;
    local_d4 = (undefined1 *)&local_d0;
    local_d0 = local_4c;
                    /* WARNING: Ignoring partial resolution of indirect */
    local_d0._0_2_ = *(ushort *)(in_ECX + 100);
    local_ac = (undefined1 *)&local_d4;
                    /* WARNING: Ignoring partial resolution of indirect */
    local_d4._0_2_ = *(ushort *)(in_ECX + 0x62);
    if (*(int *)(in_ECX + 0x74) == 0) {
      local_c4 = 0;
    }
    else {
      local_c4 = (uint)*(ushort *)(*(int *)(in_ECX + 0x74) + 0x54);
    }
    if (*(int *)(in_ECX + 0x54) == 0) {
      local_c8 = 0;
    }
    else {
      local_c8 = (uint)*(ushort *)(*(int *)(in_ECX + 0x54) + 0x54);
    }
    uVar10 = (uint)*(ushort *)(in_ECX + 0x60);
    uVar1 = local_c4;
    uVar5 = FUN_005a5830(local_c4,uVar10);
    uVar5 = uVar5 & 0xffff;
    uVar11 = local_c8 & 0xffff;
    uVar6 = FUN_00501d60(uVar11,uVar5);
    puVar13 = local_54;
    uVar7 = (**(code **)(*(int *)(local_b8 + 0x28 + *(int *)(*(int *)(local_b8 + 0x28) + 0xc)) + 4))
                      (puVar13,uVar6);
    puVar12 = local_6c;
    uVar8 = (**(code **)(*(int *)(local_58 + 0x28 + *(int *)(*(int *)(local_58 + 0x28) + 0xc)) +
                        0x40))(puVar12,uVar7);
    FUN_0059de30(uVar8,puVar12,uVar7,puVar13,uVar6,uVar11,uVar5,uVar1,uVar10);
    uVar6 = 1;
  }
  else if (local_bc == 4) {
    local_74 = (uint)*(ushort *)(in_ECX + 100);
    local_7c = (uint)*(ushort *)(in_ECX + 0x62);
    local_88 = *(int *)(in_ECX + 0x50);
    local_b0 = (undefined1 *)&local_d0;
    local_d4 = (undefined1 *)CONCAT22(uVar9,*(ushort *)(in_ECX + 100));
    local_b4 = (undefined1 *)&local_d4;
                    /* WARNING: Ignoring partial resolution of indirect */
    local_d4._0_2_ = *(ushort *)(in_ECX + 0x62);
    if (*(int *)(in_ECX + 0x54) == 0) {
      local_cc = 0;
    }
    else {
      local_cc = (uint)*(ushort *)(*(int *)(in_ECX + 0x54) + 0x54);
    }
    uVar5 = (uint)*(ushort *)(in_ECX + 0x60);
    uVar1 = local_cc;
    uVar6 = FUN_00501d60(local_cc,uVar5);
    puVar13 = local_84;
    uVar7 = (**(code **)(*(int *)(local_b8 + 0x28 + *(int *)(*(int *)(local_b8 + 0x28) + 0xc)) + 4))
                      (puVar13,uVar6);
    puVar12 = local_9c;
    uVar8 = (**(code **)(*(int *)(local_88 + 0x28 + *(int *)(*(int *)(local_88 + 0x28) + 0xc)) +
                        0x40))(puVar12,uVar7);
    FUN_0059ded0(uVar8,puVar12,uVar7,puVar13,uVar6,uVar1,uVar5);
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

