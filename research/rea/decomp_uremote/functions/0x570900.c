// rea decompile_all
// name: FUN_00570900
// address: 0x570900
// body: available
// range: 0x570900-0x570a91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00570900(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_54;
  undefined4 *local_3c;
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined4 *local_14;
  ushort local_10;
  uint local_c;
  int local_8;
  
  for (local_8 = FUN_005740c0(); local_8 != 0; local_8 = FUN_00574150(local_8)) {
    (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 0xc)) + 0x3c))();
    *(undefined1 *)(local_8 + 0xf3) = 1;
    for (local_c = 0; local_c < *(ushort *)(local_8 + 0x6c); local_c = local_c + 1) {
      uVar2 = FUN_00559900(local_24,local_c);
      cVar1 = FUN_00503830(param_1,uVar2);
      if (cVar1 != '\0') {
        local_10 = 0;
        while( true ) {
          local_3c = (undefined4 *)0x0;
          if (local_10 < *(ushort *)(local_8 + 0x94)) {
            local_3c = *(undefined4 **)(*(int *)(local_8 + 0x90) + (uint)local_10 * 4);
          }
          local_14 = local_3c;
          local_10 = local_10 + 1;
          if (local_3c == (undefined4 *)0x0) break;
          FUN_00515830();
          if (local_8 == 0) {
            local_54 = 0;
          }
          else {
            local_54 = local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 0xc);
          }
          uVar3 = 1;
          uVar2 = FUN_00559900(local_34,local_c);
          (**(code **)*local_14)(local_54,uVar2,uVar3);
          FUN_00515860();
        }
      }
    }
  }
  return;
}

