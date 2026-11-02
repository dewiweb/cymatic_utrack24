// rea decompile_all
// name: FUN_0040fceb
// address: 0x40fceb
// body: available
// range: 0x40fceb-0x40fd8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040fceb(int param_1)

{
  bool bVar1;
  int in_EAX;
  int iVar2;
  int local_10;
  
  local_10 = 0;
  iVar2 = *(int *)(in_EAX + 0x48);
  if (iVar2 != 0x62697473) {
    bVar1 = false;
    if (iVar2 == 0x6f75746c) {
      iVar2 = *(int *)(param_1 + 0x9c);
    }
    else {
      iVar2 = FUN_0040fb2d(iVar2);
    }
    local_10 = 7;
    while (iVar2 != 0) {
      local_10 = (**(code **)(iVar2 + 0x3c))(iVar2);
      if (local_10 == 0) {
        if (!bVar1) {
          return 0;
        }
        FUN_0040fc9b();
        return 0;
      }
      if ((char)local_10 != '\x13') {
        return local_10;
      }
      iVar2 = FUN_0040fb2d(*(undefined4 *)(in_EAX + 0x48));
      bVar1 = true;
    }
  }
  return local_10;
}

