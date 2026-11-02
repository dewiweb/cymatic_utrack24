// rea decompile_all
// name: FUN_00578200
// address: 0x578200
// body: available
// range: 0x578200-0x5782f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00578200(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 local_2c;
  undefined4 local_14;
  undefined2 local_c;
  
  cVar1 = FUN_00559ad0(param_1);
  if (cVar1 != '\0') {
    local_c = 0;
    while( true ) {
      local_14 = (int *)0x0;
      if (local_c < *(ushort *)(in_ECX + 0x4c)) {
        local_14 = *(int **)(*(int *)(in_ECX + 0x48) + (uint)local_c * 4);
      }
      local_c = local_c + 1;
      if (local_14 == (int *)0x0) break;
      FUN_00515830();
      if (in_ECX == 0) {
        local_2c = 0;
      }
      else {
        local_2c = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
      }
      (**(code **)(*local_14 + 4))(local_2c,param_1,0);
      FUN_00515860();
    }
    FUN_00560ea0();
  }
  return;
}

