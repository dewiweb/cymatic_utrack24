// rea decompile_all
// name: FUN_00577ec0
// address: 0x577ec0
// body: available
// range: 0x577ec0-0x57814c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00577ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  int local_6c;
  int local_68;
  int local_64;
  int *local_48;
  int *local_34;
  int *local_20;
  ushort local_18;
  ushort local_10;
  ushort local_8;
  
  switch(param_1) {
  case 1:
  case 2:
  case 3:
  case 6:
  case 7:
  case 8:
  case 9:
    local_8 = 0;
    while( true ) {
      local_20 = (int *)0x0;
      if (local_8 < *(ushort *)(in_ECX + 0x5c)) {
        local_20 = *(int **)(*(int *)(in_ECX + 0x58) + (uint)local_8 * 4);
      }
      local_8 = local_8 + 1;
      if (local_20 == (int *)0x0) break;
      FUN_00515830();
      if (in_ECX == 0) {
        local_64 = 0;
      }
      else {
        local_64 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
      }
      (**(code **)(*local_20 + 8))(local_64,param_2,param_1);
      FUN_00515860();
    }
    break;
  case 4:
    local_10 = 0;
    while( true ) {
      local_34 = (int *)0x0;
      if (local_10 < *(ushort *)(in_ECX + 0x5c)) {
        local_34 = *(int **)(*(int *)(in_ECX + 0x58) + (uint)local_10 * 4);
      }
      local_10 = local_10 + 1;
      if (local_34 == (int *)0x0) break;
      FUN_00515830();
      if (in_ECX == 0) {
        local_68 = 0;
      }
      else {
        local_68 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
      }
      (**(code **)(*local_34 + 0xc))(local_68,param_2,param_3,1);
      FUN_00515860();
    }
    break;
  case 5:
    local_18 = 0;
    while( true ) {
      local_48 = (int *)0x0;
      if (local_18 < *(ushort *)(in_ECX + 0x5c)) {
        local_48 = *(int **)(*(int *)(in_ECX + 0x58) + (uint)local_18 * 4);
      }
      local_18 = local_18 + 1;
      if (local_48 == (int *)0x0) break;
      FUN_00515830();
      if (in_ECX == 0) {
        local_6c = 0;
      }
      else {
        local_6c = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
      }
      (**(code **)(*local_48 + 0xc))(local_6c,param_2,param_3,0);
      FUN_00515860();
    }
  }
  return;
}

