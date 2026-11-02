// rea decompile_all
// name: FUN_005416e0
// address: 0x5416e0
// body: available
// range: 0x5416e0-0x541a5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005416e0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_5c;
  undefined4 local_40;
  undefined4 local_24;
  undefined2 local_1c;
  undefined2 local_14;
  undefined2 local_c;
  
  iVar2 = (**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0xc))();
  if (iVar2 == 0x82ff) {
    iVar2 = (**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x24))();
    cVar1 = *(char *)(iVar2 + 0x78);
    if (cVar1 == -0xf) {
      local_c = 0;
      while( true ) {
        local_24 = (int *)0x0;
        if (local_c < *(ushort *)(in_ECX + 0xc)) {
          local_24 = *(int **)(*(int *)(in_ECX + 8) + (uint)local_c * 4);
        }
        local_c = local_c + 1;
        if (local_24 == (int *)0x0) break;
        FUN_00515830();
        if (in_ECX == 0x174) {
          local_80 = 0;
        }
        else {
          local_80 = in_ECX + -0x14c + *(int *)(*(int *)(in_ECX + -0x14c) + 0x10);
        }
        (**(code **)(*local_24 + 8))(local_80);
        FUN_00515860();
      }
    }
    else if (cVar1 == -0xe) {
      local_14 = 0;
      while( true ) {
        local_40 = (int *)0x0;
        if (local_14 < *(ushort *)(in_ECX + 0xc)) {
          local_40 = *(int **)(*(int *)(in_ECX + 8) + (uint)local_14 * 4);
        }
        local_14 = local_14 + 1;
        if (local_40 == (int *)0x0) break;
        FUN_00515830();
        if (in_ECX == 0x174) {
          local_84 = 0;
        }
        else {
          local_84 = in_ECX + -0x14c + *(int *)(*(int *)(in_ECX + -0x14c) + 0x10);
        }
        uVar3 = FUN_00501d60();
        (**(code **)(*local_40 + 0xc))
                  (local_84,*(undefined2 *)(iVar2 + 0x7c),*(undefined2 *)(iVar2 + 0x7e),uVar3);
        FUN_00515860();
      }
    }
    else if (cVar1 == -0xd) {
      local_1c = 0;
      while( true ) {
        local_5c = (int *)0x0;
        if (local_1c < *(ushort *)(in_ECX + 0xc)) {
          local_5c = *(int **)(*(int *)(in_ECX + 8) + (uint)local_1c * 4);
        }
        local_1c = local_1c + 1;
        if (local_5c == (int *)0x0) break;
        FUN_00515830();
        if (in_ECX == 0x174) {
          local_88 = 0;
        }
        else {
          local_88 = in_ECX + -0x14c + *(int *)(*(int *)(in_ECX + -0x14c) + 0x10);
        }
        (**(code **)(*local_5c + 0x10))
                  (local_88,*(undefined2 *)(iVar2 + 0x7c),*(undefined2 *)(iVar2 + 0x7e),
                   *(undefined1 *)(iVar2 + 0x80));
        FUN_00515860();
      }
    }
  }
  return;
}

