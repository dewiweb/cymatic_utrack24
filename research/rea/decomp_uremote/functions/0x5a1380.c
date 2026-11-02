// rea decompile_all
// name: FUN_005a1380
// address: 0x5a1380
// body: available
// range: 0x5a1380-0x5a1484 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a1380(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  int local_4c;
  int *local_34;
  undefined1 local_14 [8];
  int *local_c;
  ushort local_8;
  
  uVar2 = FUN_005a1840(local_14);
  cVar1 = FUN_005a18c0(uVar2);
  if (cVar1 != '\0') {
    local_8 = 0;
    while( true ) {
      local_34 = (int *)0x0;
      if (local_8 < *(ushort *)(in_ECX + 0x140)) {
        local_34 = *(int **)(*(int *)(in_ECX + 0x13c) + (uint)local_8 * 4);
      }
      local_c = local_34;
      local_8 = local_8 + 1;
      if (local_34 == (int *)0x0) break;
      FUN_00515830();
      if (in_ECX == 0) {
        local_4c = 0;
      }
      else {
        local_4c = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0x10);
      }
      (**(code **)(*local_c + 8))(local_4c,param_2,param_3,param_4,param_5);
      FUN_00515860();
    }
  }
  return;
}

