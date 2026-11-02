// rea decompile_all
// name: FUN_004234c6
// address: 0x4234c6
// body: available
// range: 0x4234c6-0x4236ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004234c6(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_EDX;
  undefined1 local_98 [12];
  int local_8c;
  undefined1 local_88 [64];
  uint local_48;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  uint local_2c;
  int local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  uint local_10;
  undefined **local_c;
  undefined1 *local_8;
  
  local_24 = *(undefined1 **)(param_1 + 500);
  local_18 = local_24 + *(int *)(param_1 + 0x1f8);
  local_40 = *(undefined4 *)(*(int *)(param_1 + 0x60) + 4);
  if (((local_24 == (undefined1 *)0x0) || (local_18 < local_24 + 4)) ||
     (CONCAT11(*local_24,local_24[1]) != 0)) {
    uVar3 = 8;
  }
  else {
    local_10 = (uint)CONCAT11(local_24[2],local_24[3]);
    puVar1 = local_24 + 4;
    while ((local_10 != 0 && (puVar1 + 8 <= local_18))) {
      local_30 = CONCAT11(*puVar1,puVar1[1]);
      local_2e = CONCAT11(puVar1[2],puVar1[3]);
      local_34 = 0;
      local_8 = puVar1 + 8;
      local_3c = CONCAT31(CONCAT21(CONCAT11(puVar1[4],puVar1[5]),puVar1[6]),puVar1[7]);
      if ((local_3c != 0) && (local_3c <= *(int *)(param_1 + 0x1f8) - 2U)) {
        local_14 = local_24 + local_3c;
        local_2c = (uint)CONCAT11(*local_14,local_14[1]);
        for (local_c = &PTR_DAT_0090b8cc; *local_c != (undefined *)0x0; local_c = local_c + 1) {
          local_1c = *local_c;
          if (*(uint *)(local_1c + 0x28) == local_2c) {
            local_20 = 0;
            local_38 = param_1;
            FUN_0040d9b9(local_18);
            local_48 = (uint)*(ushort *)(extraout_EDX + 0x108);
            iVar2 = __setjmp3(local_88,0);
            if (iVar2 == 0) {
              local_20 = (**(code **)(local_1c + 0x2c))(local_14,local_98);
            }
            if ((local_8c == 0) && (iVar2 = FUN_0040f8e2(local_1c,local_14,&local_28), iVar2 == 0))
            {
              *(undefined4 *)(local_28 + 0x14) = local_20;
            }
            break;
          }
        }
      }
      local_10 = local_10 - 1;
      puVar1 = local_8;
    }
    uVar3 = 0;
  }
  return uVar3;
}

