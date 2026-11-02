// rea decompile_all
// name: FUN_00573420
// address: 0x573420
// body: available
// range: 0x573420-0x573859 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00573420(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 *puVar5;
  int local_ac;
  int local_a8;
  undefined4 *local_88;
  undefined4 *local_74;
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined4 *local_2c;
  ushort local_28;
  undefined1 local_24 [16];
  undefined4 *local_14;
  ushort local_10;
  undefined1 local_c [7];
  char local_5;
  
  iVar1 = *(int *)(in_ECX + 0x2c);
  uVar2 = *(uint *)(iVar1 + 0x598);
  *(uint *)(iVar1 + 0x598) = uVar2 + 1;
  *(uint *)(iVar1 + 0x59c) = *(int *)(iVar1 + 0x59c) + (uint)(0xfffffffe < uVar2);
  cVar3 = *(char *)(param_1 + 0x78);
  if (cVar3 == '\0') {
    FUN_0054f6b0();
    uVar4 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24)
            )(local_3c);
    FUN_00559ad0(uVar4);
    puVar5 = local_4c;
    uVar4 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24)
            )(puVar5,local_c);
    local_5 = FUN_00559080(uVar4,puVar5);
    if (local_5 != '\0') {
      uVar4 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) +
                          0x24))(local_5c);
      FUN_00573b40(uVar4);
    }
    FUN_0054f6f0();
    if (local_5 != '\0') {
      *(undefined1 *)(in_ECX + 0xf3) = 1;
      local_10 = 0;
      while( true ) {
        local_74 = (undefined4 *)0x0;
        if (local_10 < *(ushort *)(in_ECX + 0x94)) {
          local_74 = *(undefined4 **)(*(int *)(in_ECX + 0x90) + (uint)local_10 * 4);
        }
        local_14 = local_74;
        local_10 = local_10 + 1;
        if (local_74 == (undefined4 *)0x0) break;
        FUN_00515830();
        if (in_ECX == 0) {
          local_a8 = 0;
        }
        else {
          local_a8 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
        }
        uVar4 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) +
                            0x24))(local_6c,1);
        (**(code **)*local_14)(local_a8,uVar4);
        FUN_00515860();
      }
    }
  }
  else if (cVar3 == '\x06') {
    (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24))
              (local_24);
    cVar3 = FUN_0055a3c0(local_24);
    if (cVar3 != '\0') {
      local_28 = 0;
      while( true ) {
        local_88 = (undefined4 *)0x0;
        if (local_28 < *(ushort *)(in_ECX + 0x94)) {
          local_88 = *(undefined4 **)(*(int *)(in_ECX + 0x90) + (uint)local_28 * 4);
        }
        local_2c = local_88;
        local_28 = local_28 + 1;
        if (local_88 == (undefined4 *)0x0) break;
        FUN_00515830();
        if (in_ECX == 0) {
          local_ac = 0;
        }
        else {
          local_ac = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
        }
        (**(code **)*local_2c)(local_ac,local_24,0);
        FUN_00515860();
      }
    }
    FUN_00559230(local_24);
  }
  else if (cVar3 == 'F') {
    if (*(char *)(in_ECX + 0xf5) != '\0') {
      *(char *)(in_ECX + 0xf5) = *(char *)(in_ECX + 0xf5) + -1;
    }
    if (*(char *)(in_ECX + 0xf5) == '\0') {
      *(undefined1 *)(in_ECX + 0xf4) = 0;
    }
    if (*(char *)(in_ECX + 0xf5) == '\0') {
      FUN_00573860();
    }
  }
  return;
}

