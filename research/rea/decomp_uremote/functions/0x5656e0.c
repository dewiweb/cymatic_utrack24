// rea decompile_all
// name: FUN_005656e0
// address: 0x5656e0
// body: available
// range: 0x5656e0-0x5659db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005656e0(int *param_1,int *param_2,ushort *param_3)

{
  undefined2 uVar1;
  bool bVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int *piVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined2 *local_6c;
  uint local_4c;
  undefined2 *local_48;
  undefined1 local_40 [2];
  undefined4 local_3e;
  undefined4 local_3a;
  undefined2 local_36;
  int local_34;
  undefined2 *local_30;
  undefined2 *local_2c;
  uint local_28;
  undefined1 local_24 [16];
  undefined2 *local_14;
  int local_10;
  undefined4 local_c;
  ushort local_8;
  
  local_c = 0x50;
  local_8 = 0;
  local_10 = FUN_0056a060();
  do {
    if ((local_10 == 0) || (0x4f < *param_3)) {
      return 1;
    }
    piVar7 = (int *)(**(code **)(*(int *)(local_10 + 0x28 +
                                         *(int *)(*(int *)(local_10 + 0x28) + 0xc)) + 0x18))
                              (local_24);
    if (((*piVar7 == *param_1) && (piVar7[1] == param_1[1])) &&
       ((short)piVar7[2] == (short)param_1[2])) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      if (*param_3 == local_8) {
        sVar3 = FUN_00568ee0();
        local_8 = local_8 + sVar3;
        local_28 = (uint)local_8;
        local_30 = (undefined2 *)FUN_005b04d6(local_28 * 10);
        if (local_30 == (undefined2 *)0x0) {
          local_6c = (undefined2 *)0x0;
        }
        else {
          local_4c = local_28;
          local_48 = local_30;
          while (local_4c = local_4c - 1, local_6c = local_30, -1 < (int)local_4c) {
            *local_48 = 0;
            local_48[1] = 0;
            local_48[2] = 0;
            local_48[3] = 0;
            local_48[4] = 0;
            local_48 = local_48 + 5;
          }
        }
        local_2c = local_6c;
        local_14 = local_6c;
        if (local_6c == (undefined2 *)0x0) {
          return 0;
        }
        _memcpy(local_6c,(void *)*param_2,(uint)*param_3 * 10);
        local_34 = *param_2;
        FUN_005b13e8(local_34);
        *param_2 = (int)local_14;
      }
      uVar1 = *(undefined2 *)(local_10 + 0xfa);
      uVar4 = (**(code **)(*(int *)(local_10 + 0x28 + *(int *)(*(int *)(local_10 + 0x28) + 0x10)) +
                          0xc))();
      uVar5 = (**(code **)(*(int *)(local_10 + 0x28 + *(int *)(*(int *)(local_10 + 0x28) + 0x10)) +
                          0x14))();
      uVar6 = (**(code **)(*(int *)(local_10 + 0x28 + *(int *)(*(int *)(local_10 + 0x28) + 0x10)) +
                          0x10))();
      puVar8 = (undefined2 *)
               (**(code **)(*(int *)(local_10 + 0x28 + *(int *)(*(int *)(local_10 + 0x28) + 0x10)) +
                           8))(local_40);
      local_3e = CONCAT22(*puVar8,uVar1);
      local_3a = CONCAT22(uVar5,uVar6);
      puVar9 = (undefined4 *)(*param_2 + (uint)*param_3 * 10);
      *puVar9 = local_3e;
      puVar9[1] = local_3a;
      *(undefined2 *)(puVar9 + 2) = uVar4;
      *param_3 = *param_3 + 1;
      local_36 = uVar4;
    }
    local_10 = FUN_0056a0a0(local_10);
  } while( true );
}

