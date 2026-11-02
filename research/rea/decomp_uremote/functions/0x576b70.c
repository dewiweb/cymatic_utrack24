// rea decompile_all
// name: FUN_00576b70
// address: 0x576b70
// body: available
// range: 0x576b70-0x576d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00576b70(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 *puVar3;
  int local_6c;
  int *local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [12];
  int *local_2c;
  ushort local_28;
  undefined1 local_14 [16];
  
  FUN_00503bc0();
  puVar3 = local_38;
  uVar2 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x68) + 0x28 +
                               *(int *)(*(int *)(*(int *)(in_ECX + 0x68) + 0x28) + 0xc)) + 0x98))
                    (puVar3,*(undefined2 *)(in_ECX + 0x98));
  FUN_00503c30(uVar2,puVar3);
  while (*(short *)(in_ECX + 0x7e) != 0) {
    uVar2 = FUN_0055a250(local_48);
    FUN_00503de0(uVar2);
    cVar1 = FUN_00503fe0();
    if (cVar1 != '\0') break;
    cVar1 = FUN_00503ca0(in_ECX + 0xf8);
    if (cVar1 != '\0') {
      FUN_00503de0(&DAT_0095c854);
    }
    local_28 = 0;
    while( true ) {
      local_50 = (int *)0x0;
      if (local_28 < *(ushort *)(in_ECX + 0x4c)) {
        local_50 = *(int **)(*(int *)(in_ECX + 0x48) + (uint)local_28 * 4);
      }
      local_2c = local_50;
      local_28 = local_28 + 1;
      if (local_50 == (int *)0x0) break;
      FUN_00515830();
      if (in_ECX == 0) {
        local_6c = 0;
      }
      else {
        local_6c = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
      }
      (**(code **)(*local_2c + 4))(local_6c,local_14,1);
      FUN_00515860();
    }
    FUN_00560ea0();
  }
  FUN_0055a360();
  return;
}

