// rea decompile_all
// name: FUN_00572870
// address: 0x572870
// body: available
// range: 0x572870-0x572b85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00572870(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 *puVar4;
  int local_90;
  int local_8c;
  int local_84;
  int local_80;
  int *local_68;
  undefined4 *local_50;
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  int *local_1c;
  ushort local_18;
  undefined4 *local_14;
  ushort local_10;
  undefined1 local_c [6];
  char local_6;
  char local_5;
  
  FUN_0054f6b0();
  uVar3 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24))
                    (local_2c);
  local_5 = FUN_00559ad0(uVar3);
  if (local_5 == '\0') {
    FUN_0054f6f0();
  }
  else {
    puVar4 = local_c;
    uVar3 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24)
            )(local_3c,puVar4);
    local_6 = FUN_00559080(uVar3,puVar4);
    FUN_0054f6f0();
    if (local_6 != '\0') {
      *(undefined1 *)(in_ECX + 0xf3) = 1;
      local_10 = 0;
      while( true ) {
        local_50 = (undefined4 *)0x0;
        if (local_10 < *(ushort *)(in_ECX + 0x94)) {
          local_50 = *(undefined4 **)(*(int *)(in_ECX + 0x90) + (uint)local_10 * 4);
        }
        local_14 = local_50;
        local_10 = local_10 + 1;
        if (local_50 == (undefined4 *)0x0) break;
        FUN_00515830();
        if (in_ECX == 0) {
          local_80 = 0;
        }
        else {
          local_80 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
        }
        uVar3 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) +
                            0x24))(local_4c,1);
        (**(code **)*local_14)(local_80,uVar3);
        FUN_00515860();
      }
    }
  }
  if (*(char *)(in_ECX + 0x58) != '\0') {
    if (param_1 == 0) {
      local_84 = 0;
    }
    else {
      local_84 = param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc);
    }
    FUN_00573950(local_84);
  }
  iVar1 = *(int *)(in_ECX + 0x2c);
  uVar2 = *(uint *)(iVar1 + 0x590);
  *(uint *)(iVar1 + 0x590) = uVar2 + 1;
  *(uint *)(iVar1 + 0x594) = *(int *)(iVar1 + 0x594) + (uint)(0xfffffffe < uVar2);
  local_18 = 0;
  while( true ) {
    local_68 = (int *)0x0;
    if (local_18 < *(ushort *)(in_ECX + 0x94)) {
      local_68 = *(int **)(*(int *)(in_ECX + 0x90) + (uint)local_18 * 4);
    }
    local_1c = local_68;
    local_18 = local_18 + 1;
    if (local_68 == (int *)0x0) break;
    FUN_00515830();
    if (param_1 == 0) {
      local_8c = 0;
    }
    else {
      local_8c = param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc);
    }
    if (in_ECX == 0) {
      local_90 = 0;
    }
    else {
      local_90 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
    }
    (**(code **)(*local_1c + 8))(local_90,local_8c);
    FUN_00515860();
  }
  return;
}

