// rea decompile_all
// name: FUN_00570740
// address: 0x570740
// body: available
// range: 0x570740-0x5708f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00570740(undefined4 param_1)

{
  char cVar1;
  int local_44;
  undefined4 *local_2c;
  ushort local_20;
  undefined1 local_1c [16];
  uint local_c;
  int local_8;
  
  local_8 = FUN_005740c0();
  do {
    if (local_8 == 0) {
      return;
    }
    (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 0xc)) + 0x3c))();
    for (local_c = 0; local_c < *(ushort *)(local_8 + 0x6c); local_c = local_c + 1) {
      FUN_00559900(local_1c,local_c);
      cVar1 = FUN_005039c0();
      if (cVar1 == '\0') {
        cVar1 = FUN_005034a0(local_1c);
        if (cVar1 != '\0') goto LAB_00570810;
        cVar1 = FUN_005039a0();
        if (cVar1 != '\0') {
          cVar1 = FUN_00503830(local_1c,param_1);
          if (cVar1 != '\0') goto LAB_00570810;
        }
      }
      else {
LAB_00570810:
        local_20 = 0;
        while( true ) {
          local_2c = (undefined4 *)0x0;
          if (local_20 < *(ushort *)(local_8 + 0x94)) {
            local_2c = *(undefined4 **)(*(int *)(local_8 + 0x90) + (uint)local_20 * 4);
          }
          local_20 = local_20 + 1;
          if (local_2c == (undefined4 *)0x0) break;
          FUN_00515830();
          if (local_8 == 0) {
            local_44 = 0;
          }
          else {
            local_44 = local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 0xc);
          }
          (**(code **)*local_2c)(local_44,local_1c,0);
          FUN_00515860();
        }
      }
    }
    local_8 = FUN_00574150(local_8);
  } while( true );
}

