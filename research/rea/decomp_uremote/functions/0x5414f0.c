// rea decompile_all
// name: FUN_005414f0
// address: 0x5414f0
// body: available
// range: 0x5414f0-0x5416c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005414f0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_14;
  undefined2 local_8;
  
  if (param_3 == '\0') {
    local_8 = 0;
    while( true ) {
      local_14 = (int *)0x0;
      if (local_8 < *(ushort *)(in_ECX + 0xc)) {
        local_14 = *(int **)(*(int *)(in_ECX + 8) + (uint)local_8 * 4);
      }
      local_8 = local_8 + 1;
      if (local_14 == (int *)0x0) break;
      FUN_00515830();
      if (in_ECX == 0x174) {
        local_3c = 0;
      }
      else {
        local_3c = in_ECX + -0x14c + *(int *)(*(int *)(in_ECX + -0x14c) + 0x10);
      }
      (**(code **)(*local_14 + 4))(local_3c);
      FUN_00515860();
    }
  }
  else if (*(char *)(in_ECX + 0x1a) != '\0') {
    *(undefined1 *)(in_ECX + 0x1a) = 0;
    iVar1 = FUN_0056cb70(**(undefined4 **)(in_ECX + -0xec),*(undefined2 *)(in_ECX + 0x14),
                         *(undefined2 *)(in_ECX + 0x16),*(undefined2 *)(in_ECX + 0x18));
    if (iVar1 != 0) {
      if (iVar1 == 0) {
        local_40 = 0;
      }
      else {
        local_40 = iVar1 + 0x28 + *(int *)(*(int *)(iVar1 + 0x28) + 0xc);
      }
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x10) + 0x28 +
                           *(int *)(*(int *)(*(int *)(in_ECX + 0x10) + 0x28) + 0xc)) + 0x38))
                (local_40,1);
      (**(code **)(*(int *)(iVar1 + 0x28 + *(int *)(*(int *)(iVar1 + 0x28) + 8)) + 4))();
    }
  }
  return;
}

