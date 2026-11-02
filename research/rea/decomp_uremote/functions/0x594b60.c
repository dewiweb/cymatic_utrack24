// rea decompile_all
// name: FUN_00594b60
// address: 0x594b60
// body: available
// range: 0x594b60-0x594e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00594b60(void)

{
  bool bVar1;
  int in_ECX;
  int local_80;
  int local_78;
  undefined4 *local_50;
  undefined4 *local_34;
  ushort local_20;
  ushort local_18;
  byte local_11;
  char local_10 [4];
  int local_c;
  uint local_8;
  
  if ((*(uint *)(in_ECX + 0x44) & 1) != 0) {
    local_8 = 0;
    while( true ) {
      if (*(ushort *)(*(int *)(in_ECX + 0x18) + 0xb8) <= local_8) break;
      local_c = FUN_0055bb40(local_8);
      if (local_c != 0) {
        if ((*(int *)(local_c + 0x10) == 1) || (*(int *)(local_c + 0x10) == 2)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          (**(code **)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28 +
                               *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28) + 0xc)) + 0x174))
                    (local_c,0x3000,0,0,0,0,0,&DAT_0095c854);
        }
      }
      local_8 = local_8 + 1;
    }
  }
  if (((*(uint *)(in_ECX + 0x44) & 2) != 0) && (*(int *)(in_ECX + 0x5c) == 0)) {
    for (local_11 = 0; local_11 < 0x10; local_11 = local_11 + 1) {
      local_10[0] = local_11 + 0xb0;
      local_10[1] = 0x7b;
      local_10[2] = 0;
      local_18 = 0;
      while( true ) {
        local_34 = (undefined4 *)0x0;
        if (local_18 < *(ushort *)(in_ECX + 0x34)) {
          local_34 = *(undefined4 **)(*(int *)(in_ECX + 0x30) + (uint)local_18 * 4);
        }
        local_18 = local_18 + 1;
        if (local_34 == (undefined4 *)0x0) break;
        FUN_00515830();
        if (*(int *)(in_ECX + 0x18) == 0) {
          local_78 = 0;
        }
        else {
          local_78 = *(int *)(in_ECX + 0x18) + 0x28 +
                     *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28) + 0xc);
        }
        (**(code **)*local_34)(local_78,3,local_10,&DAT_0095c854);
        FUN_00515860();
      }
      local_10[0] = local_11 + 0xb0;
      local_10[1] = 0x79;
      local_10[2] = 0;
      local_20 = 0;
      while( true ) {
        local_50 = (undefined4 *)0x0;
        if (local_20 < *(ushort *)(in_ECX + 0x34)) {
          local_50 = *(undefined4 **)(*(int *)(in_ECX + 0x30) + (uint)local_20 * 4);
        }
        local_20 = local_20 + 1;
        if (local_50 == (undefined4 *)0x0) break;
        FUN_00515830();
        if (*(int *)(in_ECX + 0x18) == 0) {
          local_80 = 0;
        }
        else {
          local_80 = *(int *)(in_ECX + 0x18) + 0x28 +
                     *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28) + 0xc);
        }
        (**(code **)*local_50)(local_80,3,local_10,&DAT_0095c854);
        FUN_00515860();
      }
    }
  }
  return;
}

