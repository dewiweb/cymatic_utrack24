// rea decompile_all
// name: FUN_00409dca
// address: 0x409dca
// body: available
// range: 0x409dca-0x409ed0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00409dca(void)

{
  undefined4 uVar1;
  int in_EAX;
  undefined4 local_8;
  
  uVar1 = *(undefined4 *)(in_EAX + 4);
  FUN_00408c29();
  FUN_00408c29();
  FUN_00408c29();
  FUN_00408c29();
  if (*(int *)(in_EAX + 0x768) != 0) {
    local_8 = 0;
    if (*(int *)(in_EAX + 0x768) != 0) {
      do {
        FUN_004099ef(uVar1);
        local_8 = local_8 + 1;
      } while (local_8 < *(uint *)(in_EAX + 0x768));
    }
    FUN_00411a5c(*(undefined4 *)(in_EAX + 0x76c));
    *(undefined4 *)(in_EAX + 0x76c) = 0;
  }
  FUN_0040954d();
  FUN_004092a3();
  FUN_004099ef(uVar1);
  FUN_004090ed();
  FUN_00411a5c(*(undefined4 *)(in_EAX + 0xb90));
  *(undefined4 *)(in_EAX + 0xb90) = 0;
  FUN_00411a5c(*(undefined4 *)(in_EAX + 0x518));
  *(undefined4 *)(in_EAX + 0x518) = 0;
  FUN_00411a5c(*(undefined4 *)(in_EAX + 0x51c));
  *(undefined4 *)(in_EAX + 0x51c) = 0;
  FUN_00411a5c(*(undefined4 *)(in_EAX + 0x524));
  *(undefined4 *)(in_EAX + 0x524) = 0;
  FUN_00411a5c(*(undefined4 *)(in_EAX + 0x528));
  *(undefined4 *)(in_EAX + 0x528) = 0;
  return;
}

