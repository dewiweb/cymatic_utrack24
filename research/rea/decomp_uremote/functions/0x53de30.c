// rea decompile_all
// name: FUN_0053de30
// address: 0x53de30
// body: available
// range: 0x53de30-0x53df79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053de30(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_38;
  undefined4 local_18;
  undefined2 local_c;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 0x24))();
  bVar1 = (**(code **)(*(int *)(iVar2 + 0x28 + *(int *)(*(int *)(iVar2 + 0x28) + 0xc)) + 0x24))();
  local_c = 0;
  while( true ) {
    local_18 = (int *)0x0;
    if (local_c < *(ushort *)(in_ECX + 0x80)) {
      local_18 = *(int **)(*(int *)(in_ECX + 0x7c) + (uint)local_c * 4);
    }
    local_c = local_c + 1;
    if (local_18 == (int *)0x0) break;
    FUN_00515830();
    if (in_ECX == 0x174) {
      local_38 = 0;
    }
    else {
      local_38 = in_ECX + -0x14c + *(int *)(*(int *)(in_ECX + -0x14c) + 0xc);
    }
    (**(code **)(*local_18 + 4))(local_38,bVar1 - 1,param_2);
    FUN_00515860();
  }
  return;
}

