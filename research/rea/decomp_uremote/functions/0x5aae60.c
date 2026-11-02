// rea decompile_all
// name: FUN_005aae60
// address: 0x5aae60
// body: available
// range: 0x5aae60-0x5aaf8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005aae60(void)

{
  int in_ECX;
  bool bVar1;
  undefined4 uVar2;
  undefined4 local_34;
  undefined4 local_10;
  undefined2 local_8;
  
  local_8 = 0;
  while( true ) {
    local_10 = (int *)0x0;
    if (local_8 < *(ushort *)(in_ECX + 0x114)) {
      local_10 = *(int **)(*(int *)(in_ECX + 0x110) + (uint)local_8 * 4);
    }
    local_8 = local_8 + 1;
    if (local_10 == (int *)0x0) break;
    FUN_00515830();
    if (in_ECX == 0) {
      local_34 = 0;
    }
    else {
      local_34 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0x10);
    }
    (**(code **)(*local_10 + 4))(local_34);
    FUN_00515860();
  }
  if (*(short *)(in_ECX + 0x114) == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = **(int **)(in_ECX + 0x110) == 0;
  }
  if ((bVar1) && ((*(uint *)(in_ECX + 0x70) & 0x40000000) != 0)) {
    uVar2 = 8;
    FUN_005686d0(8);
    FUN_0055f9c0(uVar2);
  }
  return;
}

