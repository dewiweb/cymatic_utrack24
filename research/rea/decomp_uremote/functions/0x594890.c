// rea decompile_all
// name: FUN_00594890
// address: 0x594890
// body: available
// range: 0x594890-0x594aea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00594890(void)

{
  bool bVar1;
  int in_ECX;
  int local_54;
  undefined4 *local_2c;
  ushort local_18;
  undefined1 local_11;
  int local_10;
  uint local_c;
  int local_8;
  
  local_8 = FUN_0052e6e0();
  if ((*(int *)(in_ECX + 0x44) != 0) && (799 < (uint)(local_8 - *(int *)(in_ECX + 0x44)))) {
    local_c = 0;
    while( true ) {
      if (*(ushort *)(*(int *)(in_ECX + 4) + 0xb8) <= local_c) break;
      local_10 = FUN_0055bb40(local_c);
      if (local_10 != 0) {
        if ((*(int *)(local_10 + 0x10) == 1) || (*(int *)(local_10 + 0x10) == 2)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x28 +
                               *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x28) + 0xc)) + 0x174))
                    (local_10,0x3000,0,0,0,0,0,&DAT_0095c854);
        }
      }
      local_c = local_c + 1;
    }
    *(undefined4 *)(in_ECX + 0x44) = 0;
  }
  if (((*(char *)(in_ECX + 0x3c) != '\0') && (*(char *)(in_ECX + 0x3d) != '\0')) &&
     (*(int *)(in_ECX + 0x48) == 0)) {
    local_11 = 0xfe;
    local_18 = 0;
    while( true ) {
      local_2c = (undefined4 *)0x0;
      if (local_18 < *(ushort *)(in_ECX + 0x20)) {
        local_2c = *(undefined4 **)(*(int *)(in_ECX + 0x1c) + (uint)local_18 * 4);
      }
      local_18 = local_18 + 1;
      if (local_2c == (undefined4 *)0x0) break;
      FUN_00515830();
      if (*(int *)(in_ECX + 4) == 0) {
        local_54 = 0;
      }
      else {
        local_54 = *(int *)(in_ECX + 4) + 0x28 +
                   *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x28) + 0xc);
      }
      (**(code **)*local_2c)(local_54,1,&local_11,&DAT_0095c854);
      FUN_00515860();
    }
  }
  if ((*(int *)(in_ECX + 0x48) != 0) && (5000 < (uint)(local_8 - *(int *)(in_ECX + 0x48)))) {
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  return;
}

