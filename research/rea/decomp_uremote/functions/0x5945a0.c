// rea decompile_all
// name: FUN_005945a0
// address: 0x5945a0
// body: available
// range: 0x5945a0-0x594706 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005945a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int in_ECX;
  int local_38;
  undefined4 *local_14;
  ushort local_c;
  undefined1 local_5;
  
  if ((*(int *)(in_ECX + 0x30) == 0) ||
     ((**(code **)(**(int **)(in_ECX + 0x30) + 8))(param_1,param_2,param_3),
     *(char *)(in_ECX + 0x34) == '\0')) {
    if (param_3 == 1) {
      local_5 = 0xfa;
    }
    else if (param_3 == 2) {
      local_5 = 0xfc;
    }
    else {
      if (param_3 != 3) {
        return;
      }
      local_5 = 0xfb;
    }
    local_c = 0;
    while( true ) {
      local_14 = (undefined4 *)0x0;
      if (local_c < *(ushort *)(in_ECX + 0x28)) {
        local_14 = *(undefined4 **)(*(int *)(in_ECX + 0x24) + (uint)local_c * 4);
      }
      local_c = local_c + 1;
      if (local_14 == (undefined4 *)0x0) break;
      FUN_00515830();
      if (*(int *)(in_ECX + 0xc) == 0) {
        local_38 = 0;
      }
      else {
        local_38 = *(int *)(in_ECX + 0xc) + 0x28 +
                   *(int *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x28) + 0xc);
      }
      (**(code **)*local_14)(local_38,1,&local_5,param_2);
      FUN_00515860();
    }
  }
  return;
}

