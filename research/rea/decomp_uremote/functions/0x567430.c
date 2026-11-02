// rea decompile_all
// name: FUN_00567430
// address: 0x567430
// body: available
// range: 0x567430-0x567552 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00567430(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int in_ECX;
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined1 local_3c [16];
  uint local_2c;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined1 local_18 [16];
  uint local_8;
  
  for (local_8 = 0; local_8 < *(ushort *)(in_ECX + 0x58); local_8 = local_8 + 1) {
    FUN_00559900(local_18,local_8);
    cVar1 = FUN_00503fe0();
    if (cVar1 == '\0') {
      cVar1 = FUN_00503830(local_18,param_1);
      if (cVar1 != '\0') {
        FUN_00503c60(local_18);
        local_24 = param_2;
        FUN_005593c0(local_18,local_28);
      }
    }
  }
  for (local_2c = 0; local_2c < *(ushort *)(in_ECX + 0x6c); local_2c = local_2c + 1) {
    FUN_00559900(local_3c,local_2c);
    cVar1 = FUN_00503fe0();
    if (cVar1 == '\0') {
      cVar1 = FUN_00503830(local_3c,param_1);
      if (cVar1 != '\0') {
        FUN_00503c60(local_3c);
        local_48 = param_2;
        FUN_005593c0(local_3c,local_4c);
      }
    }
  }
  FUN_005675b0();
  return;
}

