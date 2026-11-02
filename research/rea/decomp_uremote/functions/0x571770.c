// rea decompile_all
// name: FUN_00571770
// address: 0x571770
// body: available
// range: 0x571770-0x5718e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00571770(void)

{
  char cVar1;
  int in_ECX;
  int local_40;
  undefined4 *local_28;
  ushort local_1c;
  undefined1 local_18 [16];
  uint local_8;
  
  FUN_0054f6b0();
  for (local_8 = 0; local_8 < *(ushort *)(in_ECX + -0xa4); local_8 = local_8 + 1) {
    FUN_00559900(local_18,local_8);
    cVar1 = FUN_00503fe0();
    if (cVar1 == '\0') {
      FUN_00573cd0(local_18);
      local_1c = 0;
      while( true ) {
        local_28 = (undefined4 *)0x0;
        if (local_1c < *(ushort *)(in_ECX + -0x7c)) {
          local_28 = *(undefined4 **)(*(int *)(in_ECX + -0x80) + (uint)local_1c * 4);
        }
        local_1c = local_1c + 1;
        if (local_28 == (undefined4 *)0x0) break;
        FUN_00515830();
        if (in_ECX == 0x110) {
          local_40 = 0;
        }
        else {
          local_40 = in_ECX + -0xe8 + *(int *)(*(int *)(in_ECX + -0xe8) + 0xc);
        }
        (**(code **)*local_28)(local_40,local_18,0);
        FUN_00515860();
      }
    }
  }
  FUN_005594b0();
  FUN_0054f6f0();
  return;
}

