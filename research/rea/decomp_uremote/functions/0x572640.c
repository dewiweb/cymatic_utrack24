// rea decompile_all
// name: FUN_00572640
// address: 0x572640
// body: available
// range: 0x572640-0x57280e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00572640(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  int local_60;
  undefined4 *local_48;
  undefined1 local_40 [16];
  undefined4 *local_30;
  ushort local_2c;
  undefined1 local_28 [16];
  ushort local_18;
  undefined1 local_14 [16];
  
  FUN_00503bc0();
  while (*(short *)(in_ECX + 0x7a) != 0) {
    uVar2 = FUN_0055a250(local_40);
    FUN_00503de0(uVar2);
    cVar1 = FUN_00503fe0();
    if (cVar1 != '\0') break;
    (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x20))
              (local_14);
  }
  local_18 = 0;
  while (local_18 < *(ushort *)(in_ECX + 0x6c)) {
    cVar1 = FUN_005595e0(local_18);
    if (cVar1 == '\0') {
      local_18 = local_18 + 1;
    }
    else {
      FUN_00559900(local_28,local_18);
      cVar1 = FUN_00503fe0();
      if (cVar1 == '\0') {
        local_2c = 0;
        while( true ) {
          local_48 = (undefined4 *)0x0;
          if (local_2c < *(ushort *)(in_ECX + 0x94)) {
            local_48 = *(undefined4 **)(*(int *)(in_ECX + 0x90) + (uint)local_2c * 4);
          }
          local_30 = local_48;
          local_2c = local_2c + 1;
          if (local_48 == (undefined4 *)0x0) break;
          FUN_00515830();
          if (in_ECX == 0) {
            local_60 = 0;
          }
          else {
            local_60 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
          }
          (**(code **)*local_30)(local_60,local_28,0);
          FUN_00515860();
        }
        FUN_005592d0(local_18);
      }
    }
  }
  FUN_0055a360();
  return;
}

